"""
The field classes serve multiple purposes.
They define some more info about the used types. The attribute editor will use these to provide the user with easier to use options.
Fields can also be written back to file in case of class info.
In case of entities we can use them to define keyvalues or add save/restore functionality (single player).
"""
from srcbuiltins import Color
from vmath import Vector, QAngle
from game.dispatch import receiver
from game.signals import postlevelshutdown
from utils import UTIL_StringToVector, UTIL_StringToAngle, UTIL_StringToColor
from . networkvar import NetworkVar, NetworkArray, NetworkDict, NetworkDefaultDict, NetworkVarProp
from _entitiesmisc import _fieldtypes as fieldtypes
if isserver:
    from _entitiesmisc import COutputEvent, variant_t

import inspect
import copy
import weakref
import ast
from types import MethodType
from collections import defaultdict

    
if isclient:
    from vgui import localize
    
# A small helper for fgd help string generation
def _escape_helpstring(helpstring):
    return helpstring.replace('"', '\'')

# List of weak refs to all fields
# Used for resetting all fields to the defaults
fields = []

# Base field types
# Note: In case function names change, also update the CBaseEntity::KeyValue function.
class BaseField(object):
    """ Base class for fields.
        All fields should derive from this class."""
    def __init__(self, value=None, 
                       keyname=None, 
                       noreset=False, 
                       networked=False, 
                       clientchangecallback=None,
                       sendproxy=None,
                       propname='',
                       displayname='',
                       helpstring='',
                       nofgd=False,
                       cppimplemented=False,
                       choices=None):
        ''' Initializes the field.
        
            Kwargs:
               value (object): the default value
               keyname (string): the key name used to refer to this entity in Hammer (entities only), used by fgd generation.
               noreset (bool): prevents field from being reset on map change.
               networked (bool): if this field is networked for an entity (i.e. synced to the clients).
               clientchangecallback (methodname): callback on client if networked and the value changed.
               sendproxy (object): send proxy used if networked.
               propname (string): 
               displayname (string): Display name used in Hammer.
               helpstring (string): Help string used in Hammer.
               nofgd (bool): prevents fgd entry from being generated for this field.
               cppimplemented (bool): if implemented in c++. In this case it won't set the attribute on the instances of the object.
               choices (list): List of choices to be displayed in Hammer or attribute editor. Each choice is a tuple of the value and display name.
        '''
        super(BaseField, self).__init__()

        self.default = value
        self.keyname = keyname
        self.noreset = noreset or cppimplemented
        self.networked = networked
        self.propname = propname
        self.clientchangecallback = clientchangecallback
        self.sendproxy = sendproxy
        self.requiresinit = self.requiresinit or networked
        self.displayname = displayname
        self.helpstring = helpstring
        self.nofgd = nofgd
        self.cppimplemented = cppimplemented
        self.choices = choices
        
        assert not self.propname or not self.clientchangecallback, 'Cannot mix propname and clientchangecallback'
        
    def Parse(self, cls, name):
        """ Field parser method. To be used in the Meta Class or similar place to setup the fields on a class."""
        global fields
        self.name = name
        fields.append(weakref.ref(self))
        
        if not self.cppimplemented:
            # Set the default value to the class object
            self.Set(cls, self.default)
        else:
            # Implemented in c++, so just delete the field reference from the class
            # This way it should pick up the c++ implemented variable
            try:
                delattr(cls, name)
            except AttributeError:
                PrintWarning('Failed to delete attribute %s from cls %s\n' % (name, str(cls)))
                
        # Store the field instance and a weak class reference
        setattr(cls, '__%s_fieldinfo' % (name), self)
        self.clswref = weakref.ref(cls)
        
    def InitField(self, inst):
        """ Called if requiresinit is True and new instance is created.
            Used to initialize dicts and lists correctly for an instance."""
        if self.networked:
            if not self.propname:
                NetworkVar(inst, self.name, self.default, changedcallback=self.clientchangecallback, sendproxy=self.sendproxy)
            else:
                NetworkVarProp(inst, self.name, self.propname)
                
    def GenerateFGDDefaultValue(self):
        ''' Generates the default value for the fgd entry. 
            The default is the value double quoted.
        '''
        return '"%s"' % (self.default)
            
    def GenerateFGDProperty(self):
        ''' Generates the fgd entry for this field.'''
        if self.choices:
            entry = '%s(choices) : "%s" : %s : "%s" =\n\t[\n' % (self.keyname, self.displayname, self.GenerateFGDDefaultValue(), self.helpstring)
            for value, choicename in self.choices:
                value = str(int(value)) if self.fgdtype == 'integer' else '"%s"' % (value)
                entry += '\t\t%s : "%s"\n' % (value, choicename)
            entry += '\t]'
            return entry
        else:
            return '%(keyname)s(%(type)s)%(readonly)s: "%(displayname)s" : %(default)s : "%(helpstring)s"' % {
                'keyname' : self.keyname,
                'type' : self.fgdtype,
                'default' : self.GenerateFGDDefaultValue(),
                'readonly' : ' readonly' if self.fgdreadonly else '',
                'displayname' : self.displayname if self.displayname else self.keyname,
                'helpstring' : _escape_helpstring(self.helpstring),
            }
                
    def OnChangeOwnerNumber(self, inst, oldownernumber):
        pass
        
    def Reset(self):
        """ Reset value to default. 
        
        This is used in case the user changed a value with the attribute editor or
        when the game changed values during a game (like increasing hp or dmg of units)."""
        if self.clswref and not self.noreset:
            self.Set(self.clswref(), self.default)
        
    def Copy(self):
        ''' Makes a copy of this field. This is used for creating fields in subclasses. '''
        cpy = copy.copy(self)
        if type(cpy.choices) == list: 
            cpy.choices = list(cpy.choices)
        return cpy
        
    def Verify(self, value):
        """ Verify user input. """
        try:
            self.ToValue(value)
        except:
            raise ValueError('Value %s is not a %s:\n%s' % (value, self.__class__.__name__, traceback.format_exc()))
        
    def ToValue(self, rawvalue):
        """ Convert value to right type.
            Will return the same value if already correct.
            This method can also be used to convert the value to something else.
        """
        return rawvalue
        
    def ToString(self, value):
        """ Convert value to string representation """
        return str(value)

    # Getters/setters for user input
    def Get(self, clsorinst, allowdefault=False):
        if allowdefault:
            return getattr(clsorinst, self.name, self.default)
        return getattr(clsorinst, self.name)
        
    def Set(self, clsorinst, value):
        self.Verify(value)
        setattr(clsorinst, self.name, self.ToValue(value))
            
    def WriteDefaultToSourceFile(self, cls):
        # TODO: Needs finishing
        return
        
        filename = inspect.getsourcefile(cls)
        sourcelines = inspect.getsourcelines(cls)
        
        f = open(filename, 'rb')
        content = f.readlines()
        f.close()
        
        fout = open(filename, 'wb')
        linenumber = 0
        for line in sourcelines[0]:
            splitted = line.split('=')
            if splitted[0].rstrip().strip() == '__%s_fieldinfo' % (self.name):
                pass # Bla
                #content[sourcelines[1]+linenumber-1] = '%s=%s\n' % (self.default)
            linenumber += 1
        fout.writelines(content)
        fout.close()
    
    #: The name of this field. This is also the attribute name on the class/instance of this field.
    name = None
    #: A weak reference to the class object on which this field is defined
    clswref = None
    requiresinit = False
    #: Do not show up in the attribute editor if True
    hidden = False 
    #: Never reset this value to the default
    noreset = False
    #: Units only: call OnChangeOwnerNumber when an unit changes.
    callonchangeownernumber = False 
    
    # fgd generation settings
    fgdtype = 'string'
    fgdreadonly = False
        
