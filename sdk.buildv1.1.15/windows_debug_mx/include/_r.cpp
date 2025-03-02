
#include <bbmonkey.h>
#include <bbtypeinfo_r.h>
#include <bbdeclinfo_r.h>

#include "_r.h"

#include <assimp/cimport.h>
#include <assimp/scene.h>
#include <assimp/postprocess.h>
#include <theoraplayer.h>
#include <theoraplayer/Manager.h>
#include <theoraplayer/VideoClip.h>
#include <theoraplayer/VideoFrame.h>
#include "sdk/medias/players/theoraplayer/native/OpenAL_AudioInterface.h"
#include "sdk/medias/players/theoraplayer/native/monkey2_glue.h"
#include "sdk/api/physics/chipmunk/chipmunk_glue.h"
#include "sdk/api/physics/chipmunk/chipmunk_glue.h"
#include "sdk/api/physics/chipmunk/chipmunk_glue.h"
#include "sdk/api/physics/chipmunk/chipmunk_glue.h"
#include "sdk/api/physics/chipmunk/chipmunk_glue.h"
#include "sdk/api/physics/chipmunk/chipmunk_glue.h"
#include "sdk/api/physics/box2d/Box2D/Box2D_mx2.h"
#include "sdk/api/physics/bullet/bullet_glue.h"
#include "sdk/api/sounds/portmidi/porttime/porttime.h"
#include "sdk/api/sounds/portmidi/pm_common/portmidi.h"
#include "sdk/api/sounds/portmidi/mididriver.h"
#include <SDL_mixer.h>
#include <AL/al.h>
#include <AL/alc.h>
#include "sdk/api/graphics/opengl/native/bbopengl.h"
#include "sdk/toolkits/syntax/tinyregex/tiny-regex-c/re.h"
#include "sdk/engines/databases/sqlite/sqlite-amalgamation/sqlite3.h"
#include "sdk/engines/parsers/html/litehtml/native/litehtml_glue.h"
#include <ft2build.h>
#include "sdk/generators/html/hoedown/hoedown/src/document.h"
#include "sdk/generators/html/hoedown/hoedown/src/html.h"

#include "monkey/monkey.buildv1.1.15/windows_debug_mx/include/monkey_types.h"
#include "sdk/sdk.buildv1.1.15/windows_debug_mx/include/sdk_api_2physics_2box2d_2box2d.h"
#include "sdk/sdk.buildv1.1.15/windows_debug_mx/include/sdk_api_2protocoles_2httprequest_2httprequest.h"
#include "sdk/sdk.buildv1.1.15/windows_debug_mx/include/sdk_api_2protocoles_2httprequest_2httprequest_0desktop.h"
#include "sdk/sdk.buildv1.1.15/windows_debug_mx/include/sdk_api_2sounds_2portmidi_2nomidi.h"
#include "sdk/sdk.buildv1.1.15/windows_debug_mx/include/sdk_api_2sounds_2portmidi_2portmidi.h"
#include "sdk/sdk.buildv1.1.15/windows_debug_mx/include/sdk_stdlib_collections_2map.h"
#include "stdlib/stdlib.buildv1.1.15/windows_debug_mx/include/stdlib_collections_2stack.h"
#include "stdlib/stdlib.buildv1.1.15/windows_debug_mx/include/stdlib_math_2algebraic_2vectorials_2types_2vec2.h"
#include "stdlib/stdlib.buildv1.1.15/windows_debug_mx/include/stdlib_system_2process_2process.h"

extern bbString g_sdk_medias_assimp_AI_0CONFIG_0PP_0FD_0REMOVE;
extern bbString g_sdk_medias_assimp_AI_0CONFIG_0PP_0SBBC_0MAX_0BONES;
extern bbString g_sdk_medias_assimp_AI_0CONFIG_0PP_0SBP_0REMOVE;
extern bbString g_sdk_medias_assimp_AI_0MATKEY_0COLOR_0AMBIENT;
extern bbString g_sdk_medias_assimp_AI_0MATKEY_0COLOR_0DIFFUSE;
extern bbString g_sdk_medias_assimp_AI_0MATKEY_0COLOR_0EMISSIVE;
extern bbString g_sdk_medias_assimp_AI_0MATKEY_0COLOR_0REFLECTIVE;
extern bbString g_sdk_medias_assimp_AI_0MATKEY_0COLOR_0SPECULAR;
extern bbString g_sdk_medias_assimp_AI_0MATKEY_0COLOR_0TRANSPARENT;
extern bbString g_sdk_medias_assimp_AI_0MATKEY_0NAME;
extern bbInt g_sdk_engines_sqlite_SQLITE_0ABORT;
extern bbInt g_sdk_engines_sqlite_SQLITE_0AUTH;
extern bbInt g_sdk_engines_sqlite_SQLITE_0BUSY;
extern bbInt g_sdk_engines_sqlite_SQLITE_0CANTOPEN;
extern bbInt g_sdk_engines_sqlite_SQLITE_0CONSTRAINT;
extern bbInt g_sdk_engines_sqlite_SQLITE_0CORRUPT;
extern bbInt g_sdk_engines_sqlite_SQLITE_0DONE;
extern bbInt g_sdk_engines_sqlite_SQLITE_0EMPTY;
extern bbInt g_sdk_engines_sqlite_SQLITE_0ERROR;
extern bbInt g_sdk_engines_sqlite_SQLITE_0FORMAT;
extern bbInt g_sdk_engines_sqlite_SQLITE_0FULL;
extern bbInt g_sdk_engines_sqlite_SQLITE_0INTERNAL;
extern bbInt g_sdk_engines_sqlite_SQLITE_0INTERRUPT;
extern bbInt g_sdk_engines_sqlite_SQLITE_0IOERR;
extern bbInt g_sdk_engines_sqlite_SQLITE_0LOCKED;
extern bbInt g_sdk_engines_sqlite_SQLITE_0MISMATCH;
extern bbInt g_sdk_engines_sqlite_SQLITE_0MISUSE;
extern bbInt g_sdk_engines_sqlite_SQLITE_0NOLFS;
extern bbInt g_sdk_engines_sqlite_SQLITE_0NOMEM;
extern bbInt g_sdk_engines_sqlite_SQLITE_0NOTADB;
extern bbInt g_sdk_engines_sqlite_SQLITE_0NOTFOUND;
extern bbInt g_sdk_engines_sqlite_SQLITE_0NOTICE;
extern bbInt g_sdk_engines_sqlite_SQLITE_0OK;
extern bbInt g_sdk_engines_sqlite_SQLITE_0PERM;
extern bbInt g_sdk_engines_sqlite_SQLITE_0PROTOCOL;
extern bbInt g_sdk_engines_sqlite_SQLITE_0RANGE;
extern bbInt g_sdk_engines_sqlite_SQLITE_0READONLY;
extern bbInt g_sdk_engines_sqlite_SQLITE_0ROW;
extern bbInt g_sdk_engines_sqlite_SQLITE_0SCHEMA;
extern bbInt g_sdk_engines_sqlite_SQLITE_0TOOBIG;
extern bbInt g_sdk_engines_sqlite_SQLITE_0WARNING;

