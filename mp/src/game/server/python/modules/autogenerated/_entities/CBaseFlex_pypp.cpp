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
#include "CBaseFlex_pypp.hpp"

namespace bp = boost::python;

struct CBaseFlex_wrapper : CBaseFlex, bp::wrapper< CBaseFlex > {

    CBaseFlex_wrapper( )
    : CBaseFlex( )
      , bp::wrapper< CBaseFlex >(){
        // null constructor
    
    }

    virtual void Activate(  ) {
        PY_OVERRIDE_CHECK( CBaseAnimating, Activate )
        PY_OVERRIDE_LOG( _entities, CBaseAnimating, Activate )
        bp::override func_Activate = this->get_override( "Activate" );
        if( func_Activate.ptr() != Py_None )
            try {
                func_Activate(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseAnimating::Activate(  );
            }
        else
            this->CBaseAnimating::Activate(  );
    }
    
    void default_Activate(  ) {
        CBaseAnimating::Activate( );
    }

    virtual bool CanBecomeRagdoll(  ) {
        PY_OVERRIDE_CHECK( CBaseAnimating, CanBecomeRagdoll )
        PY_OVERRIDE_LOG( _entities, CBaseAnimating, CanBecomeRagdoll )
        bp::override func_CanBecomeRagdoll = this->get_override( "CanBecomeRagdoll" );
        if( func_CanBecomeRagdoll.ptr() != Py_None )
            try {
                return func_CanBecomeRagdoll(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseAnimating::CanBecomeRagdoll(  );
            }
        else
            return this->CBaseAnimating::CanBecomeRagdoll(  );
    }
    
    bool default_CanBecomeRagdoll(  ) {
        return CBaseAnimating::CanBecomeRagdoll( );
    }

    virtual void ComputeWorldSpaceSurroundingBox( ::Vector * pWorldMins, ::Vector * pWorldMaxs ) {
        PY_OVERRIDE_CHECK( CBaseEntity, ComputeWorldSpaceSurroundingBox )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, ComputeWorldSpaceSurroundingBox )
        bp::override func_ComputeWorldSpaceSurroundingBox = this->get_override( "ComputeWorldSpaceSurroundingBox" );
        if( func_ComputeWorldSpaceSurroundingBox.ptr() != Py_None )
            try {
                func_ComputeWorldSpaceSurroundingBox( boost::python::ptr(pWorldMins), boost::python::ptr(pWorldMaxs) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::ComputeWorldSpaceSurroundingBox( pWorldMins, pWorldMaxs );
            }
        else
            this->CBaseEntity::ComputeWorldSpaceSurroundingBox( pWorldMins, pWorldMaxs );
    }
    
    void default_ComputeWorldSpaceSurroundingBox( ::Vector * pWorldMins, ::Vector * pWorldMaxs ) {
        CBaseEntity::ComputeWorldSpaceSurroundingBox( pWorldMins, pWorldMaxs );
    }

    virtual bool CreateVPhysics(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, CreateVPhysics )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, CreateVPhysics )
        bp::override func_CreateVPhysics = this->get_override( "CreateVPhysics" );
        if( func_CreateVPhysics.ptr() != Py_None )
            try {
                return func_CreateVPhysics(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::CreateVPhysics(  );
            }
        else
            return this->CBaseEntity::CreateVPhysics(  );
    }
    
    bool default_CreateVPhysics(  ) {
        return CBaseEntity::CreateVPhysics( );
    }

    virtual void DeathNotice( ::CBaseEntity * pVictim ) {
        PY_OVERRIDE_CHECK( CBaseEntity, DeathNotice )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, DeathNotice )
        bp::override func_DeathNotice = this->get_override( "DeathNotice" );
        if( func_DeathNotice.ptr() != Py_None )
            try {
                func_DeathNotice( pVictim ? pVictim->GetPyHandle() : boost::python::object() );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::DeathNotice( pVictim );
            }
        else
            this->CBaseEntity::DeathNotice( pVictim );
    }
    
    void default_DeathNotice( ::CBaseEntity * pVictim ) {
        CBaseEntity::DeathNotice( pVictim );
    }

