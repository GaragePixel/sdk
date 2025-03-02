
Namespace sdk.api.chipmunk

#Import "chipmunk_glue.h"

Extern

'***** File: Chipmunk7/include/chipmunk/cpSpace.h *****

Alias cpCollisionBeginFunc:cpBool( cpArbiter, cpSpace, cpDataPointer )
Alias cpCollisionPreSolveFunc:cpBool( cpArbiter, cpSpace, cpDataPointer )
Alias cpCollisionPostSolveFunc:Void( cpArbiter, cpSpace, cpDataPointer )
Alias cpCollisionSeparateFunc:Void( cpArbiter, cpSpace, cpDataPointer )

Class cpCollisionHandler="bb_cpCollisionHandler"
	Field typeA:cpCollisionType
	Field typeB:cpCollisionType
	Field beginFunc:cpCollisionBeginFunc
	Field preSolveFunc:cpCollisionPreSolveFunc
	Field postSolveFunc:cpCollisionPostSolveFunc
	Field separateFunc:cpCollisionSeparateFunc
	Field userData:cpDataPointer
End

Alias cpSpaceDebugDrawCircleImpl:Void( cpVect, cpFloat, cpFloat, cpSpaceDebugColor, cpSpaceDebugColor, cpDataPointer )
Alias cpSpaceDebugDrawSegmentImpl:Void( cpVect, cpVect, cpSpaceDebugColor, cpDataPointer )
Alias cpSpaceDebugDrawFatSegmentImpl:Void( cpVect, cpVect, cpFloat, cpSpaceDebugColor, cpSpaceDebugColor, cpDataPointer )
Alias cpSpaceDebugDrawPolygonImpl:Void( Int, cpVect Ptr, cpFloat, cpSpaceDebugColor, cpSpaceDebugColor, cpDataPointer )
Alias cpSpaceDebugDrawDotImpl:Void( cpFloat, cpVect, cpSpaceDebugColor, cpDataPointer )
Alias cpSpaceDebugDrawColorForShapeImpl:cpSpaceDebugColor( cpShape, cpDataPointer )

Enum cpSpaceDebugDrawFlags
End

Const CP_SPACE_DEBUG_DRAW_SHAPES:cpSpaceDebugDrawFlags
Const CP_SPACE_DEBUG_DRAW_CONSTRAINTS:cpSpaceDebugDrawFlags
Const CP_SPACE_DEBUG_DRAW_COLLISION_POINTS:cpSpaceDebugDrawFlags

Struct cpSpaceDebugColor
	Field r:Float
	Field g:Float
	Field b:Float
	Field a:Float
End

Class cpSpaceDebugDrawOptions="bb_cpSpaceDebugDrawOptions"
	Field drawCircle:cpSpaceDebugDrawCircleImpl
	Field drawSegment:cpSpaceDebugDrawSegmentImpl
	Field drawFatSegment:cpSpaceDebugDrawFatSegmentImpl
	Field drawPolygon:cpSpaceDebugDrawPolygonImpl
	Field drawDot:cpSpaceDebugDrawDotImpl
	Field flags:cpSpaceDebugDrawFlags
	Field shapeOutlineColor:cpSpaceDebugColor
	Field colorForShape:cpSpaceDebugDrawColorForShapeImpl
	Field constraintColor:cpSpaceDebugColor
	Field collisionPointColor:cpSpaceDebugColor
	Field userData:cpDataPointer
End

Alias cpPostStepFunc:Void( cpSpace, Void Ptr, Void Ptr )
Alias cpSpacePointQueryFunc:Void( cpShape, cpVect, cpFloat, cpVect, Void Ptr )
Alias cpSpaceSegmentQueryFunc:Void( cpShape, cpVect, cpVect, cpFloat, Void Ptr )
Alias cpSpaceBBQueryFunc:Void( cpShape, Void Ptr )
Alias cpSpaceShapeQueryFunc:Void( cpShape, cpContactPointSet Ptr, Void Ptr )
Alias cpSpaceBodyIteratorFunc:Void( cpBody, Void Ptr )
Alias cpSpaceShapeIteratorFunc:Void( cpShape, Void Ptr )
Alias cpSpaceConstraintIteratorFunc:Void( cpConstraint, Void Ptr )