extern void mx2_sdk_main();
extern bbString g_sdk_generators_hoedown_MarkdownToHtml(bbString l_markdown,bbBool l_toc);

#if BB_R_assimp || BB_R_assimp__
#else
#endif

#if BB_R_litehtml || BB_R_litehtml__
#else
#endif

#if BB_R_portmidi || BB_R_portmidi__
#else
#endif

#if BB_R_sdk || BB_R_sdk__
static struct mx2_sdk_sdk_typeinfo : public bbClassDecls{
  mx2_sdk_sdk_typeinfo():bbClassDecls(bbClassTypeInfo::getNamespace("sdk")){
  }
  bbDeclInfo **initDecls(){
    return bbMembers(bbFunctionDecl<void>("Main",&mx2_sdk_main));
  }
}_mx2_sdk_sdk_typeinfo;
#else
#endif

#if BB_R_sdk_api_box2d || BB_R_sdk_api_box2d__ || BB_R_sdk_api__ || BB_R_sdk__
static struct mx2_sdk_api_2physics_2box2d_2box2d_typeinfo : public bbClassDecls{
  mx2_sdk_api_2physics_2box2d_2box2d_typeinfo():bbClassDecls(bbClassTypeInfo::getNamespace("sdk.api.box2d")){
  }
  bbDeclInfo **initDecls(){
    return bbMembers(bbFunctionDecl<bbString,b2Rot>("b2RotToS",&g_sdk_api_box2d_b2RotToS),bbFunctionDecl<bbString,b2Transform>("b2TransformToS",&g_sdk_api_box2d_b2TransformToS),bbFunctionDecl<bbString,b2Vec2>("b2Vec2ToS",&g_sdk_api_box2d_b2Vec2ToS),bbFunctionDecl<t_stdlib_math_types_Vec2_1f,b2Vec2>("b2Vec2ToVec2f",&g_sdk_api_box2d_b2Vec2ToVec2f));
  }
}_mx2_sdk_api_2physics_2box2d_2box2d_typeinfo;

struct rx_sdk_api_box2d_b2Vec2_sdk_api_2physics_2box2d_2box2d : public bbClassTypeInfo{
  static rx_sdk_api_box2d_b2Vec2_sdk_api_2physics_2box2d_2box2d instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbExtMethodDecl<b2Vec2,bbString>("to",&g_sdk_api_box2d_b2Vec2_to_s),bbExtMethodDecl<b2Vec2,t_stdlib_math_types_Vec2_1d>("to",&g_sdk_api_box2d_b2Vec2_to_Tt_stdlib_math_types_Vec2_1d_2),bbExtMethodDecl<b2Vec2,t_stdlib_math_types_Vec2_1f>("to",&g_sdk_api_box2d_b2Vec2_to_Tt_stdlib_math_types_Vec2_1f_2),bbExtMethodDecl<b2Vec2,bbDouble,b2Vec2>("Dot",&g_sdk_api_box2d_b2Vec2_Dot),bbExtMethodDecl<b2Vec2,bbDouble,b2Vec2>("Distance",&g_sdk_api_box2d_b2Vec2_Distance),bbExtMethodDecl<b2Vec2,b2Vec2,b2Vec2,bbDouble>("Blend",&g_sdk_api_box2d_b2Vec2_Blend),bbExtMethodDecl<b2Vec2,b2Vec2,bbDouble>("/",&g_sdk_api_box2d_b2Vec2__div),bbExtMethodDecl<b2Vec2,b2Vec2,b2Vec2>("/",&g_sdk_api_box2d_b2Vec2__div),bbExtMethodDecl<b2Vec2,b2Vec2,bbDouble>("-",&g_sdk_api_box2d_b2Vec2__sub),bbExtMethodDecl<b2Vec2,b2Vec2,b2Vec2>("-",&g_sdk_api_box2d_b2Vec2__sub),bbExtMethodDecl<b2Vec2,b2Vec2>("-",&g_sdk_api_box2d_b2Vec2__sub),bbExtMethodDecl<b2Vec2,b2Vec2,bbDouble>("+",&g_sdk_api_box2d_b2Vec2__add),bbExtMethodDecl<b2Vec2,b2Vec2,b2Vec2>("+",&g_sdk_api_box2d_b2Vec2__add),bbExtMethodDecl<b2Vec2,b2Vec2,bbDouble>("*",&g_sdk_api_box2d_b2Vec2__mul),bbExtMethodDecl<b2Vec2,b2Vec2,b2Vec2>("*",&g_sdk_api_box2d_b2Vec2__mul));
    }
  }decls;
  rx_sdk_api_box2d_b2Vec2_sdk_api_2physics_2box2d_2box2d():bbClassTypeInfo("sdk.api.box2d.b2Vec2 Extension","Struct Extension"){
  }
  bbTypeInfo *superType(){
    return bbGetType<b2Vec2>();
  }
  bbVariant nullValue(){
    return bbVariant(b2Vec2{});
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<b2Vec2>(length));
  }
};
rx_sdk_api_box2d_b2Vec2_sdk_api_2physics_2box2d_2box2d rx_sdk_api_box2d_b2Vec2_sdk_api_2physics_2box2d_2box2d::instance;
rx_sdk_api_box2d_b2Vec2_sdk_api_2physics_2box2d_2box2d::decls_t rx_sdk_api_box2d_b2Vec2_sdk_api_2physics_2box2d_2box2d::decls;

struct rx_sdk_api_box2d_b2AABB_sdk_api_2physics_2box2d_2box2d : public bbClassTypeInfo{
  static rx_sdk_api_box2d_b2AABB_sdk_api_2physics_2box2d_2box2d instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbExtMethodDecl<b2AABB,void>("Sort",&g_sdk_api_box2d_b2AABB_Sort));
    }
  }decls;
  rx_sdk_api_box2d_b2AABB_sdk_api_2physics_2box2d_2box2d():bbClassTypeInfo("sdk.api.box2d.b2AABB Extension","Struct Extension"){
  }
  bbTypeInfo *superType(){
    return bbGetType<b2AABB>();
  }
  bbVariant nullValue(){
    return bbVariant(b2AABB{});
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<b2AABB>(length));
  }
};
rx_sdk_api_box2d_b2AABB_sdk_api_2physics_2box2d_2box2d rx_sdk_api_box2d_b2AABB_sdk_api_2physics_2box2d_2box2d::instance;
rx_sdk_api_box2d_b2AABB_sdk_api_2physics_2box2d_2box2d::decls_t rx_sdk_api_box2d_b2AABB_sdk_api_2physics_2box2d_2box2d::decls;