class GenericField(BaseField):
    """ Generic field which does not contain any functionality """
    pass
    
class BooleanField(BaseField):
    """ The boolean field only accepts True or False as values (or 
        anything that evaluates to that)."""
    def __init__(self, value=False, **kwargs):
        super(BooleanField, self).__init__(value=value, **kwargs)
        
    def ToValue(self, value):
        if value == "0": # Hammer will send "0" as False
            return False
        elif value == "1": # Hammer will send "1" as True
            return True
        # Fallback to evaluate as a boolean
        return bool(value)
        
    def GenerateFGDProperty(self):
        return '%(keyname)s(%(type)s)%(readonly)s: "%(displayname)s" : %(default)s : "%(helpstring)s" = \n\t[\n\t\t0 : "False"\n\t\t1 : "True"\n\t]' % {
            'keyname' : self.keyname,
            'type' : self.fgdtype,
            'default' : str(int(self.default)),
            'readonly' : ' readonly' if self.fgdreadonly else '',
            'displayname' : self.displayname if self.displayname else self.keyname,
            'helpstring' : _escape_helpstring(self.helpstring),
        }
        
    fgdtype = 'choices'
        
class IntegerField(BaseField):
    """ The integer field only accepts numbers as values (or 
        anything that evaluates to that)."""
    def __init__(self, value=0, **kwargs):
        super(IntegerField, self).__init__(value=value, **kwargs)
        
    def ToValue(self, value):
        return int(value)
        
    def GenerateFGDDefaultValue(self):
         # NOTE: integers are not wrapped in ""...
        return '%d' % (self.default)
        
    fgdtype = 'integer'
 
