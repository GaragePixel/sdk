
#include "sdk/sdk.buildv1.1.15/windows_release_mx/include/sdk_api_2physics_2box2d_2box2d.h"

#include "monkey/monkey.buildv1.1.15/windows_release_mx/include/monkey_types.h"
#include "stdlib/stdlib.buildv1.1.15/windows_release_mx/include/stdlib_math_2algebraic_2vectorials_2types_2vec2.h"

void g_sdk_api_box2d_b2AABB_Sort(b2AABB *l_self){
  if(((*l_self).upperBound.x<(*l_self).lowerBound.x)){
    bbFloat l_swap=(*l_self).upperBound.x;
    (*l_self).upperBound.x=(*l_self).lowerBound.x;
    (*l_self).lowerBound.x=l_swap;
  }
  if(((*l_self).upperBound.y<(*l_self).lowerBound.y)){
    bbFloat l_swap=(*l_self).upperBound.y;
    (*l_self).upperBound.y=(*l_self).lowerBound.y;
    (*l_self).lowerBound.y=l_swap;
  }
}

void g_sdk_api_box2d_b2ChainShape_CreateLoop(b2ChainShape* l_self,bbArray<b2Vec2> l_vertices){
  l_self->CreateLoop(l_vertices.data(),l_vertices.length());
}

void g_sdk_api_box2d_b2ChainShape_CreateChain(b2ChainShape* l_self,bbArray<b2Vec2> l_vertices){
  l_self->CreateChain(l_vertices.data(),l_vertices.length());
}

void g_sdk_api_box2d_b2PolygonShape_Set(b2PolygonShape* l_self,bbArray<b2Vec2> l_points){
  l_self->Set(l_points.data(),l_points.length());
}

b2Fixture* g_sdk_api_box2d_b2Body_CreateFixture(b2Body* l_self,b2FixtureDef l_fdef){
  return l_self->CreateFixture((&l_fdef));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2WheelJointDef l_def){
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2WeldJointDef l_def){
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2RopeJointDef l_def){
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2RevoluteJointDef l_def){
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2PulleyJointDef l_def){
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2PrismaticJointDef l_def){
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2MouseJointDef l_def){
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2MotorJointDef l_def){
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2GearJointDef l_def){
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2FrictionJointDef l_def){
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2DistanceJointDef l_def){
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2JointDef l_def){
  return l_self->CreateJoint((&l_def));
}

b2Body* g_sdk_api_box2d_b2World_CreateBody(b2World* l_self,b2BodyDef l_d){
  return l_self->CreateBody((&l_d));
}

bbString g_sdk_api_box2d_b2Vec2_to_s(b2Vec2 *l_self){
  return ((((bbString(L"b2Vec2(",7)+bbString((*l_self).x))+bbString(L";",1))+bbString((*l_self).y))+bbString(L")",1));
}

t_stdlib_math_types_Vec2_1d g_sdk_api_box2d_b2Vec2_to_Tt_stdlib_math_types_Vec2_1d_2(b2Vec2 *l_self){
  return t_stdlib_math_types_Vec2_1d{bbDouble((*l_self).x),bbDouble((*l_self).y)};
}

t_stdlib_math_types_Vec2_1f g_sdk_api_box2d_b2Vec2_to_Tt_stdlib_math_types_Vec2_1f_2(b2Vec2 *l_self){
  return t_stdlib_math_types_Vec2_1f{(*l_self).x,(*l_self).y};
}

bbDouble g_sdk_api_box2d_b2Vec2_Dot(b2Vec2 *l_self,b2Vec2 l_v){
  return bbDouble((((*l_self).x*l_v.x)+((*l_self).y*l_v.y)));
}

bbDouble g_sdk_api_box2d_b2Vec2_Distance(b2Vec2 *l_self,b2Vec2 l_v){
  return bbDouble(g_sdk_api_box2d_b2Vec2__sub(&l_v,(*l_self)).Length());
}

b2Vec2 g_sdk_api_box2d_b2Vec2_Blend(b2Vec2 *l_self,b2Vec2 l_v,bbDouble l_alpha){
  return b2Vec2{bbFloat(((bbDouble((l_v.x-(*l_self).x))*l_alpha)+bbDouble((*l_self).x))),bbFloat(((bbDouble((l_v.y-(*l_self).y))*l_alpha)+bbDouble((*l_self).y)))};
}

b2Vec2 g_sdk_api_box2d_b2Vec2__div(b2Vec2 *l_self,bbDouble l_s){
  return b2Vec2{bbFloat((bbDouble((*l_self).x)/l_s)),bbFloat((bbDouble((*l_self).y)/l_s))};
}

