// This file has been generated by Py++.

#include "cbase.h"
// This file has been generated by Py++.

#include "cbase.h"
#include "npcevent.h"
#include "srcpy_entities.h"
#include "bone_setup.h"
#include "baseprojectile.h"
#include "basegrenade_shared.h"
#include "SkyCamera.h"
#include "ai_basenpc.h"
#include "modelentities.h"
#include "basetoggle.h"
#include "triggers.h"
#include "AI_Criteria.h"
#include "saverestore.h"
#include "vcollide_parse.h"
#include "iservervehicle.h"
#include "gib.h"
#include "spark.h"
#include "filters.h"
#include "EntityFlame.h"
#include "player_resource.h"
#include "props.h"
#include "physics_prop_ragdoll.h"
#include "nav_area.h"
#include "tier0/valve_minmax_off.h"
#include "srcpy.h"
#include "tier0/valve_minmax_on.h"
#include "tier0/memdbgon.h"
#include "PyHandle_pypp.hpp"

namespace bp = boost::python;

struct PyHandle_wrapper : PyHandle, bp::wrapper< PyHandle > {

    PyHandle_wrapper(PyHandle const & arg )
    : PyHandle( arg )
      , bp::wrapper< PyHandle >(){
        // copy constructor
        
    }

    PyHandle_wrapper(::boost::python::api::object ent )
    : PyHandle( ent )
      , bp::wrapper< PyHandle >(){
        // constructor
    
    }

    PyHandle_wrapper(int iEntry, int iSerialNumber )
    : PyHandle( iEntry, iSerialNumber )
      , bp::wrapper< PyHandle >(){
        // constructor
    
    }

    virtual PyObject *GetPySelf() { return boost::python::detail::wrapper_base_::get_owner(*this); }

};

void register_PyHandle_class(){

    { //::PyHandle
        typedef bp::class_< PyHandle_wrapper, bp::bases< CBaseHandle > > PyHandle_exposer_t;
        PyHandle_exposer_t PyHandle_exposer = PyHandle_exposer_t( "PyHandle", bp::init< bp::api::object >(( bp::arg("ent") )) );
        bp::scope PyHandle_scope( PyHandle_exposer );
        bp::implicitly_convertible< bp::api::object, PyHandle >();
        PyHandle_exposer.def( bp::init< int, int >(( bp::arg("iEntry"), bp::arg("iSerialNumber") )) );
        { //::PyHandle::Cmp
        
            typedef int ( ::PyHandle::*__cmp___function_type )( ::boost::python::api::object ) ;
            
            PyHandle_exposer.def( 
                "__cmp__"
                , __cmp___function_type( &::PyHandle::Cmp )
                , ( bp::arg("other") ) );
        
        }
        { //::PyHandle::GetAttr
        
            typedef ::boost::python::api::object ( ::PyHandle::*__getattr___function_type )( char const * ) ;
            
            PyHandle_exposer.def( 
                "__getattr__"
                , __getattr___function_type( &::PyHandle::GetAttr )
                , ( bp::arg("name") ) );
        
        }
        { //::PyHandle::GetAttribute
        
            typedef ::boost::python::api::object ( ::PyHandle::*__getattribute___function_type )( char const * ) ;
            
            PyHandle_exposer.def( 
                "__getattribute__"
                , __getattribute___function_type( &::PyHandle::GetAttribute )
                , ( bp::arg("name") ) );
        
        }
        { //::PyHandle::NonZero
        
            typedef bool ( ::PyHandle::*__nonzero___function_type )(  ) ;
            
            PyHandle_exposer.def( 
                "__nonzero__"
                , __nonzero___function_type( &::PyHandle::NonZero ) );
        
        }
        { //::PyHandle::PyGet
        
            typedef ::boost::python::api::object ( ::PyHandle::*Get_function_type )(  ) const;
            
            PyHandle_exposer.def( 
                "Get"
                , Get_function_type( &::PyHandle::PyGet ) );
        
        }
        { //::PyHandle::Set
        
            typedef void ( ::PyHandle::*Set_function_type )( ::boost::python::api::object ) ;
            
            PyHandle_exposer.def( 
                "Set"
                , Set_function_type( &::PyHandle::Set )
                , ( bp::arg("ent") ) );
        
        }
        { //::PyHandle::SetAttr
        
            typedef void ( ::PyHandle::*__setattr___function_type )( char const *,::boost::python::api::object ) ;
            
            PyHandle_exposer.def( 
                "__setattr__"
                , __setattr___function_type( &::PyHandle::SetAttr )
                , ( bp::arg("name"), bp::arg("v") ) );
        
        }
        { //::PyHandle::Str
        
            typedef ::boost::python::api::object ( ::PyHandle::*__str___function_type )(  ) ;
            
            PyHandle_exposer.def( 
                "__str__"
                , __str___function_type( &::PyHandle::Str ) );
        
        }
        PyHandle_exposer.def( bp::self != bp::other< bp::api::object >() );
        PyHandle_exposer.def( bp::self != bp::self );
        { //::PyHandle::operator=
        
            typedef ::PyHandle const & ( ::PyHandle::*assign_function_type )( ::boost::python::api::object ) ;
            
            PyHandle_exposer.def( 
                "assign"
                , assign_function_type( &::PyHandle::operator= )
                , ( bp::arg("val") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        PyHandle_exposer.def( bp::self == bp::other< bp::api::object >() );
        PyHandle_exposer.def( bp::self == bp::self );
    }

}

