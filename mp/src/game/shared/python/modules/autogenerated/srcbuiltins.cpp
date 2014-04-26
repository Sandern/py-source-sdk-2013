// This file has been generated by Py++.

#include "cbase.h"



#include "__convenience.pypp.hpp"

#include "__call_policies.pypp.hpp"

#include "cbase.h"

#include "srcpy_srcbuiltins.h"

#include "srcpy_srcbuiltins_converters.h"

#include "srcpy.h"

#include "tier0/memdbgon.h"

namespace bp = boost::python;

static boost::python::tuple GetColor_5697770b5e791413a33cc9b5367a16b8( ::Color const & inst ){
    int _r2;
    int _g2;
    int _b2;
    int _a2;
    inst.GetColor(_r2, _g2, _b2, _a2);
    return bp::make_tuple( _r2, _g2, _b2, _a2 );
}

BOOST_PYTHON_MODULE(srcbuiltins){
    bp::docstring_options doc_options( true, true, false );

    { //::CGlobalVarsBase
        typedef bp::class_< CGlobalVarsBase > CGlobalVarsBase_exposer_t;
        CGlobalVarsBase_exposer_t CGlobalVarsBase_exposer = CGlobalVarsBase_exposer_t( "CGlobalVarsBase", bp::init< bool >(( bp::arg("bIsClient") )) );
        bp::scope CGlobalVarsBase_scope( CGlobalVarsBase_exposer );
        bp::implicitly_convertible< bool, CGlobalVarsBase >();
        { //::CGlobalVarsBase::GetNetworkBase
        
            typedef int ( ::CGlobalVarsBase::*GetNetworkBase_function_type )( int,int ) ;
            
            CGlobalVarsBase_exposer.def( 
                "GetNetworkBase"
                , GetNetworkBase_function_type( &::CGlobalVarsBase::GetNetworkBase )
                , ( bp::arg("nTick"), bp::arg("nEntity") ) );
        
        }
        { //::CGlobalVarsBase::IsClient
        
            typedef bool ( ::CGlobalVarsBase::*IsClient_function_type )(  ) const;
            
            CGlobalVarsBase_exposer.def( 
                "IsClient"
                , IsClient_function_type( &::CGlobalVarsBase::IsClient ) );
        
        }
        CGlobalVarsBase_exposer.def_readwrite( "absoluteframetime", &CGlobalVarsBase::absoluteframetime );
        CGlobalVarsBase_exposer.def_readwrite( "curtime", &CGlobalVarsBase::curtime );
        CGlobalVarsBase_exposer.def_readwrite( "framecount", &CGlobalVarsBase::framecount );
        CGlobalVarsBase_exposer.def_readwrite( "frametime", &CGlobalVarsBase::frametime );
        CGlobalVarsBase_exposer.def_readwrite( "interpolation_amount", &CGlobalVarsBase::interpolation_amount );
        CGlobalVarsBase_exposer.def_readwrite( "interval_per_tick", &CGlobalVarsBase::interval_per_tick );
        CGlobalVarsBase_exposer.def_readwrite( "maxClients", &CGlobalVarsBase::maxClients );
        CGlobalVarsBase_exposer.def_readwrite( "network_protocol", &CGlobalVarsBase::network_protocol );
        CGlobalVarsBase_exposer.def_readwrite( "realtime", &CGlobalVarsBase::realtime );
        CGlobalVarsBase_exposer.def_readwrite( "simTicksThisFrame", &CGlobalVarsBase::simTicksThisFrame );
        CGlobalVarsBase_exposer.def_readwrite( "tickcount", &CGlobalVarsBase::tickcount );
    }

    { //::CGlobalVars
        typedef bp::class_< CGlobalVars, bp::bases< CGlobalVarsBase > > CGlobalVars_exposer_t;
        CGlobalVars_exposer_t CGlobalVars_exposer = CGlobalVars_exposer_t( "CGlobalVars", bp::init< bool >(( bp::arg("bIsClient") )) );
        bp::scope CGlobalVars_scope( CGlobalVars_exposer );
        bp::implicitly_convertible< bool, CGlobalVars >();
        CGlobalVars_exposer.def_readwrite( "bMapLoadFailed", &CGlobalVars::bMapLoadFailed );
        CGlobalVars_exposer.def_readwrite( "coop", &CGlobalVars::coop );
        CGlobalVars_exposer.def_readwrite( "deathmatch", &CGlobalVars::deathmatch );
        CGlobalVars_exposer.def_readwrite( "eLoadType", &CGlobalVars::eLoadType );
        CGlobalVars_exposer.def_readwrite( "mapname", &CGlobalVars::mapname );
        CGlobalVars_exposer.def_readwrite( "mapversion", &CGlobalVars::mapversion );
        CGlobalVars_exposer.def_readwrite( "maxEntities", &CGlobalVars::maxEntities );
        CGlobalVars_exposer.def_readwrite( "serverCount", &CGlobalVars::serverCount );
        CGlobalVars_exposer.def_readwrite( "startspot", &CGlobalVars::startspot );
        CGlobalVars_exposer.def_readwrite( "teamplay", &CGlobalVars::teamplay );
    }

    { //::Color
        typedef bp::class_< Color > Color_exposer_t;
        Color_exposer_t Color_exposer = Color_exposer_t( "Color", bp::init< >() );
        bp::scope Color_scope( Color_exposer );
        Color_exposer.def( bp::init< int, int, int >(( bp::arg("_r"), bp::arg("_g"), bp::arg("_b") )) );
        Color_exposer.def( bp::init< int, int, int, int >(( bp::arg("_r"), bp::arg("_g"), bp::arg("_b"), bp::arg("_a") )) );
        { //::Color::GetColor
        
            typedef boost::python::tuple ( *GetColor_function_type )( ::Color const & );
            
            Color_exposer.def( 
                "GetColor"
                , GetColor_function_type( &GetColor_5697770b5e791413a33cc9b5367a16b8 )
                , ( bp::arg("inst") ) );
        
        }
        { //::Color::GetRawColor
        
            typedef int ( ::Color::*GetRawColor_function_type )(  ) const;
            
            Color_exposer.def( 
                "GetRawColor"
                , GetRawColor_function_type( &::Color::GetRawColor ) );
        
        }
        { //::Color::SetColor
        
            typedef void ( ::Color::*SetColor_function_type )( int,int,int,int ) ;
            
            Color_exposer.def( 
                "SetColor"
                , SetColor_function_type( &::Color::SetColor )
                , ( bp::arg("_r"), bp::arg("_g"), bp::arg("_b"), bp::arg("_a")=(int)(0) ) );
        
        }
        { //::Color::SetRawColor
        
            typedef void ( ::Color::*SetRawColor_function_type )( int ) ;
            
            Color_exposer.def( 
                "SetRawColor"
                , SetRawColor_function_type( &::Color::SetRawColor )
                , ( bp::arg("color32") ) );
        
        }
        { //::Color::a
        
            typedef int ( ::Color::*a_function_type )(  ) const;
            
            Color_exposer.def( 
                "a"
                , a_function_type( &::Color::a ) );
        
        }
        { //::Color::b
        
            typedef int ( ::Color::*b_function_type )(  ) const;
            
            Color_exposer.def( 
                "b"
                , b_function_type( &::Color::b ) );
        
        }
        { //::Color::g
        
            typedef int ( ::Color::*g_function_type )(  ) const;
            
            Color_exposer.def( 
                "g"
                , g_function_type( &::Color::g ) );
        
        }
        Color_exposer.def( bp::self != bp::self );
        Color_exposer.def( bp::self == bp::self );
        { //::Color::operator[]
        
            typedef unsigned char & ( ::Color::*__getitem___function_type )( int ) ;
            
            Color_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::Color::operator[] )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::Color::operator[]
        
            typedef unsigned char const & ( ::Color::*__getitem___function_type )( int ) const;
            
            Color_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::Color::operator[] )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::Color::r
        
            typedef int ( ::Color::*r_function_type )(  ) const;
            
            Color_exposer.def( 
                "r"
                , r_function_type( &::Color::r ) );
        
        }
    }

    bp::class_< SrcPyStdErr >( "SrcPyStdErr" )    
        .def( 
            "flush"
            , (void ( ::SrcPyStdErr::* )(  ) )( &::SrcPyStdErr::flush ) )    
        .def( 
            "write"
            , (void ( ::SrcPyStdErr::* )( char const * ) )( &::SrcPyStdErr::write )
            , ( bp::arg("msg") ) );

    bp::class_< SrcPyStdOut >( "SrcPyStdOut" )    
        .def( 
            "flush"
            , (void ( ::SrcPyStdOut::* )(  ) )( &::SrcPyStdOut::flush ) )    
        .def( 
            "write"
            , (void ( ::SrcPyStdOut::* )( char const * ) )( &::SrcPyStdOut::write )
            , ( bp::arg("msg") ) );

    bp::class_< color32_s >( "color32" )    
        .def( bp::self != bp::self )    
        .def_readwrite( "a", &color32_s::a )    
        .def_readwrite( "b", &color32_s::b )    
        .def_readwrite( "g", &color32_s::g )    
        .def_readwrite( "r", &color32_s::r );

    { //::GetRegisteredPerFrameMethods
    
        typedef ::boost::python::list ( *GetRegisteredPerFrameMethods_function_type )(  );
        
        bp::def( 
            "GetRegisteredPerFrameMethods"
            , GetRegisteredPerFrameMethods_function_type( &::GetRegisteredPerFrameMethods ) );
    
    }

    { //::GetRegisteredTickMethods
    
        typedef ::boost::python::list ( *GetRegisteredTickMethods_function_type )(  );
        
        bp::def( 
            "GetRegisteredTickMethods"
            , GetRegisteredTickMethods_function_type( &::GetRegisteredTickMethods ) );
    
    }

    { //::IsPerFrameMethodRegistered
    
        typedef bool ( *IsPerFrameMethodRegistered_function_type )( ::boost::python::api::object );
        
        bp::def( 
            "IsPerFrameMethodRegistered"
            , IsPerFrameMethodRegistered_function_type( &::IsPerFrameMethodRegistered )
            , ( bp::arg("method") ) );
    
    }

    { //::IsTickMethodRegistered
    
        typedef bool ( *IsTickMethodRegistered_function_type )( ::boost::python::api::object );
        
        bp::def( 
            "IsTickMethodRegistered"
            , IsTickMethodRegistered_function_type( &::IsTickMethodRegistered )
            , ( bp::arg("method") ) );
    
    }

    { //::PyCOM_TimestampedLog
    
        typedef void ( *COM_TimestampedLog_function_type )( char const * );
        
        bp::def( 
            "COM_TimestampedLog"
            , COM_TimestampedLog_function_type( &::PyCOM_TimestampedLog )
            , ( bp::arg("msg") ) );
    
    }

    { //::RegisterPerFrameMethod
    
        typedef void ( *RegisterPerFrameMethod_function_type )( ::boost::python::api::object );
        
        bp::def( 
            "RegisterPerFrameMethod"
            , RegisterPerFrameMethod_function_type( &::RegisterPerFrameMethod )
            , ( bp::arg("method") ) );
    
    }

    { //::RegisterTickMethod
    
        typedef void ( *RegisterTickMethod_function_type )( ::boost::python::api::object,float,bool,bool );
        
        bp::def( 
            "RegisterTickMethod"
            , RegisterTickMethod_function_type( &::RegisterTickMethod )
            , ( bp::arg("method"), bp::arg("ticksignal"), bp::arg("looped")=(bool)(true), bp::arg("userealtime")=(bool)(false) ) );
    
    }

    { //::SrcPyDevMsg
    
        typedef void ( *DevMsg_function_type )( int,char const * );
        
        bp::def( 
            "DevMsg"
            , DevMsg_function_type( &::SrcPyDevMsg )
            , ( bp::arg("level"), bp::arg("msg") ) );
    
    }

    { //::SrcPyMsg
    
        typedef void ( *Msg_function_type )( char const * );
        
        bp::def( 
            "Msg"
            , Msg_function_type( &::SrcPyMsg )
            , ( bp::arg("msg") ) );
    
    }

    { //::SrcPyWarning
    
        typedef void ( *PrintWarning_function_type )( char const * );
        
        bp::def( 
            "PrintWarning"
            , PrintWarning_function_type( &::SrcPyWarning )
            , ( bp::arg("msg") ) );
    
    }

    { //::UnregisterPerFrameMethod
    
        typedef void ( *UnregisterPerFrameMethod_function_type )( ::boost::python::api::object );
        
        bp::def( 
            "UnregisterPerFrameMethod"
            , UnregisterPerFrameMethod_function_type( &::UnregisterPerFrameMethod )
            , ( bp::arg("method") ) );
    
    }

    bp::to_python_converter<
	string_t,
	string_t_to_python_str>();

    python_str_to_string_t();

    wchar_t_to_python_str();

    ptr_wchar_t_to_python_str();

    python_str_to_wchar_t();

    #if PY_VERSION_HEX < 0x03000000
	python_unicode_to_ptr_const_wchar_t();
	#endif \ PY_VERSION_HEX

    { //::UnregisterTickMethod
    
        typedef void ( *UnregisterTickMethod_function_type )( ::boost::python::api::object );
        
        bp::def( 
            "UnregisterTickMethod"
            , UnregisterTickMethod_function_type( &::UnregisterTickMethod )
            , ( bp::arg("method") ) );
    
    }
}