static bbUnknownTypeInfo rt_sdk_api_box2d_SimpleAABBQueryCallback("sdk.api.box2d.SimpleAABBQueryCallback");
bbTypeInfo *bbGetType(t_sdk_api_box2d_SimpleAABBQueryCallback*const&){
  return &rt_sdk_api_box2d_SimpleAABBQueryCallback;
}
bbTypeInfo *t_sdk_api_box2d_SimpleAABBQueryCallback::typeof()const{
  return &rt_sdk_api_box2d_SimpleAABBQueryCallback;
}
static bbUnknownTypeInfo rt_sdk_api_box2d_ClosestRayCallBack("sdk.api.box2d.ClosestRayCallBack");
bbTypeInfo *bbGetType(t_sdk_api_box2d_ClosestRayCallBack*const&){
  return &rt_sdk_api_box2d_ClosestRayCallBack;
}
bbTypeInfo *t_sdk_api_box2d_ClosestRayCallBack::typeof()const{
  return &rt_sdk_api_box2d_ClosestRayCallBack;
}
#else
static bbUnknownTypeInfo rt_sdk_api_box2d_SimpleAABBQueryCallback("sdk.api.box2d.SimpleAABBQueryCallback");
bbTypeInfo *bbGetType(t_sdk_api_box2d_SimpleAABBQueryCallback*const&){
  return &rt_sdk_api_box2d_SimpleAABBQueryCallback;
}
bbTypeInfo *t_sdk_api_box2d_SimpleAABBQueryCallback::typeof()const{
  return &rt_sdk_api_box2d_SimpleAABBQueryCallback;
}
static bbUnknownTypeInfo rt_sdk_api_box2d_ClosestRayCallBack("sdk.api.box2d.ClosestRayCallBack");
bbTypeInfo *bbGetType(t_sdk_api_box2d_ClosestRayCallBack*const&){
  return &rt_sdk_api_box2d_ClosestRayCallBack;
}
bbTypeInfo *t_sdk_api_box2d_ClosestRayCallBack::typeof()const{
  return &rt_sdk_api_box2d_ClosestRayCallBack;
}
#endif

#if BB_R_sdk_api_bullet || BB_R_sdk_api_bullet__ || BB_R_sdk_api__ || BB_R_sdk__
#else
#endif

#if BB_R_sdk_api_chipmunk || BB_R_sdk_api_chipmunk__ || BB_R_sdk_api__ || BB_R_sdk__
#else
#endif

#if BB_R_sdk_api_html_ws || BB_R_sdk_api_html_ws__ || BB_R_sdk_api_html__ || BB_R_sdk_api__ || BB_R_sdk__
#else
#endif

#if BB_R_sdk_api_httprequest || BB_R_sdk_api_httprequest__ || BB_R_sdk_api__ || BB_R_sdk__

struct et_sdk_api_httprequest_ReadyState : public bbEnumTypeInfo{
  static et_sdk_api_httprequest_ReadyState instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbLiteralDecl<t_sdk_api_httprequest_ReadyState>("Done",(t_sdk_api_httprequest_ReadyState)4),bbLiteralDecl<t_sdk_api_httprequest_ReadyState>("Error",(t_sdk_api_httprequest_ReadyState)5),bbLiteralDecl<t_sdk_api_httprequest_ReadyState>("HeadersReceived",(t_sdk_api_httprequest_ReadyState)2),bbLiteralDecl<t_sdk_api_httprequest_ReadyState>("Loading",(t_sdk_api_httprequest_ReadyState)3),bbLiteralDecl<t_sdk_api_httprequest_ReadyState>("Opened",(t_sdk_api_httprequest_ReadyState)1),bbLiteralDecl<t_sdk_api_httprequest_ReadyState>("Unsent",(t_sdk_api_httprequest_ReadyState)0));
    }
  }decls;
  et_sdk_api_httprequest_ReadyState():bbEnumTypeInfo("sdk.api.httprequest.ReadyState"){
  }
  bbVariant makeEnum( int i ){
    return bbVariant( (t_sdk_api_httprequest_ReadyState)i );
  }
  int getEnum( bbVariant v ){
    return (int)v.get<t_sdk_api_httprequest_ReadyState>();
  }
};
et_sdk_api_httprequest_ReadyState et_sdk_api_httprequest_ReadyState::instance;
et_sdk_api_httprequest_ReadyState::decls_t et_sdk_api_httprequest_ReadyState::decls;

bbTypeInfo *bbGetType(t_sdk_api_httprequest_ReadyState const&){
  return &et_sdk_api_httprequest_ReadyState::instance;
}