    virtual void DoImpactEffect( ::trace_t & tr, int nDamageType ) {
        PY_OVERRIDE_CHECK( CBaseEntity, DoImpactEffect )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, DoImpactEffect )
        bp::override func_DoImpactEffect = this->get_override( "DoImpactEffect" );
        if( func_DoImpactEffect.ptr() != Py_None )
            try {
                func_DoImpactEffect( boost::ref(tr), nDamageType );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::DoImpactEffect( tr, nDamageType );
            }
        else
            this->CBaseEntity::DoImpactEffect( tr, nDamageType );
    }
    
    void default_DoImpactEffect( ::trace_t & tr, int nDamageType ) {
        CBaseEntity::DoImpactEffect( tr, nDamageType );
    }

    virtual void DrawDebugGeometryOverlays(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, DrawDebugGeometryOverlays )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, DrawDebugGeometryOverlays )
        bp::override func_DrawDebugGeometryOverlays = this->get_override( "DrawDebugGeometryOverlays" );
        if( func_DrawDebugGeometryOverlays.ptr() != Py_None )
            try {
                func_DrawDebugGeometryOverlays(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::DrawDebugGeometryOverlays(  );
            }
        else
            this->CBaseEntity::DrawDebugGeometryOverlays(  );
    }
    
    void default_DrawDebugGeometryOverlays(  ) {
        CBaseEntity::DrawDebugGeometryOverlays( );
    }

    virtual int DrawDebugTextOverlays(  ) {
        PY_OVERRIDE_CHECK( CBaseAnimating, DrawDebugTextOverlays )
        PY_OVERRIDE_LOG( _entities, CBaseAnimating, DrawDebugTextOverlays )
        bp::override func_DrawDebugTextOverlays = this->get_override( "DrawDebugTextOverlays" );
        if( func_DrawDebugTextOverlays.ptr() != Py_None )
            try {
                return func_DrawDebugTextOverlays(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseAnimating::DrawDebugTextOverlays(  );
            }
        else
            return this->CBaseAnimating::DrawDebugTextOverlays(  );
    }
    
    int default_DrawDebugTextOverlays(  ) {
        return CBaseAnimating::DrawDebugTextOverlays( );
    }

    virtual void EndTouch( ::CBaseEntity * pOther ) {
        PY_OVERRIDE_CHECK( CBaseEntity, EndTouch )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, EndTouch )
        bp::override func_EndTouch = this->get_override( "EndTouch" );
        if( func_EndTouch.ptr() != Py_None )
            try {
                func_EndTouch( pOther ? pOther->GetPyHandle() : boost::python::object() );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::EndTouch( pOther );
            }
        else
            this->CBaseEntity::EndTouch( pOther );
    }
    
    void default_EndTouch( ::CBaseEntity * pOther ) {
        CBaseEntity::EndTouch( pOther );
    }

    virtual void Event_Killed( ::CTakeDamageInfo const & info ) {
        PY_OVERRIDE_CHECK( CBaseEntity, Event_Killed )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, Event_Killed )
        bp::override func_Event_Killed = this->get_override( "Event_Killed" );
        if( func_Event_Killed.ptr() != Py_None )
            try {
                func_Event_Killed( boost::ref(info) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::Event_Killed( info );
            }
        else
            this->CBaseEntity::Event_Killed( info );
    }
    
    void default_Event_Killed( ::CTakeDamageInfo const & info ) {
        CBaseEntity::Event_Killed( info );
    }

    virtual void Event_KilledOther( ::CBaseEntity * pVictim, ::CTakeDamageInfo const & info ) {
        PY_OVERRIDE_CHECK( CBaseEntity, Event_KilledOther )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, Event_KilledOther )
        bp::override func_Event_KilledOther = this->get_override( "Event_KilledOther" );
        if( func_Event_KilledOther.ptr() != Py_None )
            try {
                func_Event_KilledOther( pVictim ? pVictim->GetPyHandle() : boost::python::object(), boost::ref(info) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::Event_KilledOther( pVictim, info );
            }
        else
            this->CBaseEntity::Event_KilledOther( pVictim, info );
    }
    
    void default_Event_KilledOther( ::CBaseEntity * pVictim, ::CTakeDamageInfo const & info ) {
        CBaseEntity::Event_KilledOther( pVictim, info );
    }

    virtual char const * GetTracerType(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, GetTracerType )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, GetTracerType )
        bp::override func_GetTracerType = this->get_override( "GetTracerType" );
        if( func_GetTracerType.ptr() != Py_None )
            try {
                return func_GetTracerType(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::GetTracerType(  );
            }
        else
            return this->CBaseEntity::GetTracerType(  );
    }
    
    char const * default_GetTracerType(  ) {
        return CBaseEntity::GetTracerType( );
    }

    virtual bool KeyValue( char const * szKeyName, char const * szValue ) {
        PY_OVERRIDE_CHECK( CBaseEntity, KeyValue )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, szValue );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::KeyValue( szKeyName, szValue );
            }
        else
            return this->CBaseEntity::KeyValue( szKeyName, szValue );
    }
    
    bool default_KeyValue( char const * szKeyName, char const * szValue ) {
        return CBaseEntity::KeyValue( szKeyName, szValue );
    }

    virtual bool KeyValue( char const * szKeyName, float flValue ) {
        PY_OVERRIDE_CHECK( CBaseEntity, KeyValue )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, flValue );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::KeyValue( szKeyName, flValue );
            }
        else
            return this->CBaseEntity::KeyValue( szKeyName, flValue );
    }
    
    bool default_KeyValue( char const * szKeyName, float flValue ) {
        return CBaseEntity::KeyValue( szKeyName, flValue );
    }

    virtual bool KeyValue( char const * szKeyName, ::Vector const & vecValue ) {
        PY_OVERRIDE_CHECK( CBaseEntity, KeyValue )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, boost::ref(vecValue) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::KeyValue( szKeyName, vecValue );
            }
        else
            return this->CBaseEntity::KeyValue( szKeyName, vecValue );
    }
    
    bool default_KeyValue( char const * szKeyName, ::Vector const & vecValue ) {
        return CBaseEntity::KeyValue( szKeyName, vecValue );
    }

    virtual void MakeTracer( ::Vector const & vecTracerSrc, ::trace_t const & tr, int iTracerType ) {
        PY_OVERRIDE_CHECK( CBaseEntity, MakeTracer )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, MakeTracer )
        bp::override func_MakeTracer = this->get_override( "MakeTracer" );
        if( func_MakeTracer.ptr() != Py_None )
            try {
                func_MakeTracer( boost::ref(vecTracerSrc), boost::ref(tr), iTracerType );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::MakeTracer( vecTracerSrc, tr, iTracerType );
            }
        else
            this->CBaseEntity::MakeTracer( vecTracerSrc, tr, iTracerType );
    }
    
    void default_MakeTracer( ::Vector const & vecTracerSrc, ::trace_t const & tr, int iTracerType ) {
        CBaseEntity::MakeTracer( vecTracerSrc, tr, iTracerType );
    }

    virtual void ModifyOrAppendCriteria( ::AI_CriteriaSet & set ) {
        PY_OVERRIDE_CHECK( CBaseAnimating, ModifyOrAppendCriteria )
        PY_OVERRIDE_LOG( _entities, CBaseAnimating, ModifyOrAppendCriteria )
        bp::override func_ModifyOrAppendCriteria = this->get_override( "ModifyOrAppendCriteria" );
        if( func_ModifyOrAppendCriteria.ptr() != Py_None )
            try {
                func_ModifyOrAppendCriteria( boost::ref(set) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseAnimating::ModifyOrAppendCriteria( set );
            }
        else
            this->CBaseAnimating::ModifyOrAppendCriteria( set );
    }
    
    void default_ModifyOrAppendCriteria( ::AI_CriteriaSet & set ) {
        CBaseAnimating::ModifyOrAppendCriteria( set );
    }

    virtual void OnRestore(  ) {
        PY_OVERRIDE_CHECK( CBaseAnimatingOverlay, OnRestore )
        PY_OVERRIDE_LOG( _entities, CBaseAnimatingOverlay, OnRestore )
        bp::override func_OnRestore = this->get_override( "OnRestore" );
        if( func_OnRestore.ptr() != Py_None )
            try {
                func_OnRestore(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseAnimatingOverlay::OnRestore(  );
            }
        else
            this->CBaseAnimatingOverlay::OnRestore(  );
    }
    
    void default_OnRestore(  ) {
        CBaseAnimatingOverlay::OnRestore( );
    }

    virtual int OnTakeDamage( ::CTakeDamageInfo const & info ) {
        PY_OVERRIDE_CHECK( CBaseEntity, OnTakeDamage )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, OnTakeDamage )
        bp::override func_OnTakeDamage = this->get_override( "OnTakeDamage" );
        if( func_OnTakeDamage.ptr() != Py_None )
            try {
                return func_OnTakeDamage( boost::ref(info) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::OnTakeDamage( info );
            }
        else
            return this->CBaseEntity::OnTakeDamage( info );
    }
    
    int default_OnTakeDamage( ::CTakeDamageInfo const & info ) {
        return CBaseEntity::OnTakeDamage( info );
    }

    virtual bool PassesDamageFilter( ::CTakeDamageInfo const & info ) {
        PY_OVERRIDE_CHECK( CBaseEntity, PassesDamageFilter )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, PassesDamageFilter )
        bp::override func_PassesDamageFilter = this->get_override( "PassesDamageFilter" );
        if( func_PassesDamageFilter.ptr() != Py_None )
            try {
                return func_PassesDamageFilter( boost::ref(info) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::PassesDamageFilter( info );
            }
        else
            return this->CBaseEntity::PassesDamageFilter( info );
    }
    
    bool default_PassesDamageFilter( ::CTakeDamageInfo const & info ) {
        return CBaseEntity::PassesDamageFilter( info );
    }

    virtual void PostClientActive(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, PostClientActive )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, PostClientActive )
        bp::override func_PostClientActive = this->get_override( "PostClientActive" );
        if( func_PostClientActive.ptr() != Py_None )
            try {
                func_PostClientActive(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::PostClientActive(  );
            }
        else
            this->CBaseEntity::PostClientActive(  );
    }
    
    void default_PostClientActive(  ) {
        CBaseEntity::PostClientActive( );
    }

    virtual void PostConstructor( char const * szClassname ) {
        PY_OVERRIDE_CHECK( CBaseEntity, PostConstructor )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, PostConstructor )
        bp::override func_PostConstructor = this->get_override( "PostConstructor" );
        if( func_PostConstructor.ptr() != Py_None )
            try {
                func_PostConstructor( szClassname );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::PostConstructor( szClassname );
            }
        else
            this->CBaseEntity::PostConstructor( szClassname );
    }
    
    void default_PostConstructor( char const * szClassname ) {
        CBaseEntity::PostConstructor( szClassname );
    }

    virtual void Precache(  ) {
        PY_OVERRIDE_CHECK( CBaseAnimating, Precache )
        PY_OVERRIDE_LOG( _entities, CBaseAnimating, Precache )
        bp::override func_Precache = this->get_override( "Precache" );
        if( func_Precache.ptr() != Py_None )
            try {
                func_Precache(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseAnimating::Precache(  );
            }
        else
            this->CBaseAnimating::Precache(  );
    }
    
    void default_Precache(  ) {
        CBaseAnimating::Precache( );
    }

    virtual void Spawn(  ) {
        PY_OVERRIDE_CHECK( CBaseAnimating, Spawn )
        PY_OVERRIDE_LOG( _entities, CBaseAnimating, Spawn )
        bp::override func_Spawn = this->get_override( "Spawn" );
        if( func_Spawn.ptr() != Py_None )
            try {
                func_Spawn(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseAnimating::Spawn(  );
            }
        else
            this->CBaseAnimating::Spawn(  );
    }
    
    void default_Spawn(  ) {
        CBaseAnimating::Spawn( );
    }

    virtual void StartTouch( ::CBaseEntity * pOther ) {
        PY_OVERRIDE_CHECK( CBaseEntity, StartTouch )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, StartTouch )
        bp::override func_StartTouch = this->get_override( "StartTouch" );
        if( func_StartTouch.ptr() != Py_None )
            try {
                func_StartTouch( pOther ? pOther->GetPyHandle() : boost::python::object() );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::StartTouch( pOther );
            }
        else
            this->CBaseEntity::StartTouch( pOther );
    }
    
    void default_StartTouch( ::CBaseEntity * pOther ) {
        CBaseEntity::StartTouch( pOther );
    }

    virtual void StopLoopingSounds(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, StopLoopingSounds )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, StopLoopingSounds )
        bp::override func_StopLoopingSounds = this->get_override( "StopLoopingSounds" );
        if( func_StopLoopingSounds.ptr() != Py_None )
            try {
                func_StopLoopingSounds(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::StopLoopingSounds(  );
            }
        else
            this->CBaseEntity::StopLoopingSounds(  );
    }
    
    void default_StopLoopingSounds(  ) {
        CBaseEntity::StopLoopingSounds( );
    }

    void TraceAttack( ::CTakeDamageInfo const & info, ::Vector const & vecDir, ::trace_t * ptr, ::CDmgAccumulator * pAccumulator=0 ){
        CBaseEntity::TraceAttack( info, vecDir, ptr, pAccumulator );
    }

    virtual void UpdateOnRemove(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, UpdateOnRemove )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, UpdateOnRemove )
        bp::override func_UpdateOnRemove = this->get_override( "UpdateOnRemove" );
        if( func_UpdateOnRemove.ptr() != Py_None )
            try {
                func_UpdateOnRemove(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::UpdateOnRemove(  );
            }
        else
            this->CBaseEntity::UpdateOnRemove(  );
    }
    
    void default_UpdateOnRemove(  ) {
        CBaseEntity::UpdateOnRemove( );
    }

    virtual int UpdateTransmitState(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, UpdateTransmitState )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, UpdateTransmitState )
        bp::override func_UpdateTransmitState = this->get_override( "UpdateTransmitState" );
        if( func_UpdateTransmitState.ptr() != Py_None )
            try {
                return func_UpdateTransmitState(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::UpdateTransmitState(  );
            }
        else
            return this->CBaseEntity::UpdateTransmitState(  );
    }
    
    int default_UpdateTransmitState(  ) {
        return CBaseEntity::UpdateTransmitState( );
    }

    virtual void VPhysicsCollision( int index, ::gamevcollisionevent_t * pEvent ) {
        PY_OVERRIDE_CHECK( CBaseEntity, VPhysicsCollision )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, VPhysicsCollision )
        bp::override func_VPhysicsCollision = this->get_override( "VPhysicsCollision" );
        if( func_VPhysicsCollision.ptr() != Py_None )
            try {
                func_VPhysicsCollision( index, boost::python::ptr(pEvent) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::VPhysicsCollision( index, pEvent );
            }
        else
            this->CBaseEntity::VPhysicsCollision( index, pEvent );
    }
    
    void default_VPhysicsCollision( int index, ::gamevcollisionevent_t * pEvent ) {
        CBaseEntity::VPhysicsCollision( index, pEvent );
    }

    virtual PyObject *GetPySelf() const { return bp::detail::wrapper_base_::get_owner(*this); }

    virtual ServerClass* GetServerClass() {
        PY_OVERRIDE_CHECK( CBaseFlex, GetServerClass )
        PY_OVERRIDE_LOG( _entities, CBaseFlex, GetServerClass )
        ServerClass *pServerClass = SrcPySystem()->Get<ServerClass *>( "pyServerClass", GetPyInstance(), NULL, true );
        if( pServerClass )
            return pServerClass;
        return CBaseFlex::GetServerClass();
    }

    static int m_lifeState_Get( CBaseFlex const & inst ) { return inst.m_lifeState.Get(); }

    static void m_lifeState_Set( CBaseFlex & inst, int val ) { inst.m_lifeState.Set( val ); }

    static int m_takedamage_Get( CBaseFlex const & inst ) { return inst.m_takedamage.Get(); }

    static void m_takedamage_Set( CBaseFlex & inst, int val ) { inst.m_takedamage.Set( val ); }

    static int m_nSkin_Get( CBaseFlex const & inst ) { return inst.m_nSkin.Get(); }

    static void m_nSkin_Set( CBaseFlex & inst, int val ) { inst.m_nSkin.Set( val ); }

};

