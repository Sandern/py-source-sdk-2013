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
#include "tier0/valve_minmax_off.h"
#include "srcpy.h"
#include "tier0/valve_minmax_on.h"
#include "tier0/memdbgon.h"
#include "CPhysicsProp_pypp.hpp"

namespace bp = boost::python;

struct CPhysicsProp_wrapper : CPhysicsProp, bp::wrapper< CPhysicsProp > {

    CPhysicsProp_wrapper( )
    : CPhysicsProp( )
      , bp::wrapper< CPhysicsProp >(){
        // null constructor
    
    }

    virtual bool CreateVPhysics(  ) {
        PY_OVERRIDE_CHECK( CPhysicsProp, CreateVPhysics )
        PY_OVERRIDE_LOG( _entities, CPhysicsProp, CreateVPhysics )
        bp::override func_CreateVPhysics = this->get_override( "CreateVPhysics" );
        if( func_CreateVPhysics.ptr() != Py_None )
            try {
                return func_CreateVPhysics(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CPhysicsProp::CreateVPhysics(  );
            }
        else
            return this->CPhysicsProp::CreateVPhysics(  );
    }
    
    bool default_CreateVPhysics(  ) {
        return CPhysicsProp::CreateVPhysics( );
    }

    virtual int DrawDebugTextOverlays(  ) {
        PY_OVERRIDE_CHECK( CPhysicsProp, DrawDebugTextOverlays )
        PY_OVERRIDE_LOG( _entities, CPhysicsProp, DrawDebugTextOverlays )
        bp::override func_DrawDebugTextOverlays = this->get_override( "DrawDebugTextOverlays" );
        if( func_DrawDebugTextOverlays.ptr() != Py_None )
            try {
                return func_DrawDebugTextOverlays(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CPhysicsProp::DrawDebugTextOverlays(  );
            }
        else
            return this->CPhysicsProp::DrawDebugTextOverlays(  );
    }
    
    int default_DrawDebugTextOverlays(  ) {
        return CPhysicsProp::DrawDebugTextOverlays( );
    }

    virtual int OnTakeDamage( ::CTakeDamageInfo const & info ) {
        PY_OVERRIDE_CHECK( CPhysicsProp, OnTakeDamage )
        PY_OVERRIDE_LOG( _entities, CPhysicsProp, OnTakeDamage )
        bp::override func_OnTakeDamage = this->get_override( "OnTakeDamage" );
        if( func_OnTakeDamage.ptr() != Py_None )
            try {
                return func_OnTakeDamage( boost::ref(info) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CPhysicsProp::OnTakeDamage( info );
            }
        else
            return this->CPhysicsProp::OnTakeDamage( info );
    }
    
    int default_OnTakeDamage( ::CTakeDamageInfo const & info ) {
        return CPhysicsProp::OnTakeDamage( info );
    }

    virtual void Precache(  ) {
        PY_OVERRIDE_CHECK( CPhysicsProp, Precache )
        PY_OVERRIDE_LOG( _entities, CPhysicsProp, Precache )
        bp::override func_Precache = this->get_override( "Precache" );
        if( func_Precache.ptr() != Py_None )
            try {
                func_Precache(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CPhysicsProp::Precache(  );
            }
        else
            this->CPhysicsProp::Precache(  );
    }
    
    void default_Precache(  ) {
        CPhysicsProp::Precache( );
    }

    virtual void Spawn(  ) {
        PY_OVERRIDE_CHECK( CPhysicsProp, Spawn )
        PY_OVERRIDE_LOG( _entities, CPhysicsProp, Spawn )
        bp::override func_Spawn = this->get_override( "Spawn" );
        if( func_Spawn.ptr() != Py_None )
            try {
                func_Spawn(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CPhysicsProp::Spawn(  );
            }
        else
            this->CPhysicsProp::Spawn(  );
    }
    
    void default_Spawn(  ) {
        CPhysicsProp::Spawn( );
    }

    virtual void VPhysicsCollision( int index, ::gamevcollisionevent_t * pEvent ) {
        PY_OVERRIDE_CHECK( CPhysicsProp, VPhysicsCollision )
        PY_OVERRIDE_LOG( _entities, CPhysicsProp, VPhysicsCollision )
        bp::override func_VPhysicsCollision = this->get_override( "VPhysicsCollision" );
        if( func_VPhysicsCollision.ptr() != Py_None )
            try {
                func_VPhysicsCollision( index, boost::python::ptr(pEvent) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CPhysicsProp::VPhysicsCollision( index, pEvent );
            }
        else
            this->CPhysicsProp::VPhysicsCollision( index, pEvent );
    }
    
    void default_VPhysicsCollision( int index, ::gamevcollisionevent_t * pEvent ) {
        CPhysicsProp::VPhysicsCollision( index, pEvent );
    }

    virtual void Activate(  ) {
        PY_OVERRIDE_CHECK( CBaseProp, Activate )
        PY_OVERRIDE_LOG( _entities, CBaseProp, Activate )
        bp::override func_Activate = this->get_override( "Activate" );
        if( func_Activate.ptr() != Py_None )
            try {
                func_Activate(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseProp::Activate(  );
            }
        else
            this->CBaseProp::Activate(  );
    }
    
    void default_Activate(  ) {
        CBaseProp::Activate( );
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
        PY_OVERRIDE_CHECK( CBaseProp, DrawDebugGeometryOverlays )
        PY_OVERRIDE_LOG( _entities, CBaseProp, DrawDebugGeometryOverlays )
        bp::override func_DrawDebugGeometryOverlays = this->get_override( "DrawDebugGeometryOverlays" );
        if( func_DrawDebugGeometryOverlays.ptr() != Py_None )
            try {
                func_DrawDebugGeometryOverlays(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseProp::DrawDebugGeometryOverlays(  );
            }
        else
            this->CBaseProp::DrawDebugGeometryOverlays(  );
    }
    
    void default_DrawDebugGeometryOverlays(  ) {
        CBaseProp::DrawDebugGeometryOverlays( );
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
        PY_OVERRIDE_CHECK( CBreakableProp, Event_Killed )
        PY_OVERRIDE_LOG( _entities, CBreakableProp, Event_Killed )
        bp::override func_Event_Killed = this->get_override( "Event_Killed" );
        if( func_Event_Killed.ptr() != Py_None )
            try {
                func_Event_Killed( boost::ref(info) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBreakableProp::Event_Killed( info );
            }
        else
            this->CBreakableProp::Event_Killed( info );
    }
    
    void default_Event_Killed( ::CTakeDamageInfo const & info ) {
        CBreakableProp::Event_Killed( info );
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

    virtual bool KeyValue( char const * szKeyName, char const * szValue ) {
        PY_OVERRIDE_CHECK( CBaseProp, KeyValue )
        PY_OVERRIDE_LOG( _entities, CBaseProp, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, szValue );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseProp::KeyValue( szKeyName, szValue );
            }
        else
            return this->CBaseProp::KeyValue( szKeyName, szValue );
    }
    
    bool default_KeyValue( char const * szKeyName, char const * szValue ) {
        return CBaseProp::KeyValue( szKeyName, szValue );
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
        PY_OVERRIDE_CHECK( CBaseAnimating, OnRestore )
        PY_OVERRIDE_LOG( _entities, CBaseAnimating, OnRestore )
        bp::override func_OnRestore = this->get_override( "OnRestore" );
        if( func_OnRestore.ptr() != Py_None )
            try {
                func_OnRestore(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseAnimating::OnRestore(  );
            }
        else
            this->CBaseAnimating::OnRestore(  );
    }
    
    void default_OnRestore(  ) {
        CBaseAnimating::OnRestore( );
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

    virtual PyObject *GetPySelf() const { return bp::detail::wrapper_base_::get_owner(*this); }

    virtual ServerClass* GetServerClass() {
        PY_OVERRIDE_CHECK( CBaseAnimating, GetServerClass )
        PY_OVERRIDE_LOG( _entities, CBaseAnimating, GetServerClass )
        ServerClass *pServerClass = SrcPySystem()->Get<ServerClass *>( "pyServerClass", GetPyInstance(), NULL, true );
        if( pServerClass )
            return pServerClass;
        return CBaseAnimating::GetServerClass();
    }

    static int m_lifeState_Get( CPhysicsProp const & inst ) { return inst.m_lifeState.Get(); }

    static void m_lifeState_Set( CPhysicsProp & inst, int val ) { inst.m_lifeState.Set( val ); }

    static int m_takedamage_Get( CPhysicsProp const & inst ) { return inst.m_takedamage.Get(); }

    static void m_takedamage_Set( CPhysicsProp & inst, int val ) { inst.m_takedamage.Set( val ); }

    static int m_nSkin_Get( CPhysicsProp const & inst ) { return inst.m_nSkin.Get(); }

    static void m_nSkin_Set( CPhysicsProp & inst, int val ) { inst.m_nSkin.Set( val ); }

};

void register_CPhysicsProp_class(){

    bp::class_< CPhysicsProp_wrapper, bp::bases< CBreakableProp >, boost::noncopyable >( "CPhysicsProp", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "CanBePickedUpByPhyscannon"
            , (bool ( ::CPhysicsProp::* )(  ) )( &::CPhysicsProp::CanBePickedUpByPhyscannon ) )    
        .def( 
            "ClearFlagsThink"
            , (void ( ::CPhysicsProp::* )(  ) )( &::CPhysicsProp::ClearFlagsThink ) )    
        .def( 
            "CreateVPhysics"
            , (bool ( ::CPhysicsProp::* )(  ) )(&::CPhysicsProp::CreateVPhysics)
            , (bool ( CPhysicsProp_wrapper::* )(  ) )(&CPhysicsProp_wrapper::default_CreateVPhysics) )    
        .def( 
            "DrawDebugTextOverlays"
            , (int ( ::CPhysicsProp::* )(  ) )(&::CPhysicsProp::DrawDebugTextOverlays)
            , (int ( CPhysicsProp_wrapper::* )(  ) )(&CPhysicsProp_wrapper::default_DrawDebugTextOverlays) )    
        .def( 
            "EnableMotion"
            , (void ( ::CPhysicsProp::* )(  ) )( &::CPhysicsProp::EnableMotion ) )    
        .def( 
            "GetCarryDistanceOffset"
            , (float ( ::CPhysicsProp::* )(  ) )( &::CPhysicsProp::GetCarryDistanceOffset ) )    
        .def( 
            "GetMass"
            , (float ( ::CPhysicsProp::* )(  ) const)( &::CPhysicsProp::GetMass ) )    
        .def( 
            "GetMassCenter"
            , (void ( ::CPhysicsProp::* )( ::Vector * ) )( &::CPhysicsProp::GetMassCenter )
            , ( bp::arg("pMassCenter") ) )    
        .def( 
            "GetMassScale"
            , (float ( ::CPhysicsProp::* )(  ) )( &::CPhysicsProp::GetMassScale ) )    
        .def( 
            "GetPhysOverrideScript"
            , (::string_t ( ::CPhysicsProp::* )(  ) )( &::CPhysicsProp::GetPhysOverrideScript ) )    
        .def( 
            "GetPropDataAngles"
            , (bool ( ::CPhysicsProp::* )( char const *,::QAngle & ) )( &::CPhysicsProp::GetPropDataAngles )
            , ( bp::arg("pKeyName"), bp::arg("vecAngles") ) )    
        .def( 
            "HandleAnyCollisionInteractions"
            , (void ( ::CPhysicsProp::* )( int,::gamevcollisionevent_t * ) )( &::CPhysicsProp::HandleAnyCollisionInteractions )
            , ( bp::arg("index"), bp::arg("pEvent") ) )    
        .def( 
            "InputDisableFloating"
            , (void ( ::CPhysicsProp::* )( ::inputdata_t & ) )( &::CPhysicsProp::InputDisableFloating )
            , ( bp::arg("inputdata") ) )    
        .def( 
            "InputDisableMotion"
            , (void ( ::CPhysicsProp::* )( ::inputdata_t & ) )( &::CPhysicsProp::InputDisableMotion )
            , ( bp::arg("inputdata") ) )    
        .def( 
            "InputEnableMotion"
            , (void ( ::CPhysicsProp::* )( ::inputdata_t & ) )( &::CPhysicsProp::InputEnableMotion )
            , ( bp::arg("inputdata") ) )    
        .def( 
            "InputSleep"
            , (void ( ::CPhysicsProp::* )( ::inputdata_t & ) )( &::CPhysicsProp::InputSleep )
            , ( bp::arg("inputdata") ) )    
        .def( 
            "InputWake"
            , (void ( ::CPhysicsProp::* )( ::inputdata_t & ) )( &::CPhysicsProp::InputWake )
            , ( bp::arg("inputdata") ) )    
        .def( 
            "IsGib"
            , (bool ( ::CPhysicsProp::* )(  ) )( &::CPhysicsProp::IsGib ) )    
        .def( 
            "ObjectCaps"
            , (int ( ::CPhysicsProp::* )(  ) )( &::CPhysicsProp::ObjectCaps ) )    
        .def( 
            "OnPhysGunDrop"
            , (void ( ::CPhysicsProp::* )( ::CBasePlayer *,::PhysGunDrop_t ) )( &::CPhysicsProp::OnPhysGunDrop )
            , ( bp::arg("pPhysGunUser"), bp::arg("reason") ) )    
        .def( 
            "OnPhysGunPickup"
            , (void ( ::CPhysicsProp::* )( ::CBasePlayer *,::PhysGunPickup_t ) )( &::CPhysicsProp::OnPhysGunPickup )
            , ( bp::arg("pPhysGunUser"), bp::arg("reason") ) )    
        .def( 
            "OnTakeDamage"
            , (int ( ::CPhysicsProp::* )( ::CTakeDamageInfo const & ) )(&::CPhysicsProp::OnTakeDamage)
            , (int ( CPhysicsProp_wrapper::* )( ::CTakeDamageInfo const & ) )(&CPhysicsProp_wrapper::default_OnTakeDamage)
            , ( bp::arg("info") ) )    
        .def( 
            "OverridePropdata"
            , (bool ( ::CPhysicsProp::* )(  ) )( &::CPhysicsProp::OverridePropdata ) )    
        .def( 
            "Precache"
            , (void ( ::CPhysicsProp::* )(  ) )(&::CPhysicsProp::Precache)
            , (void ( CPhysicsProp_wrapper::* )(  ) )(&CPhysicsProp_wrapper::default_Precache) )    
        .def( 
            "Spawn"
            , (void ( ::CPhysicsProp::* )(  ) )(&::CPhysicsProp::Spawn)
            , (void ( CPhysicsProp_wrapper::* )(  ) )(&CPhysicsProp_wrapper::default_Spawn) )    
        .def( 
            "Use"
            , (void ( ::CPhysicsProp::* )( ::CBaseEntity *,::CBaseEntity *,::USE_TYPE,float ) )( &::CPhysicsProp::Use )
            , ( bp::arg("pActivator"), bp::arg("pCaller"), bp::arg("useType"), bp::arg("value") ) )    
        .def( 
            "VPhysicsCollision"
            , (void ( ::CPhysicsProp::* )( int,::gamevcollisionevent_t * ) )(&::CPhysicsProp::VPhysicsCollision)
            , (void ( CPhysicsProp_wrapper::* )( int,::gamevcollisionevent_t * ) )(&CPhysicsProp_wrapper::default_VPhysicsCollision)
            , ( bp::arg("index"), bp::arg("pEvent") ) )    
        .def( 
            "VPhysicsUpdate"
            , (void ( ::CPhysicsProp::* )( ::IPhysicsObject * ) )( &::CPhysicsProp::VPhysicsUpdate )
            , ( bp::arg("pPhysics") ) )    
        .def( 
            "Activate"
            , (void ( ::CBaseProp::* )(  ) )(&::CBaseProp::Activate)
            , (void ( CPhysicsProp_wrapper::* )(  ) )(&CPhysicsProp_wrapper::default_Activate) )    
        .def( 
            "CanBecomeRagdoll"
            , (bool ( ::CBaseAnimating::* )(  ) )(&::CBaseAnimating::CanBecomeRagdoll)
            , (bool ( CPhysicsProp_wrapper::* )(  ) )(&CPhysicsProp_wrapper::default_CanBecomeRagdoll) )    
        .def( 
            "ComputeWorldSpaceSurroundingBox"
            , (void ( ::CBaseEntity::* )( ::Vector *,::Vector * ) )(&::CBaseEntity::ComputeWorldSpaceSurroundingBox)
            , (void ( CPhysicsProp_wrapper::* )( ::Vector *,::Vector * ) )(&CPhysicsProp_wrapper::default_ComputeWorldSpaceSurroundingBox)
            , ( bp::arg("pWorldMins"), bp::arg("pWorldMaxs") ) )    
        .def( 
            "DeathNotice"
            , (void ( ::CBaseEntity::* )( ::CBaseEntity * ) )(&::CBaseEntity::DeathNotice)
            , (void ( CPhysicsProp_wrapper::* )( ::CBaseEntity * ) )(&CPhysicsProp_wrapper::default_DeathNotice)
            , ( bp::arg("pVictim") ) )    
        .def( 
            "DoImpactEffect"
            , (void ( ::CBaseEntity::* )( ::trace_t &,int ) )(&::CBaseEntity::DoImpactEffect)
            , (void ( CPhysicsProp_wrapper::* )( ::trace_t &,int ) )(&CPhysicsProp_wrapper::default_DoImpactEffect)
            , ( bp::arg("tr"), bp::arg("nDamageType") ) )    
        .def( 
            "DrawDebugGeometryOverlays"
            , (void ( ::CBaseProp::* )(  ) )(&::CBaseProp::DrawDebugGeometryOverlays)
            , (void ( CPhysicsProp_wrapper::* )(  ) )(&CPhysicsProp_wrapper::default_DrawDebugGeometryOverlays) )    
        .def( 
            "EndTouch"
            , (void ( ::CBaseEntity::* )( ::CBaseEntity * ) )(&::CBaseEntity::EndTouch)
            , (void ( CPhysicsProp_wrapper::* )( ::CBaseEntity * ) )(&CPhysicsProp_wrapper::default_EndTouch)
            , ( bp::arg("pOther") ) )    
        .def( 
            "Event_Killed"
            , (void ( ::CBreakableProp::* )( ::CTakeDamageInfo const & ) )(&::CBreakableProp::Event_Killed)
            , (void ( CPhysicsProp_wrapper::* )( ::CTakeDamageInfo const & ) )(&CPhysicsProp_wrapper::default_Event_Killed)
            , ( bp::arg("info") ) )    
        .def( 
            "Event_KilledOther"
            , (void ( ::CBaseEntity::* )( ::CBaseEntity *,::CTakeDamageInfo const & ) )(&::CBaseEntity::Event_KilledOther)
            , (void ( CPhysicsProp_wrapper::* )( ::CBaseEntity *,::CTakeDamageInfo const & ) )(&CPhysicsProp_wrapper::default_Event_KilledOther)
            , ( bp::arg("pVictim"), bp::arg("info") ) )    
        .def( 
            "GetTracerType"
            , (char const * ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::GetTracerType)
            , (char const * ( CPhysicsProp_wrapper::* )(  ) )(&CPhysicsProp_wrapper::default_GetTracerType) )    
        .def( 
            "KeyValue"
            , (bool ( ::CBaseEntity::* )( char const *,float ) )(&::CBaseEntity::KeyValue)
            , (bool ( CPhysicsProp_wrapper::* )( char const *,float ) )(&CPhysicsProp_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("flValue") ) )    
        .def( 
            "KeyValue"
            , (bool ( ::CBaseEntity::* )( char const *,::Vector const & ) )(&::CBaseEntity::KeyValue)
            , (bool ( CPhysicsProp_wrapper::* )( char const *,::Vector const & ) )(&CPhysicsProp_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("vecValue") ) )    
        .def( 
            "KeyValue"
            , (bool ( ::CBaseProp::* )( char const *,char const * ) )(&::CBaseProp::KeyValue)
            , (bool ( CPhysicsProp_wrapper::* )( char const *,char const * ) )(&CPhysicsProp_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("szValue") ) )    
        .def( 
            "MakeTracer"
            , (void ( ::CBaseEntity::* )( ::Vector const &,::trace_t const &,int ) )(&::CBaseEntity::MakeTracer)
            , (void ( CPhysicsProp_wrapper::* )( ::Vector const &,::trace_t const &,int ) )(&CPhysicsProp_wrapper::default_MakeTracer)
            , ( bp::arg("vecTracerSrc"), bp::arg("tr"), bp::arg("iTracerType") ) )    
        .def( 
            "ModifyOrAppendCriteria"
            , (void ( ::CBaseAnimating::* )( ::AI_CriteriaSet & ) )(&::CBaseAnimating::ModifyOrAppendCriteria)
            , (void ( CPhysicsProp_wrapper::* )( ::AI_CriteriaSet & ) )(&CPhysicsProp_wrapper::default_ModifyOrAppendCriteria)
            , ( bp::arg("set") ) )    
        .def( 
            "OnRestore"
            , (void ( ::CBaseAnimating::* )(  ) )(&::CBaseAnimating::OnRestore)
            , (void ( CPhysicsProp_wrapper::* )(  ) )(&CPhysicsProp_wrapper::default_OnRestore) )    
        .def( 
            "PassesDamageFilter"
            , (bool ( ::CBaseEntity::* )( ::CTakeDamageInfo const & ) )(&::CBaseEntity::PassesDamageFilter)
            , (bool ( CPhysicsProp_wrapper::* )( ::CTakeDamageInfo const & ) )(&CPhysicsProp_wrapper::default_PassesDamageFilter)
            , ( bp::arg("info") ) )    
        .def( 
            "PostClientActive"
            , (void ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::PostClientActive)
            , (void ( CPhysicsProp_wrapper::* )(  ) )(&CPhysicsProp_wrapper::default_PostClientActive) )    
        .def( 
            "PostConstructor"
            , (void ( ::CBaseEntity::* )( char const * ) )(&::CBaseEntity::PostConstructor)
            , (void ( CPhysicsProp_wrapper::* )( char const * ) )(&CPhysicsProp_wrapper::default_PostConstructor)
            , ( bp::arg("szClassname") ) )    
        .def( 
            "StartTouch"
            , (void ( ::CBaseEntity::* )( ::CBaseEntity * ) )(&::CBaseEntity::StartTouch)
            , (void ( CPhysicsProp_wrapper::* )( ::CBaseEntity * ) )(&CPhysicsProp_wrapper::default_StartTouch)
            , ( bp::arg("pOther") ) )    
        .def( 
            "StopLoopingSounds"
            , (void ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::StopLoopingSounds)
            , (void ( CPhysicsProp_wrapper::* )(  ) )(&CPhysicsProp_wrapper::default_StopLoopingSounds) )    
        .def( 
            "TraceAttack"
            , (void ( CPhysicsProp_wrapper::* )( ::CTakeDamageInfo const &,::Vector const &,::trace_t *,::CDmgAccumulator * ) )(&CPhysicsProp_wrapper::TraceAttack)
            , ( bp::arg("info"), bp::arg("vecDir"), bp::arg("ptr"), bp::arg("pAccumulator")=bp::object() ) )    
        .def( 
            "UpdateOnRemove"
            , (void ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::UpdateOnRemove)
            , (void ( CPhysicsProp_wrapper::* )(  ) )(&CPhysicsProp_wrapper::default_UpdateOnRemove) )    
        .def( 
            "UpdateTransmitState"
            , (int ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::UpdateTransmitState)
            , (int ( CPhysicsProp_wrapper::* )(  ) )(&CPhysicsProp_wrapper::default_UpdateTransmitState) )    
        .add_property( "lifestate", &CPhysicsProp_wrapper::m_lifeState_Get, &CPhysicsProp_wrapper::m_lifeState_Set )    
        .add_property( "takedamage", &CPhysicsProp_wrapper::m_takedamage_Get, &CPhysicsProp_wrapper::m_takedamage_Set )    
        .add_property( "skin", &CPhysicsProp_wrapper::m_nSkin_Get, &CPhysicsProp_wrapper::m_nSkin_Set );

}