struct rt_sdk_api_httprequest_HttpRequestBase : public bbClassTypeInfo{
  static rt_sdk_api_httprequest_HttpRequestBase instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbFieldDecl("ReadyStateChanged",&t_sdk_api_httprequest_HttpRequestBase::m_ReadyStateChanged),bbFieldDecl("_readyState",&t_sdk_api_httprequest_HttpRequestBase::m__0readyState),bbFieldDecl("_timeout",&t_sdk_api_httprequest_HttpRequestBase::m__0timeout),bbFieldDecl("_response",&t_sdk_api_httprequest_HttpRequestBase::m__0response),bbFieldDecl("_status",&t_sdk_api_httprequest_HttpRequestBase::m__0status),bbFieldDecl("_req",&t_sdk_api_httprequest_HttpRequestBase::m__0req),bbFieldDecl("_url",&t_sdk_api_httprequest_HttpRequestBase::m__0url),bbMethodDecl<t_sdk_api_httprequest_HttpRequestBase,void,t_sdk_api_httprequest_ReadyState>("SetReadyState",&t_sdk_api_httprequest_HttpRequestBase::m_SetReadyState),bbMethodDecl<t_sdk_api_httprequest_HttpRequestBase,void,bbString,bbString>("SetHeader",&t_sdk_api_httprequest_HttpRequestBase::m_SetHeader),bbMethodDecl<t_sdk_api_httprequest_HttpRequestBase,void,bbString>("Send",&t_sdk_api_httprequest_HttpRequestBase::m_Send),bbMethodDecl<t_sdk_api_httprequest_HttpRequestBase,void,bbString,bbString>("Open",&t_sdk_api_httprequest_HttpRequestBase::m_Open),bbMethodDecl<t_sdk_api_httprequest_HttpRequestBase,void,bbString,bbString>("OnSetHeader",&t_sdk_api_httprequest_HttpRequestBase::m_OnSetHeader),bbMethodDecl<t_sdk_api_httprequest_HttpRequestBase,void,bbString>("OnSend",&t_sdk_api_httprequest_HttpRequestBase::m_OnSend),bbMethodDecl<t_sdk_api_httprequest_HttpRequestBase,void,bbString,bbString>("OnOpen",&t_sdk_api_httprequest_HttpRequestBase::m_OnOpen),bbMethodDecl<t_sdk_api_httprequest_HttpRequestBase,void>("OnCancel",&t_sdk_api_httprequest_HttpRequestBase::m_OnCancel),bbMethodDecl<t_sdk_api_httprequest_HttpRequestBase,void>("Cancel",&t_sdk_api_httprequest_HttpRequestBase::m_Cancel),bbPropertyDecl<t_sdk_api_httprequest_HttpRequestBase,t_sdk_api_httprequest_ReadyState>("ReadyState",&t_sdk_api_httprequest_HttpRequestBase::m_ReadyState,0),bbPropertyDecl<t_sdk_api_httprequest_HttpRequestBase,bbString>("ResponseText",&t_sdk_api_httprequest_HttpRequestBase::m_ResponseText,0),bbPropertyDecl<t_sdk_api_httprequest_HttpRequestBase,bbInt>("Status",&t_sdk_api_httprequest_HttpRequestBase::m_Status,0),bbPropertyDecl<t_sdk_api_httprequest_HttpRequestBase,bbFloat>("Timeout",&t_sdk_api_httprequest_HttpRequestBase::m_Timeout,&t_sdk_api_httprequest_HttpRequestBase::m_Timeout));
    }
  }decls;
  rt_sdk_api_httprequest_HttpRequestBase():bbClassTypeInfo("sdk.api.httprequest.HttpRequestBase","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<bbObject*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_sdk_api_httprequest_HttpRequestBase*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_sdk_api_httprequest_HttpRequestBase>>(length));
  }
};
rt_sdk_api_httprequest_HttpRequestBase rt_sdk_api_httprequest_HttpRequestBase::instance;
rt_sdk_api_httprequest_HttpRequestBase::decls_t rt_sdk_api_httprequest_HttpRequestBase::decls;

bbTypeInfo *bbGetType(t_sdk_api_httprequest_HttpRequestBase*const&){
  return &rt_sdk_api_httprequest_HttpRequestBase::instance;
}
bbTypeInfo *t_sdk_api_httprequest_HttpRequestBase::typeof()const{
  return &rt_sdk_api_httprequest_HttpRequestBase::instance;
}
static struct mx2_sdk_api_2protocoles_2httprequest_2httprequest_0desktop_typeinfo : public bbClassDecls{
  mx2_sdk_api_2protocoles_2httprequest_2httprequest_0desktop_typeinfo():bbClassDecls(bbClassTypeInfo::getNamespace("sdk.api.httprequest")){
  }
  bbDeclInfo **initDecls(){
    return bbMembers(bbFunctionDecl<void>("Hello",&g_sdk_api_httprequest_Hello));
  }
}_mx2_sdk_api_2protocoles_2httprequest_2httprequest_0desktop_typeinfo;

struct rt_sdk_api_httprequest_HttpRequest : public bbClassTypeInfo{
  static rt_sdk_api_httprequest_HttpRequest instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_sdk_api_httprequest_HttpRequest>(),bbFieldDecl("_process",&t_sdk_api_httprequest_HttpRequest::m__0process),bbFieldDecl("_tmp",&t_sdk_api_httprequest_HttpRequest::m__0tmp),bbMethodDecl<t_sdk_api_httprequest_HttpRequest,void,bbString>("OnSend",&t_sdk_api_httprequest_HttpRequest::m_OnSend),bbMethodDecl<t_sdk_api_httprequest_HttpRequest,void>("OnCancel",&t_sdk_api_httprequest_HttpRequest::m_OnCancel));
    }
  }decls;
  rt_sdk_api_httprequest_HttpRequest():bbClassTypeInfo("sdk.api.httprequest.HttpRequest","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<t_sdk_api_httprequest_HttpRequestBase*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_sdk_api_httprequest_HttpRequest*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_sdk_api_httprequest_HttpRequest>>(length));
  }
};
rt_sdk_api_httprequest_HttpRequest rt_sdk_api_httprequest_HttpRequest::instance;
rt_sdk_api_httprequest_HttpRequest::decls_t rt_sdk_api_httprequest_HttpRequest::decls;

bbTypeInfo *bbGetType(t_sdk_api_httprequest_HttpRequest*const&){
  return &rt_sdk_api_httprequest_HttpRequest::instance;
}
bbTypeInfo *t_sdk_api_httprequest_HttpRequest::typeof()const{
  return &rt_sdk_api_httprequest_HttpRequest::instance;
}
#else
static bbUnknownTypeInfo rt_sdk_api_httprequest_ReadyState("sdk.api.httprequest.ReadyState");
bbTypeInfo *bbGetType(t_sdk_api_httprequest_ReadyState const&){
  return &rt_sdk_api_httprequest_ReadyState;
}
static bbUnknownTypeInfo rt_sdk_api_httprequest_HttpRequestBase("sdk.api.httprequest.HttpRequestBase");
bbTypeInfo *bbGetType(t_sdk_api_httprequest_HttpRequestBase*const&){
  return &rt_sdk_api_httprequest_HttpRequestBase;
}
bbTypeInfo *t_sdk_api_httprequest_HttpRequestBase::typeof()const{
  return &rt_sdk_api_httprequest_HttpRequestBase;
}
static bbUnknownTypeInfo rt_sdk_api_httprequest_HttpRequest("sdk.api.httprequest.HttpRequest");
bbTypeInfo *bbGetType(t_sdk_api_httprequest_HttpRequest*const&){
  return &rt_sdk_api_httprequest_HttpRequest;
}
bbTypeInfo *t_sdk_api_httprequest_HttpRequest::typeof()const{
  return &rt_sdk_api_httprequest_HttpRequest;
}
#endif

#if BB_R_sdk_api_openal || BB_R_sdk_api_openal__ || BB_R_sdk_api__ || BB_R_sdk__
#else
#endif

#if BB_R_sdk_api_opengl || BB_R_sdk_api_opengl__ || BB_R_sdk_api__ || BB_R_sdk__
#else
#endif

#if BB_R_sdk_api_portmidi || BB_R_sdk_api_portmidi__ || BB_R_sdk_api__ || BB_R_sdk__

