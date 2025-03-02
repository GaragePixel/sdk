
#ifndef MX2_SDK_API_2PHYSICS_2BOX2D_2BOX2D_H
#define MX2_SDK_API_2PHYSICS_2BOX2D_2BOX2D_H

#include <bbmonkey.h>
#include "sdk/api/physics/box2d/Box2D/Box2D_mx2.h"

BB_STRUCT(t_stdlib_math_types_Vec2_1d)
BB_STRUCT(t_stdlib_math_types_Vec2_1f)

BB_CLASS(t_sdk_api_box2d_SimpleAABBQueryCallback)
BB_CLASS(t_sdk_api_box2d_ClosestRayCallBack)

void g_sdk_api_box2d_b2AABB_Sort(b2AABB *l_self);
void g_sdk_api_box2d_b2ChainShape_CreateLoop(b2ChainShape* l_self,bbArray<b2Vec2> l_vertices);
void g_sdk_api_box2d_b2ChainShape_CreateChain(b2ChainShape* l_self,bbArray<b2Vec2> l_vertices);
void g_sdk_api_box2d_b2PolygonShape_Set(b2PolygonShape* l_self,bbArray<b2Vec2> l_points);
b2Fixture* g_sdk_api_box2d_b2Body_CreateFixture(b2Body* l_self,b2FixtureDef l_fdef);
b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2WheelJointDef l_def);
b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2WeldJointDef l_def);
b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2RopeJointDef l_def);
b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2RevoluteJointDef l_def);
b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2PulleyJointDef l_def);
b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2PrismaticJointDef l_def);
b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2MouseJointDef l_def);
b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2MotorJointDef l_def);
b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2GearJointDef l_def);
b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2FrictionJointDef l_def);
b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2DistanceJointDef l_def);
b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2JointDef l_def);
b2Body* g_sdk_api_box2d_b2World_CreateBody(b2World* l_self,b2BodyDef l_d);
bbString g_sdk_api_box2d_b2Vec2_to_s(b2Vec2 *l_self);
t_stdlib_math_types_Vec2_1d g_sdk_api_box2d_b2Vec2_to_Tt_stdlib_math_types_Vec2_1d_2(b2Vec2 *l_self);
t_stdlib_math_types_Vec2_1f g_sdk_api_box2d_b2Vec2_to_Tt_stdlib_math_types_Vec2_1f_2(b2Vec2 *l_self);
bbDouble g_sdk_api_box2d_b2Vec2_Dot(b2Vec2 *l_self,b2Vec2 l_v);
bbDouble g_sdk_api_box2d_b2Vec2_Distance(b2Vec2 *l_self,b2Vec2 l_v);
b2Vec2 g_sdk_api_box2d_b2Vec2_Blend(b2Vec2 *l_self,b2Vec2 l_v,bbDouble l_alpha);
b2Vec2 g_sdk_api_box2d_b2Vec2__div(b2Vec2 *l_self,bbDouble l_s);
b2Vec2 g_sdk_api_box2d_b2Vec2__div(b2Vec2 *l_self,b2Vec2 l_v);
b2Vec2 g_sdk_api_box2d_b2Vec2__sub(b2Vec2 *l_self,bbDouble l_s);
b2Vec2 g_sdk_api_box2d_b2Vec2__sub(b2Vec2 *l_self,b2Vec2 l_v);
b2Vec2 g_sdk_api_box2d_b2Vec2__sub(b2Vec2 *l_self);
b2Vec2 g_sdk_api_box2d_b2Vec2__add(b2Vec2 *l_self,bbDouble l_s);
b2Vec2 g_sdk_api_box2d_b2Vec2__add(b2Vec2 *l_self,b2Vec2 l_v);
b2Vec2 g_sdk_api_box2d_b2Vec2__mul(b2Vec2 *l_self,bbDouble l_s);
b2Vec2 g_sdk_api_box2d_b2Vec2__mul(b2Vec2 *l_self,b2Vec2 l_v);
bbString g_sdk_api_box2d_b2RotToS(b2Rot l_r);
bbString g_sdk_api_box2d_b2TransformToS(b2Transform l_t);
bbString g_sdk_api_box2d_b2Vec2ToS(b2Vec2 l_v);
t_stdlib_math_types_Vec2_1f g_sdk_api_box2d_b2Vec2ToVec2f(b2Vec2 l_v);

struct t_sdk_api_box2d_SimpleAABBQueryCallback : public b2QueryCallback{
  typedef t_sdk_api_box2d_SimpleAABBQueryCallback *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_sdk_api_box2d_SimpleAABBQueryCallback";}

  b2Vec2 m_q_0point{};
  b2Fixture* m_q_0fixture{};

  t_sdk_api_box2d_SimpleAABBQueryCallback(b2Vec2 l_point);
  ~t_sdk_api_box2d_SimpleAABBQueryCallback();

  bbBool ReportFixture(b2Fixture* l_fixture);

  t_sdk_api_box2d_SimpleAABBQueryCallback(){
  }
};

struct t_sdk_api_box2d_ClosestRayCallBack : public b2RayCastCallback{
  typedef t_sdk_api_box2d_ClosestRayCallBack *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_sdk_api_box2d_ClosestRayCallBack";}

  b2Fixture* m_q_0fixture{};
  b2Vec2 m_q_0point{};
  b2Vec2 m_q_0normal{};
  bbFloat m_q_0fraction{};

  ~t_sdk_api_box2d_ClosestRayCallBack();

  bbFloat ReportFixture(b2Fixture* l_fixture,b2Vec2 l_point,b2Vec2 l_normal,bbFloat l_fraction);

  t_sdk_api_box2d_ClosestRayCallBack(){
  }
};

#endif
