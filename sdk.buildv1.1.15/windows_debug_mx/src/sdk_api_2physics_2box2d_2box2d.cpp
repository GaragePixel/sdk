
#include "sdk/sdk.buildv1.1.15/windows_debug_mx/include/sdk_api_2physics_2box2d_2box2d.h"

#include "monkey/monkey.buildv1.1.15/windows_debug_mx/include/monkey_types.h"
#include "stdlib/stdlib.buildv1.1.15/windows_debug_mx/include/stdlib_math_2algebraic_2vectorials_2types_2vec2.h"

void g_sdk_api_box2d_b2AABB_Sort(b2AABB *l_self){
  bbDBFrame db_f{"Sort:Void()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2AABB*self=&(*l_self);
  bbDBLocal("Self",self);
  bbDBStmt(7860226);
  if(((*l_self).upperBound.x<(*l_self).lowerBound.x)){
    bbDBBlock db_blk;
    bbDBStmt(7864329);
    bbFloat l_swap=(*l_self).upperBound.x;
    bbDBLocal("swap",&l_swap);
    bbDBStmt(7868419);
    (*l_self).upperBound.x=(*l_self).lowerBound.x;
    bbDBStmt(7872515);
    (*l_self).lowerBound.x=l_swap;
  }
  bbDBStmt(7880706);
  if(((*l_self).upperBound.y<(*l_self).lowerBound.y)){
    bbDBBlock db_blk;
    bbDBStmt(7884809);
    bbFloat l_swap=(*l_self).upperBound.y;
    bbDBLocal("swap",&l_swap);
    bbDBStmt(7888899);
    (*l_self).upperBound.y=(*l_self).lowerBound.y;
    bbDBStmt(7892995);
    (*l_self).lowerBound.y=l_swap;
  }
}

void g_sdk_api_box2d_b2ChainShape_CreateLoop(b2ChainShape* l_self,bbArray<b2Vec2> l_vertices){
  bbDBFrame db_f{"CreateLoop:Void(vertices:sdk.api.box2d.b2Vec2[])","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2ChainShape*self=l_self;
  bbDBLocal("Self",&self);
  bbDBLocal("vertices",&l_vertices);
  bbDBStmt(7798786);
  l_self->CreateLoop(l_vertices.data(),l_vertices.length());
}

void g_sdk_api_box2d_b2ChainShape_CreateChain(b2ChainShape* l_self,bbArray<b2Vec2> l_vertices){
  bbDBFrame db_f{"CreateChain:Void(vertices:sdk.api.box2d.b2Vec2[])","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2ChainShape*self=l_self;
  bbDBLocal("Self",&self);
  bbDBLocal("vertices",&l_vertices);
  bbDBStmt(7811074);
  l_self->CreateChain(l_vertices.data(),l_vertices.length());
}

void g_sdk_api_box2d_b2PolygonShape_Set(b2PolygonShape* l_self,bbArray<b2Vec2> l_points){
  bbDBFrame db_f{"Set:Void(points:sdk.api.box2d.b2Vec2[])","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2PolygonShape*self=l_self;
  bbDBLocal("Self",&self);
  bbDBLocal("points",&l_points);
  bbDBStmt(7774210);
  l_self->Set(l_points.data(),l_points.length());
}

b2Fixture* g_sdk_api_box2d_b2Body_CreateFixture(b2Body* l_self,b2FixtureDef l_fdef){
  bbDBFrame db_f{"CreateFixture:sdk.api.box2d.b2Fixture(fdef:sdk.api.box2d.b2FixtureDef)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2Body*self=l_self;
  bbDBLocal("Self",&self);
  bbDBLocal("fdef",&l_fdef);
  bbDBStmt(7749634);
  return l_self->CreateFixture((&l_fdef));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2WheelJointDef l_def){
  bbDBFrame db_f{"CreateJoint:sdk.api.box2d.b2Joint(def:sdk.api.box2d.b2WheelJointDef)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2World*self=l_self;
  bbDBLocal("Self",&self);
  bbDBLocal("def",&l_def);
  bbDBStmt(7725058);
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2WeldJointDef l_def){
  bbDBFrame db_f{"CreateJoint:sdk.api.box2d.b2Joint(def:sdk.api.box2d.b2WeldJointDef)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2World*self=l_self;
  bbDBLocal("Self",&self);
  bbDBLocal("def",&l_def);
  bbDBStmt(7712770);
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2RopeJointDef l_def){
  bbDBFrame db_f{"CreateJoint:sdk.api.box2d.b2Joint(def:sdk.api.box2d.b2RopeJointDef)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2World*self=l_self;
  bbDBLocal("Self",&self);
  bbDBLocal("def",&l_def);
  bbDBStmt(7700482);
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2RevoluteJointDef l_def){
  bbDBFrame db_f{"CreateJoint:sdk.api.box2d.b2Joint(def:sdk.api.box2d.b2RevoluteJointDef)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2World*self=l_self;
  bbDBLocal("Self",&self);
  bbDBLocal("def",&l_def);
  bbDBStmt(7688194);
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2PulleyJointDef l_def){
  bbDBFrame db_f{"CreateJoint:sdk.api.box2d.b2Joint(def:sdk.api.box2d.b2PulleyJointDef)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2World*self=l_self;
  bbDBLocal("Self",&self);
  bbDBLocal("def",&l_def);
  bbDBStmt(7675906);
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2PrismaticJointDef l_def){
  bbDBFrame db_f{"CreateJoint:sdk.api.box2d.b2Joint(def:sdk.api.box2d.b2PrismaticJointDef)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2World*self=l_self;
  bbDBLocal("Self",&self);
  bbDBLocal("def",&l_def);
  bbDBStmt(7663618);
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2MouseJointDef l_def){
  bbDBFrame db_f{"CreateJoint:sdk.api.box2d.b2Joint(def:sdk.api.box2d.b2MouseJointDef)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2World*self=l_self;
  bbDBLocal("Self",&self);
  bbDBLocal("def",&l_def);
  bbDBStmt(7651330);
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2MotorJointDef l_def){
  bbDBFrame db_f{"CreateJoint:sdk.api.box2d.b2Joint(def:sdk.api.box2d.b2MotorJointDef)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2World*self=l_self;
  bbDBLocal("Self",&self);
  bbDBLocal("def",&l_def);
  bbDBStmt(7639042);
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2GearJointDef l_def){
  bbDBFrame db_f{"CreateJoint:sdk.api.box2d.b2Joint(def:sdk.api.box2d.b2GearJointDef)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2World*self=l_self;
  bbDBLocal("Self",&self);
  bbDBLocal("def",&l_def);
  bbDBStmt(7626754);
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2FrictionJointDef l_def){
  bbDBFrame db_f{"CreateJoint:sdk.api.box2d.b2Joint(def:sdk.api.box2d.b2FrictionJointDef)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2World*self=l_self;
  bbDBLocal("Self",&self);
  bbDBLocal("def",&l_def);
  bbDBStmt(7614466);
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2DistanceJointDef l_def){
  bbDBFrame db_f{"CreateJoint:sdk.api.box2d.b2Joint(def:sdk.api.box2d.b2DistanceJointDef)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2World*self=l_self;
  bbDBLocal("Self",&self);
  bbDBLocal("def",&l_def);
  bbDBStmt(7602178);
  return l_self->CreateJoint((&l_def));
}

b2Joint* g_sdk_api_box2d_b2World_CreateJoint(b2World* l_self,b2JointDef l_def){
  bbDBFrame db_f{"CreateJoint:sdk.api.box2d.b2Joint(def:sdk.api.box2d.b2JointDef)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2World*self=l_self;
  bbDBLocal("Self",&self);
  bbDBLocal("def",&l_def);
  bbDBStmt(7589890);
  return l_self->CreateJoint((&l_def));
}

b2Body* g_sdk_api_box2d_b2World_CreateBody(b2World* l_self,b2BodyDef l_d){
  bbDBFrame db_f{"CreateBody:sdk.api.box2d.b2Body(d:sdk.api.box2d.b2BodyDef)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2World*self=l_self;
  bbDBLocal("Self",&self);
  bbDBLocal("d",&l_d);
  bbDBStmt(7577602);
  return l_self->CreateBody((&l_d));
}

bbString g_sdk_api_box2d_b2Vec2_to_s(b2Vec2 *l_self){
  bbDBFrame db_f{"to:monkey.types.String()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2Vec2*self=&(*l_self);
  bbDBLocal("Self",self);
  bbDBStmt(7315458);
  return ((((bbString(L"b2Vec2(",7)+bbString((*l_self).x))+bbString(L";",1))+bbString((*l_self).y))+bbString(L")",1));
}

t_stdlib_math_types_Vec2_1d g_sdk_api_box2d_b2Vec2_to_Tt_stdlib_math_types_Vec2_1d_2(b2Vec2 *l_self){
  bbDBFrame db_f{"to:stdlib.math.types.Vec2<monkey.types.Double>()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2Vec2*self=&(*l_self);
  bbDBLocal("Self",self);
  bbDBStmt(7303170);
  return t_stdlib_math_types_Vec2_1d{bbDouble((*l_self).x),bbDouble((*l_self).y)};
}

t_stdlib_math_types_Vec2_1f g_sdk_api_box2d_b2Vec2_to_Tt_stdlib_math_types_Vec2_1f_2(b2Vec2 *l_self){
  bbDBFrame db_f{"to:stdlib.math.types.Vec2f()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2Vec2*self=&(*l_self);
  bbDBLocal("Self",self);
  bbDBStmt(7290882);
  return t_stdlib_math_types_Vec2_1f{(*l_self).x,(*l_self).y};
}

bbDouble g_sdk_api_box2d_b2Vec2_Dot(b2Vec2 *l_self,b2Vec2 l_v){
  bbDBFrame db_f{"Dot:monkey.types.Double(v:sdk.api.box2d.b2Vec2)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2Vec2*self=&(*l_self);
  bbDBLocal("Self",self);
  bbDBLocal("v",&l_v);
  bbDBStmt(7507970);
  return bbDouble((((*l_self).x*l_v.x)+((*l_self).y*l_v.y)));
}

bbDouble g_sdk_api_box2d_b2Vec2_Distance(b2Vec2 *l_self,b2Vec2 l_v){
  bbDBFrame db_f{"Distance:monkey.types.Double(v:sdk.api.box2d.b2Vec2)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2Vec2*self=&(*l_self);
  bbDBLocal("Self",self);
  bbDBLocal("v",&l_v);
  bbDBStmt(7491586);
  return bbDouble(g_sdk_api_box2d_b2Vec2__sub(&l_v,(*l_self)).Length());
}

b2Vec2 g_sdk_api_box2d_b2Vec2_Blend(b2Vec2 *l_self,b2Vec2 l_v,bbDouble l_alpha){
  bbDBFrame db_f{"Blend:sdk.api.box2d.b2Vec2(v:sdk.api.box2d.b2Vec2,alpha:monkey.types.Double)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2Vec2*self=&(*l_self);
  bbDBLocal("Self",self);
  bbDBLocal("v",&l_v);
  bbDBLocal("alpha",&l_alpha);
  bbDBStmt(7524354);
  return b2Vec2{bbFloat(((bbDouble((l_v.x-(*l_self).x))*l_alpha)+bbDouble((*l_self).x))),bbFloat(((bbDouble((l_v.y-(*l_self).y))*l_alpha)+bbDouble((*l_self).y)))};
}

b2Vec2 g_sdk_api_box2d_b2Vec2__div(b2Vec2 *l_self,bbDouble l_s){
  bbDBFrame db_f{"/:sdk.api.box2d.b2Vec2(s:monkey.types.Double)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2Vec2*self=&(*l_self);
  bbDBLocal("Self",self);
  bbDBLocal("s",&l_s);
  bbDBStmt(7442434);
  return b2Vec2{bbFloat((bbDouble((*l_self).x)/l_s)),bbFloat((bbDouble((*l_self).y)/l_s))};
}

b2Vec2 g_sdk_api_box2d_b2Vec2__div(b2Vec2 *l_self,b2Vec2 l_v){
  bbDBFrame db_f{"/:sdk.api.box2d.b2Vec2(v:sdk.api.box2d.b2Vec2)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2Vec2*self=&(*l_self);
  bbDBLocal("Self",self);
  bbDBLocal("v",&l_v);
  bbDBStmt(7368706);
  return b2Vec2{((*l_self).x/l_v.x),((*l_self).y/l_v.y)};
}

b2Vec2 g_sdk_api_box2d_b2Vec2__sub(b2Vec2 *l_self,bbDouble l_s){
  bbDBFrame db_f{"-:sdk.api.box2d.b2Vec2(s:monkey.types.Double)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2Vec2*self=&(*l_self);
  bbDBLocal("Self",self);
  bbDBLocal("s",&l_s);
  bbDBStmt(7475202);
  return b2Vec2{bbFloat((bbDouble((*l_self).x)-l_s)),bbFloat((bbDouble((*l_self).y)-l_s))};
}

b2Vec2 g_sdk_api_box2d_b2Vec2__sub(b2Vec2 *l_self,b2Vec2 l_v){
  bbDBFrame db_f{"-:sdk.api.box2d.b2Vec2(v:sdk.api.box2d.b2Vec2)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2Vec2*self=&(*l_self);
  bbDBLocal("Self",self);
  bbDBLocal("v",&l_v);
  bbDBStmt(7409666);
  return b2Vec2{((*l_self).x-l_v.x),((*l_self).y-l_v.y)};
}

b2Vec2 g_sdk_api_box2d_b2Vec2__sub(b2Vec2 *l_self){
  bbDBFrame db_f{"-:sdk.api.box2d.b2Vec2()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2Vec2*self=&(*l_self);
  bbDBLocal("Self",self);
  bbDBStmt(7331842);
  return b2Vec2{-(*l_self).x,-(*l_self).y};
}

b2Vec2 g_sdk_api_box2d_b2Vec2__add(b2Vec2 *l_self,bbDouble l_s){
  bbDBFrame db_f{"+:sdk.api.box2d.b2Vec2(s:monkey.types.Double)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2Vec2*self=&(*l_self);
  bbDBLocal("Self",self);
  bbDBLocal("s",&l_s);
  bbDBStmt(7458818);
  return b2Vec2{bbFloat((bbDouble((*l_self).x)+l_s)),bbFloat((bbDouble((*l_self).y)+l_s))};
}

b2Vec2 g_sdk_api_box2d_b2Vec2__add(b2Vec2 *l_self,b2Vec2 l_v){
  bbDBFrame db_f{"+:sdk.api.box2d.b2Vec2(v:sdk.api.box2d.b2Vec2)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2Vec2*self=&(*l_self);
  bbDBLocal("Self",self);
  bbDBLocal("v",&l_v);
  bbDBStmt(7389186);
  return b2Vec2{((*l_self).x+l_v.x),((*l_self).y+l_v.y)};
}

b2Vec2 g_sdk_api_box2d_b2Vec2__mul(b2Vec2 *l_self,bbDouble l_s){
  bbDBFrame db_f{"*:sdk.api.box2d.b2Vec2(s:monkey.types.Double)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2Vec2*self=&(*l_self);
  bbDBLocal("Self",self);
  bbDBLocal("s",&l_s);
  bbDBStmt(7426050);
  return b2Vec2{bbFloat((bbDouble((*l_self).x)*l_s)),bbFloat((bbDouble((*l_self).y)*l_s))};
}

b2Vec2 g_sdk_api_box2d_b2Vec2__mul(b2Vec2 *l_self,b2Vec2 l_v){
  bbDBFrame db_f{"*:sdk.api.box2d.b2Vec2(v:sdk.api.box2d.b2Vec2)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  b2Vec2*self=&(*l_self);
  bbDBLocal("Self",self);
  bbDBLocal("v",&l_v);
  bbDBStmt(7352322);
  return b2Vec2{((*l_self).x*l_v.x),((*l_self).y*l_v.y)};
}

bbString g_sdk_api_box2d_b2RotToS(b2Rot l_r){
  bbDBFrame db_f{"b2RotToS:monkey.types.String(r:sdk.api.box2d.b2Rot)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  bbDBLocal("r",&l_r);
  bbDBStmt(7204871);
  bbString l_s=(bbString(L"s:",2)+bbString(l_r.s));
  bbDBLocal("s",&l_s);
  bbDBStmt(7208961);
  return l_s;
}

bbString g_sdk_api_box2d_b2TransformToS(b2Transform l_t){
  bbDBFrame db_f{"b2TransformToS:monkey.types.String(t:sdk.api.box2d.b2Transform)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  bbDBLocal("t",&l_t);
  bbDBStmt(7184391);
  bbString l_s=(((bbString(L"Trans: ",7)+g_sdk_api_box2d_b2Vec2ToS(l_t.p))+bbString(L"  Rot: ",7))+g_sdk_api_box2d_b2RotToS(l_t.q));
  bbDBLocal("s",&l_s);
  bbDBStmt(7188481);
  return l_s;
}

bbString g_sdk_api_box2d_b2Vec2ToS(b2Vec2 l_v){
  bbDBFrame db_f{"b2Vec2ToS:monkey.types.String(v:sdk.api.box2d.b2Vec2)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  bbDBLocal("v",&l_v);
  bbDBStmt(7163911);
  bbString l_s=((((bbString(L"(",1)+bbString(l_v.x))+bbString(L";",1))+bbString(l_v.y))+bbString(L")",1));
  bbDBLocal("s",&l_s);
  bbDBStmt(7168001);
  return l_s;
}

t_stdlib_math_types_Vec2_1f g_sdk_api_box2d_b2Vec2ToVec2f(b2Vec2 l_v){
  bbDBFrame db_f{"b2Vec2ToVec2f:stdlib.math.types.Vec2f(v:sdk.api.box2d.b2Vec2)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  bbDBLocal("v",&l_v);
  bbDBStmt(7143431);
  t_stdlib_math_types_Vec2_1f l_vf=t_stdlib_math_types_Vec2_1f{l_v.x,l_v.y};
  bbDBLocal("vf",&l_vf);
  bbDBStmt(7147521);
  return l_vf;
}

void t_sdk_api_box2d_SimpleAABBQueryCallback::dbEmit(){
  puts( "[sdk.api.box2d.SimpleAABBQueryCallback]");
  bbDBEmit("q_point",&m_q_0point);
  bbDBEmit("q_fixture",&m_q_0fixture);
}

t_sdk_api_box2d_SimpleAABBQueryCallback::t_sdk_api_box2d_SimpleAABBQueryCallback(b2Vec2 l_point){
  bbDBFrame db_f{"new:Void(point:sdk.api.box2d.b2Vec2)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  t_sdk_api_box2d_SimpleAABBQueryCallback*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("point",&l_point);
  bbDBStmt(7929858);
  this->m_q_0point=l_point;
  bbDBStmt(7933954);
  this->m_q_0fixture=((b2Fixture*)0);
}
t_sdk_api_box2d_SimpleAABBQueryCallback::~t_sdk_api_box2d_SimpleAABBQueryCallback(){
}

bbBool t_sdk_api_box2d_SimpleAABBQueryCallback::ReportFixture(b2Fixture* l_fixture){
  bbDBFrame db_f{"ReportFixture:monkey.types.Bool(fixture:sdk.api.box2d.b2Fixture)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  t_sdk_api_box2d_SimpleAABBQueryCallback*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("fixture",&l_fixture);
  bbDBStmt(7946248);
  b2Body* l_body=l_fixture->GetBody();
  bbDBLocal("body",&l_body);
  bbDBStmt(7950338);
  if((l_body->GetType()==b2_dynamicBody)){
    bbDBBlock db_blk;
    bbDBStmt(7954441);
    bbBool l_inside=l_fixture->TestPoint(this->m_q_0point);
    bbDBLocal("inside",&l_inside);
    bbDBStmt(7958531);
    if(l_inside){
      bbDBBlock db_blk;
      bbDBStmt(7962628);
      this->m_q_0fixture=l_fixture;
      bbDBStmt(7966724);
      return false;
    }
  }
  bbDBStmt(7983106);
  return true;
}
bbString bbDBType(t_sdk_api_box2d_SimpleAABBQueryCallback**){
  return "sdk.api.box2d.SimpleAABBQueryCallback";
}
bbString bbDBValue(t_sdk_api_box2d_SimpleAABBQueryCallback**p){
  return bbDBValue(*p);
}

void t_sdk_api_box2d_ClosestRayCallBack::dbEmit(){
  puts( "[sdk.api.box2d.ClosestRayCallBack]");
  bbDBEmit("q_fixture",&m_q_0fixture);
  bbDBEmit("q_point",&m_q_0point);
  bbDBEmit("q_normal",&m_q_0normal);
  bbDBEmit("q_fraction",&m_q_0fraction);
}
t_sdk_api_box2d_ClosestRayCallBack::~t_sdk_api_box2d_ClosestRayCallBack(){
}

bbFloat t_sdk_api_box2d_ClosestRayCallBack::ReportFixture(b2Fixture* l_fixture,b2Vec2 l_point,b2Vec2 l_normal,bbFloat l_fraction){
  bbDBFrame db_f{"ReportFixture:monkey.types.Float(fixture:sdk.api.box2d.b2Fixture,point:sdk.api.box2d.b2Vec2,normal:sdk.api.box2d.b2Vec2,fraction:monkey.types.Float)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/physics/box2d/box2d.monkey2"};
  t_sdk_api_box2d_ClosestRayCallBack*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("fixture",&l_fixture);
  bbDBLocal("point",&l_point);
  bbDBLocal("normal",&l_normal);
  bbDBLocal("fraction",&l_fraction);
  bbDBStmt(8032258);
  this->m_q_0fixture=l_fixture;
  bbDBStmt(8036354);
  this->m_q_0point=l_point;
  bbDBStmt(8040450);
  this->m_q_0fraction=l_fraction;
  bbDBStmt(8044546);
  this->m_q_0normal=l_normal;
  bbDBStmt(8048642);
  return l_fraction;
}
bbString bbDBType(t_sdk_api_box2d_ClosestRayCallBack**){
  return "sdk.api.box2d.ClosestRayCallBack";
}
bbString bbDBValue(t_sdk_api_box2d_ClosestRayCallBack**p){
  return bbDBValue(*p);
}

void mx2_sdk_api_2physics_2box2d_2box2d_init_f(){
}