struct rt_sdk_api_portmidi_PortMidi : public bbClassTypeInfo{
  static rt_sdk_api_portmidi_PortMidi instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_sdk_api_portmidi_PortMidi>(),bbFieldDecl("version",&t_sdk_api_portmidi_PortMidi::m_version),bbFieldDecl("deviceCount",&t_sdk_api_portmidi_PortMidi::m_deviceCount),bbFieldDecl("driver",&t_sdk_api_portmidi_PortMidi::m_driver),bbFieldDecl("inputDevices",&t_sdk_api_portmidi_PortMidi::m_inputDevices),bbFieldDecl("outputDevices",&t_sdk_api_portmidi_PortMidi::m_outputDevices),bbFieldDecl("openInputs",&t_sdk_api_portmidi_PortMidi::m_openInputs),bbFieldDecl("openOutputs",&t_sdk_api_portmidi_PortMidi::m_openOutputs),bbFieldDecl("sysexBuffer",&t_sdk_api_portmidi_PortMidi::m_sysexBuffer),bbMethodDecl<t_sdk_api_portmidi_PortMidi,void,bbDouble>("Sleep",&t_sdk_api_portmidi_PortMidi::m_Sleep),bbMethodDecl<t_sdk_api_portmidi_PortMidi,void,bbInt,bbArray<bbInt>>("SendMessages",&t_sdk_api_portmidi_PortMidi::m_SendMessages),bbMethodDecl<t_sdk_api_portmidi_PortMidi,void,bbInt,bbInt>("SendMessage",&t_sdk_api_portmidi_PortMidi::m_SendMessage),bbMethodDecl<t_sdk_api_portmidi_PortMidi,bbString,bbInt>("OutputName",&t_sdk_api_portmidi_PortMidi::m_OutputName),bbMethodDecl<t_sdk_api_portmidi_PortMidi,void,bbInt>("OpenOutput",&t_sdk_api_portmidi_PortMidi::m_OpenOutput),bbMethodDecl<t_sdk_api_portmidi_PortMidi,void,bbInt>("OpenInput",&t_sdk_api_portmidi_PortMidi::m_OpenInput),bbMethodDecl<t_sdk_api_portmidi_PortMidi,bbString,bbInt>("InputName",&t_sdk_api_portmidi_PortMidi::m_InputName),bbMethodDecl<t_sdk_api_portmidi_PortMidi,bbInt>("HasEvent",&t_sdk_api_portmidi_PortMidi::m_HasEvent),bbMethodDecl<t_sdk_api_portmidi_PortMidi,bbDouble>("EventTime",&t_sdk_api_portmidi_PortMidi::m_EventTime),bbMethodDecl<t_sdk_api_portmidi_PortMidi,bbArray<bbUByte>>("EventDataBytes",&t_sdk_api_portmidi_PortMidi::m_EventDataBytes),bbMethodDecl<t_sdk_api_portmidi_PortMidi,bbInt>("EventData",&t_sdk_api_portmidi_PortMidi::m_EventData),bbMethodDecl<t_sdk_api_portmidi_PortMidi,bbArray<bbByte>>("EventContent",&t_sdk_api_portmidi_PortMidi::m_EventContent),bbMethodDecl<t_sdk_api_portmidi_PortMidi,void,bbInt>("CloseOutput",&t_sdk_api_portmidi_PortMidi::m_CloseOutput),bbMethodDecl<t_sdk_api_portmidi_PortMidi,void,bbInt>("CloseInput",&t_sdk_api_portmidi_PortMidi::m_CloseInput),bbMethodDecl<t_sdk_api_portmidi_PortMidi,void>("CloseAll",&t_sdk_api_portmidi_PortMidi::m_CloseAll));
    }
  }decls;
  rt_sdk_api_portmidi_PortMidi():bbClassTypeInfo("sdk.api.portmidi.PortMidi","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<bbObject*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_sdk_api_portmidi_PortMidi*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_sdk_api_portmidi_PortMidi>>(length));
  }
};
rt_sdk_api_portmidi_PortMidi rt_sdk_api_portmidi_PortMidi::instance;
rt_sdk_api_portmidi_PortMidi::decls_t rt_sdk_api_portmidi_PortMidi::decls;

bbTypeInfo *bbGetType(t_sdk_api_portmidi_PortMidi*const&){
  return &rt_sdk_api_portmidi_PortMidi::instance;
}
bbTypeInfo *t_sdk_api_portmidi_PortMidi::typeof()const{
  return &rt_sdk_api_portmidi_PortMidi::instance;
}

struct rt_sdk_api_portmidi_PmDeviceInfo : public bbClassTypeInfo{
  static rt_sdk_api_portmidi_PmDeviceInfo instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_sdk_api_portmidi_PmDeviceInfo>(),bbFieldDecl("structVersion",&t_sdk_api_portmidi_PmDeviceInfo::m_structVersion),bbFieldDecl("interf",&t_sdk_api_portmidi_PmDeviceInfo::m_interf),bbFieldDecl("name",&t_sdk_api_portmidi_PmDeviceInfo::m_name),bbFieldDecl("input",&t_sdk_api_portmidi_PmDeviceInfo::m_input),bbFieldDecl("output",&t_sdk_api_portmidi_PmDeviceInfo::m_output),bbFieldDecl("opened",&t_sdk_api_portmidi_PmDeviceInfo::m_opened));
    }
  }decls;
  rt_sdk_api_portmidi_PmDeviceInfo():bbClassTypeInfo("sdk.api.portmidi.PmDeviceInfo","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<bbObject*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_sdk_api_portmidi_PmDeviceInfo*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_sdk_api_portmidi_PmDeviceInfo>>(length));
  }
};
rt_sdk_api_portmidi_PmDeviceInfo rt_sdk_api_portmidi_PmDeviceInfo::instance;
rt_sdk_api_portmidi_PmDeviceInfo::decls_t rt_sdk_api_portmidi_PmDeviceInfo::decls;

bbTypeInfo *bbGetType(t_sdk_api_portmidi_PmDeviceInfo*const&){
  return &rt_sdk_api_portmidi_PmDeviceInfo::instance;
}
bbTypeInfo *t_sdk_api_portmidi_PmDeviceInfo::typeof()const{
  return &rt_sdk_api_portmidi_PmDeviceInfo::instance;
}