class FloatField(BaseField):
    """ Float field """
    def __init__(self, value=0.0, **kwargs):
        super(FloatField, self).__init__(value=value, **kwargs)
        
    def ToValue(self, value):
        return float(value)
        
    fgdtype = 'float'
        
class StringField(BaseField):
    """ String field """
    def __init__(self, value='', **kwargs):
        super(StringField, self).__init__(value=value, **kwargs)
        
    def ToValue(self, value):
        return str(value)
        
    fgdtype = 'string'
    
class LocalizedStringField(StringField):
    ''' Localizes the string value. 
        Note: localized value is unicode by default!
              Use the encoding argument to change it if needed (i.e. encoding='ascii')
    '''
    def __init__(self, value='', encoding=None, **kwargs):
        super(StringField, self).__init__(value=value, **kwargs)
        
        self.encoding = encoding
        
    def ToValue(self, rawvalue):
        """ Convert string to value.
            Will return the same value if already correct. """
        # Localize value on client
        # On server return the unmodified string value
        try:
            localizedvalue = str(rawvalue)
        except UnicodeEncodeError:
            localizedvalue = unicode(rawvalue)
            
        if isclient and rawvalue and rawvalue[0] == '#':
            localizedvalue = localize.Find(rawvalue)
            if localizedvalue != None:
                if self.encoding:
                    localizedvalue = localizedvalue.encode(self.encoding)
            else:
                localizedvalue = ''
        return localizedvalue if localizedvalue != None else ''
    
class TargetSrcField(StringField):
    fgdtype = 'target_source'
    
class TargetDestField(StringField):
    fgdtype = 'target_destination'
    
class FilterField(StringField):
    fgdtype = 'filterclass'
    
class ModelField(StringField):
    fgdtype = 'studio'
        
class VectorField(BaseField):
    """ Vector field.
    
        Special Note: entity instances will make a copy of the default Vector value
                      on initialization, so you can safely modify the attributes of
                      the Vector.
    """
    def __init__(self, value=None, invalidate=False, **kwargs):
        if not value:
            value = Vector()
            invalidate = True
        if invalidate:
            value.Invalidate()
    
        super(VectorField, self).__init__(value=value, **kwargs)
    
    def ToValue(self, value):
        if type(value) is Vector:
            return Vector(value)
        return UTIL_StringToVector(value)
        
    def InitField(self, inst):
        if self.networked:
            assert(not self.propname)
            NetworkVar(inst, self.name, Vector(self.default), 
                    changedcallback=self.clientchangecallback, sendproxy=self.sendproxy)
        else:
            setattr(inst, self.name, Vector(self.default))
            
    def ToString(self, value):
        return '%f %f %f' % (value[0], value[1], value[2])
        
    def GenerateFGDDefaultValue(self):
        return '"%f %f %f"' % (self.default[0], self.default[1], self.default[2])
        
    requiresinit = True
    fgdtype = 'vector'
        
class QAngleField(BaseField):
    """ QAngle field.
    
        Special Note: entity instances will make a copy of the default QAngle value
                      on initialization, so you can safely modify the attributes of
                      the QAngle.
    """
    def __init__(self, value=None, invalidate=False, **kwargs):
        if not value:
            value = Vector()
            invalidate = True
        if invalidate:
            value.Invalidate()
    
        super(QAngleField, self).__init__(value=value, **kwargs)
    
    def ToValue(self, value):
        if type(value) is QAngle:
            return QAngle(value)
        return UTIL_StringToAngle(value)
        
    def InitField(self, inst):
        if self.networked:
            assert(not self.propname)
            NetworkVar(inst, self.name, QAngle(self.default)
                    , changedcallback=self.clientchangecallback, sendproxy=self.sendproxy)
        else:
            setattr(inst, self.name, QAngle(self.default))
            
    def ToString(self, value):
        return '%f %f %f' % (value[0], value[1], value[2])
        
    def GenerateFGDDefaultValue(self):
        return '"%f %f %f"' % (self.default[0], self.default[1], self.default[2])
        
    requiresinit = True
    fgdtype = 'angle'
        