Function cpSpaceAlloc:cpSpace(  )
Function cpSpaceInit:cpSpace( space:cpSpace )
Function cpSpaceNew:cpSpace(  )
Function cpSpaceDestroy:Void( space:cpSpace )
Function cpSpaceFree:Void( space:cpSpace )
Function cpSpaceGetIterations:Int( space:cpSpace )
Function cpSpaceSetIterations:Void( space:cpSpace, iterations:Int )
Function cpSpaceGetGravity:cpVect( space:cpSpace )
Function cpSpaceSetGravity:Void( space:cpSpace, gravity:cpVect )
Function cpSpaceGetDamping:cpFloat( space:cpSpace )
Function cpSpaceSetDamping:Void( space:cpSpace, damping:cpFloat )
Function cpSpaceGetIdleSpeedThreshold:cpFloat( space:cpSpace )
Function cpSpaceSetIdleSpeedThreshold:Void( space:cpSpace, idleSpeedThreshold:cpFloat )
Function cpSpaceGetSleepTimeThreshold:cpFloat( space:cpSpace )
Function cpSpaceSetSleepTimeThreshold:Void( space:cpSpace, sleepTimeThreshold:cpFloat )
Function cpSpaceGetCollisionSlop:cpFloat( space:cpSpace )
Function cpSpaceSetCollisionSlop:Void( space:cpSpace, collisionSlop:cpFloat )
Function cpSpaceGetCollisionBias:cpFloat( space:cpSpace )
Function cpSpaceSetCollisionBias:Void( space:cpSpace, collisionBias:cpFloat )
Function cpSpaceGetCollisionPersistence:cpTimestamp( space:cpSpace )
Function cpSpaceSetCollisionPersistence:Void( space:cpSpace, collisionPersistence:cpTimestamp )
Function cpSpaceGetUserData:cpDataPointer( space:cpSpace )
Function cpSpaceSetUserData:Void( space:cpSpace, userData:cpDataPointer )
Function cpSpaceGetStaticBody:cpBody( space:cpSpace )
Function cpSpaceGetCurrentTimeStep:cpFloat( space:cpSpace )
Function cpSpaceIsLocked:cpBool( space:cpSpace )
Function cpSpaceAddDefaultCollisionHandler:cpCollisionHandler( space:cpSpace )="bb_cpSpaceAddDefaultCollisionHandler"
Function cpSpaceAddCollisionHandler:cpCollisionHandler( space:cpSpace, a:cpCollisionType, b:cpCollisionType )="bb_cpSpaceAddCollisionHandler"
Function cpSpaceAddWildcardHandler:cpCollisionHandler( space:cpSpace, type:cpCollisionType )="bb_cpSpaceAddWildcardHandler"
Function cpSpaceAddShape:cpShape( space:cpSpace, shape:cpShape )
Function cpSpaceAddBody:cpBody( space:cpSpace, body:cpBody )
Function cpSpaceAddConstraint:cpConstraint( space:cpSpace, constraint:cpConstraint )
Function cpSpaceRemoveShape:Void( space:cpSpace, shape:cpShape )
Function cpSpaceRemoveBody:Void( space:cpSpace, body:cpBody )
Function cpSpaceRemoveConstraint:Void( space:cpSpace, constraint:cpConstraint )
Function cpSpaceContainsShape:cpBool( space:cpSpace, shape:cpShape )
Function cpSpaceContainsBody:cpBool( space:cpSpace, body:cpBody )
Function cpSpaceContainsConstraint:cpBool( space:cpSpace, constraint:cpConstraint )
Function cpSpaceAddPostStepCallback:cpBool( space:cpSpace, func:cpPostStepFunc, key:Void Ptr, data:Void Ptr )
Function cpSpacePointQuery:Void( space:cpSpace, point:cpVect, maxDistance:cpFloat, filter:cpShapeFilter, func:cpSpacePointQueryFunc, data:Void Ptr )
Function cpSpacePointQueryNearest:cpShape( space:cpSpace, point:cpVect, maxDistance:cpFloat, filter:cpShapeFilter, out:cpPointQueryInfo Ptr )
Function cpSpaceSegmentQuery:Void( space:cpSpace, start:cpVect, end_:cpVect, radius:cpFloat, filter:cpShapeFilter, func:cpSpaceSegmentQueryFunc, data:Void Ptr )
Function cpSpaceSegmentQueryFirst:cpShape( space:cpSpace, start:cpVect, end_:cpVect, radius:cpFloat, filter:cpShapeFilter, out:cpSegmentQueryInfo Ptr )
Function cpSpaceBBQuery:Void( space:cpSpace, bb:cpBB, filter:cpShapeFilter, func:cpSpaceBBQueryFunc, data:Void Ptr )
Function cpSpaceShapeQuery:cpBool( space:cpSpace, shape:cpShape, func:cpSpaceShapeQueryFunc, data:Void Ptr )
Function cpSpaceEachBody:Void( space:cpSpace, func:cpSpaceBodyIteratorFunc, data:Void Ptr )
Function cpSpaceEachShape:Void( space:cpSpace, func:cpSpaceShapeIteratorFunc, data:Void Ptr )
Function cpSpaceEachConstraint:Void( space:cpSpace, func:cpSpaceConstraintIteratorFunc, data:Void Ptr )
Function cpSpaceReindexStatic:Void( space:cpSpace )
Function cpSpaceReindexShape:Void( space:cpSpace, shape:cpShape )
Function cpSpaceReindexShapesForBody:Void( space:cpSpace, body:cpBody )
Function cpSpaceUseSpatialHash:Void( space:cpSpace, dim:cpFloat, count:Int )
Function cpSpaceStep:Void( space:cpSpace, dt:cpFloat )
Function cpSpaceDebugDraw:Void( space:cpSpace, options:cpSpaceDebugDrawOptions )="bb_cpSpaceDebugDraw"