struct rt_sdk_api_portmidi_MidiDriver : public bbClassTypeInfo{
  static rt_sdk_api_portmidi_MidiDriver instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_sdk_api_portmidi_MidiDriver>(),bbFieldDecl("deviceCount",&t_sdk_api_portmidi_MidiDriver::m_deviceCount),bbFieldDecl("error",&t_sdk_api_portmidi_MidiDriver::m_error),bbFieldDecl("errorText",&t_sdk_api_portmidi_MidiDriver::m_errorText),bbFieldDecl("info",&t_sdk_api_portmidi_MidiDriver::m_info),bbMethodDecl<t_sdk_api_portmidi_MidiDriver,void,bbDouble>("Sleep",&t_sdk_api_portmidi_MidiDriver::m_Sleep),bbMethodDecl<t_sdk_api_portmidi_MidiDriver,void,bbInt,bbInt*,bbInt>("OutputMessages",&t_sdk_api_portmidi_MidiDriver::m_OutputMessages),bbMethodDecl<t_sdk_api_portmidi_MidiDriver,void,bbInt,bbInt>("OutputMessage",&t_sdk_api_portmidi_MidiDriver::m_OutputMessage),bbMethodDecl<t_sdk_api_portmidi_MidiDriver,bbInt,bbInt>("OpenOutput",&t_sdk_api_portmidi_MidiDriver::m_OpenOutput),bbMethodDecl<t_sdk_api_portmidi_MidiDriver,bbInt,bbInt>("OpenInput",&t_sdk_api_portmidi_MidiDriver::m_OpenInput),bbMethodDecl<t_sdk_api_portmidi_MidiDriver,bbDouble>("MidiEventTimestamp",&t_sdk_api_portmidi_MidiDriver::m_MidiEventTimestamp),bbMethodDecl<t_sdk_api_portmidi_MidiDriver,bbInt,void*,bbInt>("MidiEventMessage",&t_sdk_api_portmidi_MidiDriver::m_MidiEventMessage),bbMethodDecl<t_sdk_api_portmidi_MidiDriver,bbInt>("MidiEventData",&t_sdk_api_portmidi_MidiDriver::m_MidiEventData),bbMethodDecl<t_sdk_api_portmidi_MidiDriver,bbBool,bbInt>("HasInput",&t_sdk_api_portmidi_MidiDriver::m_HasInput),bbMethodDecl<t_sdk_api_portmidi_MidiDriver,void,bbInt>("GetInfo",&t_sdk_api_portmidi_MidiDriver::m_GetInfo),bbMethodDecl<t_sdk_api_portmidi_MidiDriver,void,bbInt>("CloseOutput",&t_sdk_api_portmidi_MidiDriver::m_CloseOutput),bbMethodDecl<t_sdk_api_portmidi_MidiDriver,void,bbInt>("CloseInput",&t_sdk_api_portmidi_MidiDriver::m_CloseInput));
    }
  }decls;
  rt_sdk_api_portmidi_MidiDriver():bbClassTypeInfo("sdk.api.portmidi.MidiDriver","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<bbObject*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_sdk_api_portmidi_MidiDriver*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_sdk_api_portmidi_MidiDriver>>(length));
  }
};
rt_sdk_api_portmidi_MidiDriver rt_sdk_api_portmidi_MidiDriver::instance;
rt_sdk_api_portmidi_MidiDriver::decls_t rt_sdk_api_portmidi_MidiDriver::decls;

bbTypeInfo *bbGetType(t_sdk_api_portmidi_MidiDriver*const&){
  return &rt_sdk_api_portmidi_MidiDriver::instance;
}
bbTypeInfo *t_sdk_api_portmidi_MidiDriver::typeof()const{
  return &rt_sdk_api_portmidi_MidiDriver::instance;
}
#else
static bbUnknownTypeInfo rt_sdk_api_portmidi_PortMidi("sdk.api.portmidi.PortMidi");
bbTypeInfo *bbGetType(t_sdk_api_portmidi_PortMidi*const&){
  return &rt_sdk_api_portmidi_PortMidi;
}
bbTypeInfo *t_sdk_api_portmidi_PortMidi::typeof()const{
  return &rt_sdk_api_portmidi_PortMidi;
}
static bbUnknownTypeInfo rt_sdk_api_portmidi_PmDeviceInfo("sdk.api.portmidi.PmDeviceInfo");
bbTypeInfo *bbGetType(t_sdk_api_portmidi_PmDeviceInfo*const&){
  return &rt_sdk_api_portmidi_PmDeviceInfo;
}
bbTypeInfo *t_sdk_api_portmidi_PmDeviceInfo::typeof()const{
  return &rt_sdk_api_portmidi_PmDeviceInfo;
}
static bbUnknownTypeInfo rt_sdk_api_portmidi_MidiDriver("sdk.api.portmidi.MidiDriver");
bbTypeInfo *bbGetType(t_sdk_api_portmidi_MidiDriver*const&){
  return &rt_sdk_api_portmidi_MidiDriver;
}
bbTypeInfo *t_sdk_api_portmidi_MidiDriver::typeof()const{
  return &rt_sdk_api_portmidi_MidiDriver;
}
#endif

#if BB_R_sdk_api_sdl2_mixer || BB_R_sdk_api_sdl2_mixer__ || BB_R_sdk_api_sdl2__ || BB_R_sdk_api__ || BB_R_sdk__
#else
#endif

#if BB_R_sdk_engines_freetype || BB_R_sdk_engines_freetype__ || BB_R_sdk_engines__ || BB_R_sdk__
#else
#endif

#if BB_R_sdk_engines_litehtml || BB_R_sdk_engines_litehtml__ || BB_R_sdk_engines__ || BB_R_sdk__
#else
#endif