b2Vec2 g_sdk_api_box2d_b2Vec2__div(b2Vec2 *l_self,b2Vec2 l_v){
  return b2Vec2{((*l_self).x/l_v.x),((*l_self).y/l_v.y)};
}

b2Vec2 g_sdk_api_box2d_b2Vec2__sub(b2Vec2 *l_self,bbDouble l_s){
  return b2Vec2{bbFloat((bbDouble((*l_self).x)-l_s)),bbFloat((bbDouble((*l_self).y)-l_s))};
}

b2Vec2 g_sdk_api_box2d_b2Vec2__sub(b2Vec2 *l_self,b2Vec2 l_v){
  return b2Vec2{((*l_self).x-l_v.x),((*l_self).y-l_v.y)};
}

b2Vec2 g_sdk_api_box2d_b2Vec2__sub(b2Vec2 *l_self){
  return b2Vec2{-(*l_self).x,-(*l_self).y};
}

b2Vec2 g_sdk_api_box2d_b2Vec2__add(b2Vec2 *l_self,bbDouble l_s){
  return b2Vec2{bbFloat((bbDouble((*l_self).x)+l_s)),bbFloat((bbDouble((*l_self).y)+l_s))};
}

b2Vec2 g_sdk_api_box2d_b2Vec2__add(b2Vec2 *l_self,b2Vec2 l_v){
  return b2Vec2{((*l_self).x+l_v.x),((*l_self).y+l_v.y)};
}

b2Vec2 g_sdk_api_box2d_b2Vec2__mul(b2Vec2 *l_self,bbDouble l_s){
  return b2Vec2{bbFloat((bbDouble((*l_self).x)*l_s)),bbFloat((bbDouble((*l_self).y)*l_s))};
}

b2Vec2 g_sdk_api_box2d_b2Vec2__mul(b2Vec2 *l_self,b2Vec2 l_v){
  return b2Vec2{((*l_self).x*l_v.x),((*l_self).y*l_v.y)};
}

bbString g_sdk_api_box2d_b2RotToS(b2Rot l_r){
  bbString l_s=(bbString(L"s:",2)+bbString(l_r.s));
  return l_s;
}

bbString g_sdk_api_box2d_b2TransformToS(b2Transform l_t){
  bbString l_s=(((bbString(L"Trans: ",7)+g_sdk_api_box2d_b2Vec2ToS(l_t.p))+bbString(L"  Rot: ",7))+g_sdk_api_box2d_b2RotToS(l_t.q));
  return l_s;
}

bbString g_sdk_api_box2d_b2Vec2ToS(b2Vec2 l_v){
  bbString l_s=((((bbString(L"(",1)+bbString(l_v.x))+bbString(L";",1))+bbString(l_v.y))+bbString(L")",1));
  return l_s;
}

t_stdlib_math_types_Vec2_1f g_sdk_api_box2d_b2Vec2ToVec2f(b2Vec2 l_v){
  t_stdlib_math_types_Vec2_1f l_vf=t_stdlib_math_types_Vec2_1f{l_v.x,l_v.y};
  return l_vf;
}

t_sdk_api_box2d_SimpleAABBQueryCallback::t_sdk_api_box2d_SimpleAABBQueryCallback(b2Vec2 l_point){
  this->m_q_0point=l_point;
  this->m_q_0fixture=((b2Fixture*)0);
}
t_sdk_api_box2d_SimpleAABBQueryCallback::~t_sdk_api_box2d_SimpleAABBQueryCallback(){
}

bbBool t_sdk_api_box2d_SimpleAABBQueryCallback::ReportFixture(b2Fixture* l_fixture){
  b2Body* l_body=l_fixture->GetBody();
  if((l_body->GetType()==b2_dynamicBody)){
    bbBool l_inside=l_fixture->TestPoint(this->m_q_0point);
    if(l_inside){
      this->m_q_0fixture=l_fixture;
      return false;
    }
  }
  return true;
}

t_sdk_api_box2d_ClosestRayCallBack::~t_sdk_api_box2d_ClosestRayCallBack(){
}

bbFloat t_sdk_api_box2d_ClosestRayCallBack::ReportFixture(b2Fixture* l_fixture,b2Vec2 l_point,b2Vec2 l_normal,bbFloat l_fraction){
  this->m_q_0fixture=l_fixture;
  this->m_q_0point=l_point;
  this->m_q_0fraction=l_fraction;
  this->m_q_0normal=l_normal;
  return l_fraction;
}

void mx2_sdk_api_2physics_2box2d_2box2d_init_f(){
}
