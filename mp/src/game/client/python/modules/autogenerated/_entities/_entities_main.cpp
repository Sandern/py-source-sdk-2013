// This file has been generated by Py++.

#include "cbase.h"
// This file has been generated by Py++.

#include "boost/python.hpp"

#include "cbase.h"

#include "takedamageinfo.h"

#include "c_ai_basenpc.h"

#include "srcpy_entities.h"

#include "srcpy.h"

#include "tier0/memdbgon.h"

#include "../game/client/python/modules/autogenerated/_entities/CBaseHandle_pypp.hpp"

#include "../game/client/python/modules/autogenerated/_entities/C_BaseEntity_pypp.hpp"

#include "../game/client/python/modules/autogenerated/_entities/DeadEntity_pypp.hpp"

#include "../game/client/python/modules/autogenerated/_entities/IClientEntity_pypp.hpp"

#include "../game/client/python/modules/autogenerated/_entities/IClientUnknown_pypp.hpp"

#include "../game/client/python/modules/autogenerated/_entities/IHandleEntity_pypp.hpp"

#include "../game/client/python/modules/autogenerated/_entities/PyHandle_pypp.hpp"

namespace bp = boost::python;

typedef CEPyHandle< C_BaseEntity > C_BaseEntityHANDLE;

struct ptr_C_BaseEntity_to_handle : bp::to_python_converter<C_BaseEntity *, ptr_C_BaseEntity_to_handle>
{
    static PyObject* convert(C_BaseEntity *s)
    {
        return s ? bp::incref(s->GetPyHandle().ptr()) : bp::incref(Py_None);
    }
};

struct C_BaseEntity_to_handle : bp::to_python_converter<C_BaseEntity, C_BaseEntity_to_handle>
{
    static PyObject* convert(const C_BaseEntity &s)
    {
        return bp::incref(s.GetPyHandle().ptr());
    }
};

struct handle_to_C_BaseEntity
{
    handle_to_C_BaseEntity()
    {
        bp::converter::registry::insert(
            &extract_C_BaseEntity, 
            bp::type_id<C_BaseEntity>()
            );
    }

    static void* extract_C_BaseEntity(PyObject* op){
       CBaseHandle h = bp::extract<CBaseHandle>(op);
       if( h.Get() == NULL )
           return Py_None;
       return h.Get();
    }
};

BOOST_PYTHON_MODULE(_entities){
    bp::docstring_options doc_options( true, true, false );

    register_CBaseHandle_class();

    register_IHandleEntity_class();

    register_IClientUnknown_class();

    register_IClientEntity_class();

    register_C_BaseEntity_class();

    register_DeadEntity_class();

    { //::C_BaseEntityHANDLE
        typedef bp::class_< C_BaseEntityHANDLE, bp::bases< CBaseHandle > > C_BaseEntityHANDLE_exposer_t;
        C_BaseEntityHANDLE_exposer_t C_BaseEntityHANDLE_exposer = C_BaseEntityHANDLE_exposer_t( "C_BaseEntityHANDLE", bp::init< >() );
        C_BaseEntityHANDLE_exposer.def( bp::init< C_BaseEntity * >(( bp::arg("pVal") )) );
        C_BaseEntityHANDLE_exposer.def( bp::init< int, int >(( bp::arg("iEntry"), bp::arg("iSerialNumber") )) );
        { //::C_BaseEntityHANDLE::GetAttr
        
            typedef bp::object ( ::C_BaseEntityHANDLE::*GetAttr_function_type )( const char * ) const;
            
            C_BaseEntityHANDLE_exposer.def( 
                "__getattr__"
                , GetAttr_function_type( &::C_BaseEntityHANDLE::GetAttr )
            );
        
        }
        { //::C_BaseEntityHANDLE::Cmp
        
            typedef bool ( ::C_BaseEntityHANDLE::*Cmp_function_type )( bp::object ) const;
            
            C_BaseEntityHANDLE_exposer.def( 
                "__cmp__"
                , Cmp_function_type( &::C_BaseEntityHANDLE::Cmp )
            );
        
        }
        { //::C_BaseEntityHANDLE::NonZero
        
            typedef bool ( ::C_BaseEntityHANDLE::*NonZero_function_type )( ) const;
            
            C_BaseEntityHANDLE_exposer.def( 
                "__nonzero__"
                , NonZero_function_type( &::C_BaseEntityHANDLE::NonZero )
            );
        
        }
        { //::C_BaseEntityHANDLE::Set
        
            typedef void ( ::C_BaseEntityHANDLE::*Set_function_type )( C_BaseEntity * ) const;
            
            C_BaseEntityHANDLE_exposer.def( 
                "Set"
                , Set_function_type( &::C_BaseEntityHANDLE::Set )
            );
        
        }
        { //::C_BaseEntityHANDLE::GetSerialNumber
        
            typedef int ( ::C_BaseEntityHANDLE::*GetSerialNumber_function_type )( ) const;
            
            C_BaseEntityHANDLE_exposer.def( 
                "GetSerialNumber"
                , GetSerialNumber_function_type( &::C_BaseEntityHANDLE::GetSerialNumber )
            );
        
        }
        { //::C_BaseEntityHANDLE::GetEntryIndex
        
            typedef int ( ::C_BaseEntityHANDLE::*GetEntryIndex_function_type )(  ) const;
            
            C_BaseEntityHANDLE_exposer.def( 
                "GetEntryIndex"
                , GetEntryIndex_function_type( &::C_BaseEntityHANDLE::GetEntryIndex )
            );
        
        }
        C_BaseEntityHANDLE_exposer.def( bp::self != bp::self );
        C_BaseEntityHANDLE_exposer.def( bp::self == bp::self );
    }

    ptr_C_BaseEntity_to_handle();

    C_BaseEntity_to_handle();

    handle_to_C_BaseEntity();

    register_PyHandle_class();
}