#if BB_R_sdk_engines_sqlite || BB_R_sdk_engines_sqlite__ || BB_R_sdk_engines__ || BB_R_sdk__
static struct mx2_sdk_engines_2databases_2sqlite_2sqlite_typeinfo : public bbClassDecls{
  mx2_sdk_engines_2databases_2sqlite_2sqlite_typeinfo():bbClassDecls(bbClassTypeInfo::getNamespace("sdk.engines.sqlite")){
  }
  bbDeclInfo **initDecls(){
    return bbMembers(bbConstDecl("SQLITE_OK",&g_sdk_engines_sqlite_SQLITE_0OK),bbConstDecl("SQLITE_ERROR",&g_sdk_engines_sqlite_SQLITE_0ERROR),bbConstDecl("SQLITE_INTERNAL",&g_sdk_engines_sqlite_SQLITE_0INTERNAL),bbConstDecl("SQLITE_PERM",&g_sdk_engines_sqlite_SQLITE_0PERM),bbConstDecl("SQLITE_ABORT",&g_sdk_engines_sqlite_SQLITE_0ABORT),bbConstDecl("SQLITE_BUSY",&g_sdk_engines_sqlite_SQLITE_0BUSY),bbConstDecl("SQLITE_LOCKED",&g_sdk_engines_sqlite_SQLITE_0LOCKED),bbConstDecl("SQLITE_NOMEM",&g_sdk_engines_sqlite_SQLITE_0NOMEM),bbConstDecl("SQLITE_READONLY",&g_sdk_engines_sqlite_SQLITE_0READONLY),bbConstDecl("SQLITE_INTERRUPT",&g_sdk_engines_sqlite_SQLITE_0INTERRUPT),bbConstDecl("SQLITE_IOERR",&g_sdk_engines_sqlite_SQLITE_0IOERR),bbConstDecl("SQLITE_CORRUPT",&g_sdk_engines_sqlite_SQLITE_0CORRUPT),bbConstDecl("SQLITE_NOTFOUND",&g_sdk_engines_sqlite_SQLITE_0NOTFOUND),bbConstDecl("SQLITE_FULL",&g_sdk_engines_sqlite_SQLITE_0FULL),bbConstDecl("SQLITE_CANTOPEN",&g_sdk_engines_sqlite_SQLITE_0CANTOPEN),bbConstDecl("SQLITE_PROTOCOL",&g_sdk_engines_sqlite_SQLITE_0PROTOCOL),bbConstDecl("SQLITE_EMPTY",&g_sdk_engines_sqlite_SQLITE_0EMPTY),bbConstDecl("SQLITE_SCHEMA",&g_sdk_engines_sqlite_SQLITE_0SCHEMA),bbConstDecl("SQLITE_TOOBIG",&g_sdk_engines_sqlite_SQLITE_0TOOBIG),bbConstDecl("SQLITE_CONSTRAINT",&g_sdk_engines_sqlite_SQLITE_0CONSTRAINT),bbConstDecl("SQLITE_MISMATCH",&g_sdk_engines_sqlite_SQLITE_0MISMATCH),bbConstDecl("SQLITE_MISUSE",&g_sdk_engines_sqlite_SQLITE_0MISUSE),bbConstDecl("SQLITE_NOLFS",&g_sdk_engines_sqlite_SQLITE_0NOLFS),bbConstDecl("SQLITE_AUTH",&g_sdk_engines_sqlite_SQLITE_0AUTH),bbConstDecl("SQLITE_FORMAT",&g_sdk_engines_sqlite_SQLITE_0FORMAT),bbConstDecl("SQLITE_RANGE",&g_sdk_engines_sqlite_SQLITE_0RANGE),bbConstDecl("SQLITE_NOTADB",&g_sdk_engines_sqlite_SQLITE_0NOTADB),bbConstDecl("SQLITE_NOTICE",&g_sdk_engines_sqlite_SQLITE_0NOTICE),bbConstDecl("SQLITE_WARNING",&g_sdk_engines_sqlite_SQLITE_0WARNING),bbConstDecl("SQLITE_ROW",&g_sdk_engines_sqlite_SQLITE_0ROW),bbConstDecl("SQLITE_DONE",&g_sdk_engines_sqlite_SQLITE_0DONE));
  }
}_mx2_sdk_engines_2databases_2sqlite_2sqlite_typeinfo;
#else
#endif

#if BB_R_sdk_generators_hoedown || BB_R_sdk_generators_hoedown__ || BB_R_sdk_generators__ || BB_R_sdk__
static struct mx2_sdk_generators_2html_2hoedown_2hoedown_typeinfo : public bbClassDecls{
  mx2_sdk_generators_2html_2hoedown_2hoedown_typeinfo():bbClassDecls(bbClassTypeInfo::getNamespace("sdk.generators.hoedown")){
  }
  bbDeclInfo **initDecls(){
    return bbMembers(bbFunctionDecl<bbString,bbString,bbBool>("MarkdownToHtml",&g_sdk_generators_hoedown_MarkdownToHtml));
  }
}_mx2_sdk_generators_2html_2hoedown_2hoedown_typeinfo;
#else
#endif

#if BB_R_sdk_medias_assimp || BB_R_sdk_medias_assimp__ || BB_R_sdk_medias__ || BB_R_sdk__
static struct mx2_sdk_medias_2loaders_2meshes_2assimp_2assimp_typeinfo : public bbClassDecls{
  mx2_sdk_medias_2loaders_2meshes_2assimp_2assimp_typeinfo():bbClassDecls(bbClassTypeInfo::getNamespace("sdk.medias.assimp")){
  }
  bbDeclInfo **initDecls(){
    return bbMembers(bbConstDecl("AI_MATKEY_NAME",&g_sdk_medias_assimp_AI_0MATKEY_0NAME),bbConstDecl("AI_MATKEY_COLOR_DIFFUSE",&g_sdk_medias_assimp_AI_0MATKEY_0COLOR_0DIFFUSE),bbConstDecl("AI_MATKEY_COLOR_AMBIENT",&g_sdk_medias_assimp_AI_0MATKEY_0COLOR_0AMBIENT),bbConstDecl("AI_MATKEY_COLOR_SPECULAR",&g_sdk_medias_assimp_AI_0MATKEY_0COLOR_0SPECULAR),bbConstDecl("AI_MATKEY_COLOR_EMISSIVE",&g_sdk_medias_assimp_AI_0MATKEY_0COLOR_0EMISSIVE),bbConstDecl("AI_MATKEY_COLOR_TRANSPARENT",&g_sdk_medias_assimp_AI_0MATKEY_0COLOR_0TRANSPARENT),bbConstDecl("AI_MATKEY_COLOR_REFLECTIVE",&g_sdk_medias_assimp_AI_0MATKEY_0COLOR_0REFLECTIVE),bbConstDecl("AI_CONFIG_PP_SBP_REMOVE",&g_sdk_medias_assimp_AI_0CONFIG_0PP_0SBP_0REMOVE),bbConstDecl("AI_CONFIG_PP_FD_REMOVE",&g_sdk_medias_assimp_AI_0CONFIG_0PP_0FD_0REMOVE),bbConstDecl("AI_CONFIG_PP_SBBC_MAX_BONES",&g_sdk_medias_assimp_AI_0CONFIG_0PP_0SBBC_0MAX_0BONES));
  }
}_mx2_sdk_medias_2loaders_2meshes_2assimp_2assimp_typeinfo;
#else
#endif

#if BB_R_sdk_medias_theoraplayer || BB_R_sdk_medias_theoraplayer__ || BB_R_sdk_medias__ || BB_R_sdk__
#else
#endif

#if BB_R_sdk_toolkits_tinyregex || BB_R_sdk_toolkits_tinyregex__ || BB_R_sdk_toolkits__ || BB_R_sdk__
#else
#endif