void register_CBaseFlex_class(){

    bp::class_< CBaseFlex_wrapper, bp::bases< CBaseAnimatingOverlay >, boost::noncopyable >( "CBaseFlex", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "Blink"
            , (void ( ::CBaseFlex::* )(  ) )( &::CBaseFlex::Blink ) )    
        .def( 
            "ClearSceneEvent"
            , (bool ( ::CBaseFlex::* )( ::CSceneEventInfo *,bool,bool ) )( &::CBaseFlex::ClearSceneEvent )
            , ( bp::arg("info"), bp::arg("fastKill"), bp::arg("canceled") ) )    
        .def( 
            "DoBodyLean"
            , (void ( ::CBaseFlex::* )(  ) )( &::CBaseFlex::DoBodyLean ) )    
        .def( 
            "EnsureTranslations"
            , (void ( ::CBaseFlex::* )( ::flexsettinghdr_t const * ) )( &::CBaseFlex::EnsureTranslations )
            , ( bp::arg("pSettinghdr") ) )    
        .def( 
            "FindFlexController"
            , (::LocalFlexController_t ( ::CBaseFlex::* )( char const * ) )( &::CBaseFlex::FindFlexController )
            , ( bp::arg("szName") ) )    
        .def( 
            "GetFlexWeight"
            , (float ( ::CBaseFlex::* )( char * ) )( &::CBaseFlex::GetFlexWeight )
            , ( bp::arg("szName") ) )    
        .def( 
            "GetFlexWeight"
            , (float ( ::CBaseFlex::* )( ::LocalFlexController_t ) )( &::CBaseFlex::GetFlexWeight )
            , ( bp::arg("index") ) )    
        .def( 
            "GetPyNetworkType"
            , (int (*)(  ))( &::CBaseFlex::GetPyNetworkType ) )    
        .def( 
            "GetSpecialDSP"
            , (int ( ::CBaseFlex::* )(  ) )( &::CBaseFlex::GetSpecialDSP ) )    
        .def( 
            "GetViewtarget"
            , (::Vector const & ( ::CBaseFlex::* )(  ) const)( &::CBaseFlex::GetViewtarget )
            , bp::return_value_policy< bp::copy_const_reference >() )    
        .def( 
            "IsSuppressedFlexAnimation"
            , (bool ( ::CBaseFlex::* )( ::CSceneEventInfo * ) )( &::CBaseFlex::IsSuppressedFlexAnimation )
            , ( bp::arg("info") ) )    
        .def( 
            "PermitResponse"
            , (bool ( ::CBaseFlex::* )( float ) )( &::CBaseFlex::PermitResponse )
            , ( bp::arg("response_length") ) )    
        .def( 
            "PlayAutoGeneratedSoundScene"
            , (float ( ::CBaseFlex::* )( char const * ) )( &::CBaseFlex::PlayAutoGeneratedSoundScene )
            , ( bp::arg("soundname") ) )    
        .def( 
            "ProcessSceneEvents"
            , (void ( ::CBaseFlex::* )(  ) )( &::CBaseFlex::ProcessSceneEvents ) )    
        .def( 
            "SentenceStop"
            , (void ( ::CBaseFlex::* )(  ) )( &::CBaseFlex::SentenceStop ) )    
        .def( 
            "SetFlexWeight"
            , (void ( ::CBaseFlex::* )( char *,float ) )( &::CBaseFlex::SetFlexWeight )
            , ( bp::arg("szName"), bp::arg("value") ) )    
        .def( 
            "SetFlexWeight"
            , (void ( ::CBaseFlex::* )( ::LocalFlexController_t,float ) )( &::CBaseFlex::SetFlexWeight )
            , ( bp::arg("index"), bp::arg("value") ) )    
        .def( 
            "SetModel"
            , (void ( ::CBaseFlex::* )( char const * ) )( &::CBaseFlex::SetModel )
            , ( bp::arg("szModelName") ) )    
        .def( 
            "SetPermitResponse"
            , (void ( ::CBaseFlex::* )( float ) )( &::CBaseFlex::SetPermitResponse )
            , ( bp::arg("endtime") ) )    
        .def( 
            "SetViewtarget"
            , (void ( ::CBaseFlex::* )( ::Vector const & ) )( &::CBaseFlex::SetViewtarget )
            , ( bp::arg("viewtarget") ) )    
        .def( 
            "Teleport"
            , (void ( ::CBaseFlex::* )( ::Vector const *,::QAngle const *,::Vector const * ) )( &::CBaseFlex::Teleport )
            , ( bp::arg("newPosition"), bp::arg("newAngles"), bp::arg("newVelocity") ) )    
        .def( 
            "Activate"
            , (void ( ::CBaseAnimating::* )(  ) )(&::CBaseAnimating::Activate)
            , (void ( CBaseFlex_wrapper::* )(  ) )(&CBaseFlex_wrapper::default_Activate) )    
        .def( 
            "CanBecomeRagdoll"
            , (bool ( ::CBaseAnimating::* )(  ) )(&::CBaseAnimating::CanBecomeRagdoll)
            , (bool ( CBaseFlex_wrapper::* )(  ) )(&CBaseFlex_wrapper::default_CanBecomeRagdoll) )    
        .def( 
            "ComputeWorldSpaceSurroundingBox"
            , (void ( ::CBaseEntity::* )( ::Vector *,::Vector * ) )(&::CBaseEntity::ComputeWorldSpaceSurroundingBox)
            , (void ( CBaseFlex_wrapper::* )( ::Vector *,::Vector * ) )(&CBaseFlex_wrapper::default_ComputeWorldSpaceSurroundingBox)
            , ( bp::arg("pWorldMins"), bp::arg("pWorldMaxs") ) )    
        .def( 
            "CreateVPhysics"
            , (bool ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::CreateVPhysics)
            , (bool ( CBaseFlex_wrapper::* )(  ) )(&CBaseFlex_wrapper::default_CreateVPhysics) )    
        .def( 
            "DeathNotice"
            , (void ( ::CBaseEntity::* )( ::CBaseEntity * ) )(&::CBaseEntity::DeathNotice)
            , (void ( CBaseFlex_wrapper::* )( ::CBaseEntity * ) )(&CBaseFlex_wrapper::default_DeathNotice)
            , ( bp::arg("pVictim") ) )    
        .def( 
            "DoImpactEffect"
            , (void ( ::CBaseEntity::* )( ::trace_t &,int ) )(&::CBaseEntity::DoImpactEffect)
            , (void ( CBaseFlex_wrapper::* )( ::trace_t &,int ) )(&CBaseFlex_wrapper::default_DoImpactEffect)
            , ( bp::arg("tr"), bp::arg("nDamageType") ) )    
        .def( 
            "DrawDebugGeometryOverlays"
            , (void ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::DrawDebugGeometryOverlays)
            , (void ( CBaseFlex_wrapper::* )(  ) )(&CBaseFlex_wrapper::default_DrawDebugGeometryOverlays) )    
        .def( 
            "DrawDebugTextOverlays"
            , (int ( ::CBaseAnimating::* )(  ) )(&::CBaseAnimating::DrawDebugTextOverlays)
            , (int ( CBaseFlex_wrapper::* )(  ) )(&CBaseFlex_wrapper::default_DrawDebugTextOverlays) )    
        .def( 
            "EndTouch"
            , (void ( ::CBaseEntity::* )( ::CBaseEntity * ) )(&::CBaseEntity::EndTouch)
            , (void ( CBaseFlex_wrapper::* )( ::CBaseEntity * ) )(&CBaseFlex_wrapper::default_EndTouch)
            , ( bp::arg("pOther") ) )    
        .def( 
            "Event_Killed"
            , (void ( ::CBaseEntity::* )( ::CTakeDamageInfo const & ) )(&::CBaseEntity::Event_Killed)
            , (void ( CBaseFlex_wrapper::* )( ::CTakeDamageInfo const & ) )(&CBaseFlex_wrapper::default_Event_Killed)
            , ( bp::arg("info") ) )    
        .def( 
            "Event_KilledOther"
            , (void ( ::CBaseEntity::* )( ::CBaseEntity *,::CTakeDamageInfo const & ) )(&::CBaseEntity::Event_KilledOther)
            , (void ( CBaseFlex_wrapper::* )( ::CBaseEntity *,::CTakeDamageInfo const & ) )(&CBaseFlex_wrapper::default_Event_KilledOther)
            , ( bp::arg("pVictim"), bp::arg("info") ) )    
        .def( 
            "GetTracerType"
            , (char const * ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::GetTracerType)
            , (char const * ( CBaseFlex_wrapper::* )(  ) )(&CBaseFlex_wrapper::default_GetTracerType) )    
        .def( 
            "KeyValue"
            , (bool ( ::CBaseEntity::* )( char const *,char const * ) )(&::CBaseEntity::KeyValue)
            , (bool ( CBaseFlex_wrapper::* )( char const *,char const * ) )(&CBaseFlex_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("szValue") ) )    
        .def( 
            "KeyValue"
            , (bool ( ::CBaseEntity::* )( char const *,float ) )(&::CBaseEntity::KeyValue)
            , (bool ( CBaseFlex_wrapper::* )( char const *,float ) )(&CBaseFlex_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("flValue") ) )    
        .def( 
            "KeyValue"
            , (bool ( ::CBaseEntity::* )( char const *,::Vector const & ) )(&::CBaseEntity::KeyValue)
            , (bool ( CBaseFlex_wrapper::* )( char const *,::Vector const & ) )(&CBaseFlex_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("vecValue") ) )    
        .def( 
            "MakeTracer"
            , (void ( ::CBaseEntity::* )( ::Vector const &,::trace_t const &,int ) )(&::CBaseEntity::MakeTracer)
            , (void ( CBaseFlex_wrapper::* )( ::Vector const &,::trace_t const &,int ) )(&CBaseFlex_wrapper::default_MakeTracer)
            , ( bp::arg("vecTracerSrc"), bp::arg("tr"), bp::arg("iTracerType") ) )    
        .def( 
            "ModifyOrAppendCriteria"
            , (void ( ::CBaseAnimating::* )( ::AI_CriteriaSet & ) )(&::CBaseAnimating::ModifyOrAppendCriteria)
            , (void ( CBaseFlex_wrapper::* )( ::AI_CriteriaSet & ) )(&CBaseFlex_wrapper::default_ModifyOrAppendCriteria)
            , ( bp::arg("set") ) )    
        .def( 
            "OnRestore"
            , (void ( ::CBaseAnimatingOverlay::* )(  ) )(&::CBaseAnimatingOverlay::OnRestore)
            , (void ( CBaseFlex_wrapper::* )(  ) )(&CBaseFlex_wrapper::default_OnRestore) )    
        .def( 
            "OnTakeDamage"
            , (int ( ::CBaseEntity::* )( ::CTakeDamageInfo const & ) )(&::CBaseEntity::OnTakeDamage)
            , (int ( CBaseFlex_wrapper::* )( ::CTakeDamageInfo const & ) )(&CBaseFlex_wrapper::default_OnTakeDamage)
            , ( bp::arg("info") ) )    
        .def( 
            "PassesDamageFilter"
            , (bool ( ::CBaseEntity::* )( ::CTakeDamageInfo const & ) )(&::CBaseEntity::PassesDamageFilter)
            , (bool ( CBaseFlex_wrapper::* )( ::CTakeDamageInfo const & ) )(&CBaseFlex_wrapper::default_PassesDamageFilter)
            , ( bp::arg("info") ) )    
        .def( 
            "PostClientActive"
            , (void ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::PostClientActive)
            , (void ( CBaseFlex_wrapper::* )(  ) )(&CBaseFlex_wrapper::default_PostClientActive) )    
        .def( 
            "PostConstructor"
            , (void ( ::CBaseEntity::* )( char const * ) )(&::CBaseEntity::PostConstructor)
            , (void ( CBaseFlex_wrapper::* )( char const * ) )(&CBaseFlex_wrapper::default_PostConstructor)
            , ( bp::arg("szClassname") ) )    
        .def( 
            "Precache"
            , (void ( ::CBaseAnimating::* )(  ) )(&::CBaseAnimating::Precache)
            , (void ( CBaseFlex_wrapper::* )(  ) )(&CBaseFlex_wrapper::default_Precache) )    
        .def( 
            "Spawn"
            , (void ( ::CBaseAnimating::* )(  ) )(&::CBaseAnimating::Spawn)
            , (void ( CBaseFlex_wrapper::* )(  ) )(&CBaseFlex_wrapper::default_Spawn) )    
        .def( 
            "StartTouch"
            , (void ( ::CBaseEntity::* )( ::CBaseEntity * ) )(&::CBaseEntity::StartTouch)
            , (void ( CBaseFlex_wrapper::* )( ::CBaseEntity * ) )(&CBaseFlex_wrapper::default_StartTouch)
            , ( bp::arg("pOther") ) )    
        .def( 
            "StopLoopingSounds"
            , (void ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::StopLoopingSounds)
            , (void ( CBaseFlex_wrapper::* )(  ) )(&CBaseFlex_wrapper::default_StopLoopingSounds) )    
        .def( 
            "TraceAttack"
            , (void ( CBaseFlex_wrapper::* )( ::CTakeDamageInfo const &,::Vector const &,::trace_t *,::CDmgAccumulator * ) )(&CBaseFlex_wrapper::TraceAttack)
            , ( bp::arg("info"), bp::arg("vecDir"), bp::arg("ptr"), bp::arg("pAccumulator")=bp::object() ) )    
        .def( 
            "UpdateOnRemove"
            , (void ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::UpdateOnRemove)
            , (void ( CBaseFlex_wrapper::* )(  ) )(&CBaseFlex_wrapper::default_UpdateOnRemove) )    
        .def( 
            "UpdateTransmitState"
            , (int ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::UpdateTransmitState)
            , (int ( CBaseFlex_wrapper::* )(  ) )(&CBaseFlex_wrapper::default_UpdateTransmitState) )    
        .def( 
            "VPhysicsCollision"
            , (void ( ::CBaseEntity::* )( int,::gamevcollisionevent_t * ) )(&::CBaseEntity::VPhysicsCollision)
            , (void ( CBaseFlex_wrapper::* )( int,::gamevcollisionevent_t * ) )(&CBaseFlex_wrapper::default_VPhysicsCollision)
            , ( bp::arg("index"), bp::arg("pEvent") ) )    
        .staticmethod( "GetPyNetworkType" )    
        .add_property( "lifestate", &CBaseFlex_wrapper::m_lifeState_Get, &CBaseFlex_wrapper::m_lifeState_Set )    
        .add_property( "takedamage", &CBaseFlex_wrapper::m_takedamage_Get, &CBaseFlex_wrapper::m_takedamage_Set )    
        .add_property( "skin", &CBaseFlex_wrapper::m_nSkin_Get, &CBaseFlex_wrapper::m_nSkin_Set );

}