class ColorField(BaseField):
    """ Color field """
    def ToValue(self, value):
        if type(value) is Color:
            return Color(value)
        return UTIL_StringToColor(value)
        
    fgdtype = 'color255'
        
class ListField(BaseField):
    """ List field.
    
        NOTE: networked list fields do not implement all list methods!
    """
    def __init__(self, value=list(), **kwargs):
        super(ListField, self).__init__(value=list(value), **kwargs)
        
    def InitField(self, inst):
        if self.networked:
            assert(not self.propname)
            NetworkArray(inst, self.name, list(self.default)
                    , changedcallback=self.clientchangecallback, sendproxy=self.sendproxy)
        else:
            setattr(inst, self.name, list(self.default))
            
    def ToValue(self, rawvalue):
        """ Convert string to value.
            Will return the same value if already correct. """
        if type(rawvalue) == str:
            return ast.literal_eval(rawvalue)
        return list(rawvalue) # Create a copy of the list
            
    requiresinit = True
    
class DictField(BaseField):
    """ Dictionary field.
    
        NOTE: networked dictionary fields do not implement all dict methods!
    """
    def __init__(self, value=dict(), default=None, **kwargs):
        super(DictField, self).__init__(value=value, **kwargs)
        self.defaultvalue = default
        
    def InitField(self, inst):
        if self.networked:
            assert(not self.propname)
            if self.defaultvalue is None:
                NetworkDict(inst, self.name, dict(self.default),
                        changedcallback=self.clientchangecallback, sendproxy=self.sendproxy) 
            else:
                NetworkDefaultDict(inst, self.name, dict(self.default),
                        default=self.defaultvalue, changedcallback=self.clientchangecallback, sendproxy=self.sendproxy) 
        else:
            setattr(inst, self.name, dict(self.default))

    def ToValue(self, rawvalue):
        """ Convert string to value.
            Will return the same value if already correct. """
        if type(rawvalue) == str:
            return ast.literal_eval(rawvalue)
        return dict(rawvalue) # Create a copy of the dictionary
            
    requiresinit = True
    
class FlagsField(BaseField):
    def __init__(self, value=0, flags=[], *args, **kwargs):
        self.flags = flags
        for flaginfo in self.flags:
            if len(flaginfo) == 3:
                cppflagname, value, defaultvalue = flaginfo
            else:
                cppflagname, value, defaultvalue, flagname = flaginfo
                
            value |= defaultvalue
            setattr(self, cppflagname, value)
        super(FlagsField, self).__init__(value=value, *args, **kwargs)

    def Parse(self, cls, name):
        super(FlagsField, self).Parse(cls, name)
        
        # Add flag names to cls
        for flaginfo in self.flags: 
            if len(flaginfo) == 3:
                cppflagname, value, defaultvalue = flaginfo
            else:
                cppflagname, value, defaultvalue, flagname = flaginfo
            setattr(cls, cppflagname, value)
        
    def GenerateFGDProperty(self):
        entry = '%s(flags) = \n\t[\n' % (self.keyname)
        for flaginfo in self.flags:
            if len(flaginfo) == 3:
                flagname, value, defaultvalue = flaginfo
            else:
                cppflagname, value, defaultvalue, flagname = flaginfo
            entry += '\t\t%d : "%s" : %d\n' % (value, flagname, 1 if defaultvalue else 0)
        entry += '\t]'
        return entry
            
# Entity class only fields
if isserver:
    class OutputEvent(COutputEvent):
        def __init__(self, fieldtype):
            super(OutputEvent, self).__init__()
            self.fieldtype = fieldtype
            self.value = variant_t()
            
        variant_setters = {
            fieldtypes.FIELD_VOID : lambda self, value: value,
            fieldtypes.FIELD_INTEGER : variant_t.SetInt,
            fieldtypes.FIELD_FLOAT : variant_t.SetFloat,
            fieldtypes.FIELD_STRING : variant_t.SetString,
            fieldtypes.FIELD_BOOLEAN : variant_t.SetBool,
            fieldtypes.FIELD_VECTOR : variant_t.SetVector3D,
            fieldtypes.FIELD_POSITION_VECTOR : variant_t.SetPositionVector3D,
            fieldtypes.FIELD_EHANDLE : variant_t.SetEntity,
        }
            
        def Set(self, value, activator=None, caller=None):
            try:
                self.variant_setters[self.fieldtype](self.value, value)
            except KeyError:
                PrintWarning("Unknown fieldtype %s in output field %s" % (self.fieldtype, self))
            self.FireOutput(self.value, activator, caller)
            

            