#if BB_R_stdlib_collections || BB_R_stdlib_collections__ || BB_R_stdlib__
static bbUnknownTypeInfo rt_stdlib_collections_Map_1ii_Node_Color("stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node.Color");
bbTypeInfo *bbGetType(t_stdlib_collections_Map_1ii_Node_Color const&){
  return &rt_stdlib_collections_Map_1ii_Node_Color;
}
static bbUnknownTypeInfo rt_stdlib_collections_Map_1ii_Node("stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node");
bbTypeInfo *bbGetType(t_stdlib_collections_Map_1ii_Node*const&){
  return &rt_stdlib_collections_Map_1ii_Node;
}
bbTypeInfo *t_stdlib_collections_Map_1ii_Node::typeof()const{
  return &rt_stdlib_collections_Map_1ii_Node;
}
static bbUnknownTypeInfo rt_stdlib_collections_Map_1ii_Iterator("stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Iterator");
bbTypeInfo *bbGetType(t_stdlib_collections_Map_1ii_Iterator const&){
  return &rt_stdlib_collections_Map_1ii_Iterator;
}
bbTypeInfo *t_stdlib_collections_Map_1ii_Iterator::typeof()const{
  return &rt_stdlib_collections_Map_1ii_Iterator;
}
static bbUnknownTypeInfo rt_stdlib_collections_Map_1ii_KeyIterator("stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.KeyIterator");
bbTypeInfo *bbGetType(t_stdlib_collections_Map_1ii_KeyIterator const&){
  return &rt_stdlib_collections_Map_1ii_KeyIterator;
}
bbTypeInfo *t_stdlib_collections_Map_1ii_KeyIterator::typeof()const{
  return &rt_stdlib_collections_Map_1ii_KeyIterator;
}
static bbUnknownTypeInfo rt_stdlib_collections_Map_1ii_MapKeys("stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.MapKeys");
bbTypeInfo *bbGetType(t_stdlib_collections_Map_1ii_MapKeys const&){
  return &rt_stdlib_collections_Map_1ii_MapKeys;
}
bbTypeInfo *t_stdlib_collections_Map_1ii_MapKeys::typeof()const{
  return &rt_stdlib_collections_Map_1ii_MapKeys;
}
static bbUnknownTypeInfo rt_stdlib_collections_Map_1ii_ValueIterator("stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.ValueIterator");
bbTypeInfo *bbGetType(t_stdlib_collections_Map_1ii_ValueIterator const&){
  return &rt_stdlib_collections_Map_1ii_ValueIterator;
}
bbTypeInfo *t_stdlib_collections_Map_1ii_ValueIterator::typeof()const{
  return &rt_stdlib_collections_Map_1ii_ValueIterator;
}
static bbUnknownTypeInfo rt_stdlib_collections_Map_1ii_MapValues("stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.MapValues");
bbTypeInfo *bbGetType(t_stdlib_collections_Map_1ii_MapValues const&){
  return &rt_stdlib_collections_Map_1ii_MapValues;
}
bbTypeInfo *t_stdlib_collections_Map_1ii_MapValues::typeof()const{
  return &rt_stdlib_collections_Map_1ii_MapValues;
}
static bbUnknownTypeInfo rt_stdlib_collections_Map_1ii("stdlib.collections.Map<monkey.types.Int,monkey.types.Int>");
bbTypeInfo *bbGetType(t_stdlib_collections_Map_1ii*const&){
  return &rt_stdlib_collections_Map_1ii;
}
bbTypeInfo *t_stdlib_collections_Map_1ii::typeof()const{
  return &rt_stdlib_collections_Map_1ii;
}
#else
static bbUnknownTypeInfo rt_stdlib_collections_Map_1ii_Node_Color("stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node.Color");
bbTypeInfo *bbGetType(t_stdlib_collections_Map_1ii_Node_Color const&){
  return &rt_stdlib_collections_Map_1ii_Node_Color;
}
static bbUnknownTypeInfo rt_stdlib_collections_Map_1ii_Node("stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node");
bbTypeInfo *bbGetType(t_stdlib_collections_Map_1ii_Node*const&){
  return &rt_stdlib_collections_Map_1ii_Node;
}
bbTypeInfo *t_stdlib_collections_Map_1ii_Node::typeof()const{
  return &rt_stdlib_collections_Map_1ii_Node;
}
static bbUnknownTypeInfo rt_stdlib_collections_Map_1ii_Iterator("stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Iterator");
bbTypeInfo *bbGetType(t_stdlib_collections_Map_1ii_Iterator const&){
  return &rt_stdlib_collections_Map_1ii_Iterator;
}
bbTypeInfo *t_stdlib_collections_Map_1ii_Iterator::typeof()const{
  return &rt_stdlib_collections_Map_1ii_Iterator;
}
static bbUnknownTypeInfo rt_stdlib_collections_Map_1ii_KeyIterator("stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.KeyIterator");
bbTypeInfo *bbGetType(t_stdlib_collections_Map_1ii_KeyIterator const&){
  return &rt_stdlib_collections_Map_1ii_KeyIterator;
}
bbTypeInfo *t_stdlib_collections_Map_1ii_KeyIterator::typeof()const{
  return &rt_stdlib_collections_Map_1ii_KeyIterator;
}
static bbUnknownTypeInfo rt_stdlib_collections_Map_1ii_MapKeys("stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.MapKeys");
bbTypeInfo *bbGetType(t_stdlib_collections_Map_1ii_MapKeys const&){
  return &rt_stdlib_collections_Map_1ii_MapKeys;
}
bbTypeInfo *t_stdlib_collections_Map_1ii_MapKeys::typeof()const{
  return &rt_stdlib_collections_Map_1ii_MapKeys;
}
static bbUnknownTypeInfo rt_stdlib_collections_Map_1ii_ValueIterator("stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.ValueIterator");
bbTypeInfo *bbGetType(t_stdlib_collections_Map_1ii_ValueIterator const&){
  return &rt_stdlib_collections_Map_1ii_ValueIterator;
}
bbTypeInfo *t_stdlib_collections_Map_1ii_ValueIterator::typeof()const{
  return &rt_stdlib_collections_Map_1ii_ValueIterator;
}
static bbUnknownTypeInfo rt_stdlib_collections_Map_1ii_MapValues("stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.MapValues");
bbTypeInfo *bbGetType(t_stdlib_collections_Map_1ii_MapValues const&){
  return &rt_stdlib_collections_Map_1ii_MapValues;
}
bbTypeInfo *t_stdlib_collections_Map_1ii_MapValues::typeof()const{
  return &rt_stdlib_collections_Map_1ii_MapValues;
}
static bbUnknownTypeInfo rt_stdlib_collections_Map_1ii("stdlib.collections.Map<monkey.types.Int,monkey.types.Int>");
bbTypeInfo *bbGetType(t_stdlib_collections_Map_1ii*const&){
  return &rt_stdlib_collections_Map_1ii;
}
bbTypeInfo *t_stdlib_collections_Map_1ii::typeof()const{
  return &rt_stdlib_collections_Map_1ii;
}
#endif

#if BB_R_theoraplayer || BB_R_theoraplayer__
#else
#endif