Class cpSpace Extends Void

	Property Iterations:Int() Extension="cpSpaceGetIterations"
	Setter( iterations:Int ) Extension="cpSpaceSetIterations"
	
	Property Gravity:cpVect() Extension="cpSpaceGetGravity"
	Setter( gravity:cpVect ) Extension="cpSpaceSetGravity"
	
	Property Damping:cpFloat() Extension="cpSpaceGetDamping"
	Setter( damping:cpFloat ) Extension="cpSpaceSetDamping"

	Property IdleSpeedThreshold:cpFloat() Extension="cpSpaceGetIdleSpeedThreshold"
	Setter( idleSpeedThreshold:cpFloat ) Extension="cpSpaceSetIdleSpeedThreshold"
	
	Property SleepTimeThreshold:cpFloat() Extension="cpSpaceGetSleepTimeThreshold"
	Setter( sleepTimeThreshold:cpFloat ) Extension="cpSpaceSetSleepTimeThreshold"
	
	Property CollisionSlop:cpFloat() Extension="cpSpaceGetCollisionSlop"
	Setter( collisionSlop:cpFloat ) Extension="cpSpaceSetCollisionSlop"
	
	Property CollisionBias:cpFloat() Extension="cpSpaceGetCollisionBias"
	Setter( collisionBias:cpFloat ) Extension="cpSpaceSetCollisionBias"
	
	Property CollisionPersistence:cpTimestamp() Extension="cpSpaceGetCollisionPersistence"
	Setter( collisionPersistence:cpTimestamp ) Extension="cpSpaceSetCollisionPersistence"
	
	Property UserData:cpDataPointer() Extension="cpSpaceGetUserData"
	Setter( userData:cpDataPointer ) Extension="cpSpaceSetUserData"
		
	Property StaticBody:cpBody() Extension="cpSpaceGetStaticBody"
	
	Property CurrentTimeStep:cpFloat() Extension="cpSpaceGetCurrentTimeStep"
	
	property IsLocked:cpBool() Extension="cpSpaceIsLocked"
	
	Method StepTime( dt:cpFloat ) Extension="cpSpaceStep"
	
	Method AddShape:cpShape( shape:cpShape ) Extension="cpSpaceAddShape"
	
	Method AddBody:cpBody( body:cpBody ) Extension="cpSpaceAddBody"

	Method AddConstraint:cpConstraint( constraint:cpConstraint ) Extension="cpSpaceAddConstraint"
	
	Method RemoveShape( shape:cpShape ) Extension="cpSpaceRemoveShape"
	
	Method RemoveBody( body:cpBody ) Extension="cpSpaceRemoveBody"

	Method RemoveConstraint( constraint:cpConstraint ) Extension="cpSpaceRemoveConstraint"

	Method AddDefaultCollisionHandler:cpCollisionHandler() Extension="bb_cpSpaceAddDefaultCollisionHandler"
	
	Method DebugDraw( options:cpSpaceDebugDrawOptions ) Extension="bb_cpSpaceDebugDraw"
End