output_fgdtypes = {
    fieldtypes.FIELD_VOID : 'void',
    fieldtypes.FIELD_INTEGER : 'integer',
    fieldtypes.FIELD_FLOAT : 'float',
    fieldtypes.FIELD_STRING : 'string',
    fieldtypes.FIELD_BOOLEAN : 'bool',
    fieldtypes.FIELD_VECTOR : 'vector',
    fieldtypes.FIELD_POSITION_VECTOR : 'void', # not used anywhere ?
    fieldtypes.FIELD_EHANDLE : 'string',
}
            
class OutputField(BaseField):
    """ Output field (entity only)"""
    def __init__(self, keyname, fieldtype=fieldtypes.FIELD_VOID, *args, **kwargs):
        super(OutputField, self).__init__(keyname=keyname, noreset=True, *args, **kwargs)
        self.fieldtype = fieldtype

    if isserver:
        def InitField(self, inst):
            oe = OutputEvent(self.fieldtype)
            setattr(inst, self.name, oe)
            
        def Set(self, clsorinst, value):
            if inspect.isclass(clsorinst):
                # Doing this is only valid on entity instances
                # On the class itself, just clear the field reference (still available as "__field_%name%")
                setattr(clsorinst, self.name, None)
                return 
            oe = getattr(clsorinst, self.name)
            eventdata = '%s,%s' % (value, self.keyname)
            oe.ParseEventAction(eventdata)
    else:
        def Set(self, clsorinst, value):
            # Noop on the client
            # On the class itself, just clear the field reference (still available as "__field_%name%")
            setattr(clsorinst, self.name, None)

    def GenerateFGDProperty(self):
        return 'output %(keyname)s(%(outputtype)s) : "%(helpstring)s"' % {
            'keyname' : self.keyname,
            'outputtype' : output_fgdtypes[self.fieldtype],
            'helpstring' : _escape_helpstring(self.helpstring),
        }
            
    hidden = True
    requiresinit = True

# Misc
@receiver(postlevelshutdown)
def ResetFields(sender, **kwargs):
    global fields
    fields = filter(lambda f: bool(f()), fields) # Remove None fields
    for f in fields:
        try:
            f().Reset()
        except ValueError:
            traceback.print_exc()

# Setup methods for fields
def GetField(obj, name):
    return getattr(obj, '__%s_fieldinfo' % (name))
    
def SetField(obj, name, field):
    setattr(obj, '__%s_fieldinfo' % (name), field)
    
def HasField(obj, name):
    return hasattr(obj, '__%s_fieldinfo' % (name))
        
def BuildFieldsMap(obj, fieldmap):
    for name, field in obj.__dict__.iteritems():
        if not isinstance(field, BaseField):
            continue
        if name not in fieldmap.keys():
            fieldmap[name] = field
    for b in obj.__bases__:
        BuildFieldsMap(b, fieldmap)

def GetAllFields(obj):
    fieldmap = {}
    BuildFieldsMap(obj, fieldmap)
    return fieldmap.values()
    
class KeyValueLookupDict(dict):
    def get(self, key, default=None):
        key = key.lower()
        return dict.get(self, key, default)

def SetupClassFields(cls, done=None):
    """ Searches for all fields.
        Recursive parses base classes that are not parsed yet.
        This is needed because Entity classes don't support metaclasses.
        Otherwise it could have been solved in a nicer way."""
    # Might already be parsed
    # NOTE: we use cls.__dict__ here because we don't want 
    # to check __fieldsparsed from the bases. We want to know
    # if THIS class is parsed yet.
    try:
        if cls.__dict__['__fieldsparsed']:
            return
    except KeyError:
        pass
        
    # Set attribute to False
    # If we cannot do that, it is a builtin object
    try:
        setattr(cls, '__fieldsparsed', False)
    except:
        return
        
    if not done:
        done = set()
        
    # First check base classes.
    for basecls in cls.__bases__:
        if basecls not in done:
            done.add(basecls)
            SetupClassFields(basecls, done)
    
    # Setup all fields
    #: Note about keyfields: store all keys lower case and do all lookups lower case (KeyValueLookupDict)
    fields = {}
    keyfields = {}
    initfields = {}
    ownernumberchangefields = {}
    for name, f in list(cls.__dict__.items()):
        field = None
        if isinstance(f, BaseField):
            # f is a field
            field = f
        elif HasField(cls, name):
            # Maybe the attribute is a field in the baseclass?
            # Then copy the field and use the attribute from this
            # class as the default for the copied field.
            field = GetField(cls, name).Copy()
            field.default = f
            
        if field:
            try:
                field.Parse(cls, name)
            except:
                PrintWarning('Failed to parse field %s of class %s:\n' % (name, str(cls)))
                traceback.print_exc()
                continue
                
            fields[name] = field
            if field.keyname:
                keyfields[field.keyname.lower()] = field
            if field.requiresinit:
                initfields[field.name] = field
            if field.callonchangeownernumber:
                ownernumberchangefields[field.name] = field
         
    # Bind list of fields to the class         
    # Get base fields map. Merge from all bases!
    fieldsmap = {}
    for basecls in cls.__bases__:
        try:
            basefieldsmap = dict(getattr(basecls, 'fields'))
            fieldsmap.update(basefieldsmap)
        except:
            pass
    fieldsmap.update(fields)
    cls.fields = fieldsmap
    
    # Setup keyvalues map
    keyvaluemap = KeyValueLookupDict()
    for basecls in cls.__bases__:
        try:
            basekeyvaluemap = KeyValueLookupDict(getattr(basecls, 'keyvaluemap'))
            keyvaluemap.update(basekeyvaluemap)
        except:
            pass
    keyvaluemap.update(keyfields)
    keyvaluemap = KeyValueLookupDict(filter(lambda x: not x[1].cppimplemented, keyvaluemap.items()))
    cls.keyvaluemap = keyvaluemap
    
    # Setup init map (entity only)
    fieldinitmap = {}
    for basecls in cls.__bases__:
        try:
            basefieldinitmap = dict(getattr(basecls, 'fieldinitmap'))
            fieldinitmap.update(basefieldinitmap)
        except:
            pass
    fieldinitmap.update(initfields)
    cls.fieldinitmap = fieldinitmap
    
    # Mark this class as parsed
    setattr(cls, '__fieldsparsed', True)
    
# Input system
def input(inputname, helpstring='', fieldtype=fieldtypes.FIELD_VOID):
    """ Use this decorator to turn a method into an input function.
    
        The method must take a single argument as input (data).
        You can then fire this method using the input/output system of source engine.
        Example: ent_fire entityname inputname.
        
        Currently the method name will not appear in the auto complete list of the ent_fire command.
    """
    def fnwrapper(fn):
        fn.inputname = inputname
        fn.helpstring = helpstring
        fn.fieldtype = fieldtype
        
        fn.fgdinputentry = 'input %(keyname)s(%(outputtype)s) : "%(helpstring)s"' % {
                'keyname' : fn.inputname,
                'outputtype' : output_fgdtypes[fn.fieldtype],
                'helpstring' : _escape_helpstring(fn.helpstring)}
        return fn
    return fnwrapper
    
def SetupInputMethods(cls):
    try: 
        if cls.__dict__['__inputmethodsparsed']: 
            return
    except KeyError: 
        pass
        
    # Set attribute to False
    # If we cannot do that, it is a builtin object
    try: 
        setattr(cls, '__inputmethodsparsed', False)
    except: 
        return
        
    # Recursive parse base classes
    for basecls in cls.__bases__:
        SetupInputMethods(basecls)
        
    # Grab base inputmap. Create new one if there is no inputmap yet.
    try: inputmap = dict(getattr(cls, 'inputmap'))
    except: inputmap = {}
    
    for name, f in cls.__dict__.items():
        # TODO: Verify is function?
        # if type(f) is not MethodType and type(f) is not FunctionType:
            # continue

        try: 
            f.inputname
        except AttributeError:
            continue

        inputmap[f.inputname] = f
            
    cls.inputmap = inputmap
    
    # Mark this class as parsed
    setattr(cls, '__inputmethodsparsed', True)
    
