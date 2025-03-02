
#include "sdk/sdk.buildv1.1.15/windows_debug_mx/include/sdk_api_2protocoles_2httprequest_2httprequest.h"

bbString bbDBType(t_sdk_api_httprequest_ReadyState*p){
  	return "sdk.api.httprequest.ReadyState";
}
bbString bbDBValue(t_sdk_api_httprequest_ReadyState*p){
  	return bbString( *(int*)p );
}

void t_sdk_api_httprequest_HttpRequestBase::gcMark(){
  bbGCMark(m_ReadyStateChanged);
}

void t_sdk_api_httprequest_HttpRequestBase::dbEmit(){
  puts( "[sdk.api.httprequest.HttpRequestBase]");
  bbDBEmit("ReadyStateChanged",&m_ReadyStateChanged);
  bbDBEmit("_readyState",&m__0readyState);
  bbDBEmit("_timeout",&m__0timeout);
  bbDBEmit("_response",&m__0response);
  bbDBEmit("_status",&m__0status);
  bbDBEmit("_req",&m__0req);
  bbDBEmit("_url",&m__0url);
}

t_sdk_api_httprequest_HttpRequestBase::t_sdk_api_httprequest_HttpRequestBase(){
  bbDBFrame db_f{"new:Void()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/protocoles/httprequest/httprequest.monkey2"};
  t_sdk_api_httprequest_HttpRequestBase*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(393218);
  this->m__0readyState=t_sdk_api_httprequest_ReadyState(0);
  bbDBStmt(397314);
  this->m__0timeout=10.0f;
  bbDBStmt(401410);
  this->m__0status=-1;
}
t_sdk_api_httprequest_HttpRequestBase::~t_sdk_api_httprequest_HttpRequestBase(){
}

void t_sdk_api_httprequest_HttpRequestBase::m_Timeout(bbFloat l_timeout){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Timeout:Void(timeout:monkey.types.Float)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/protocoles/httprequest/httprequest.monkey2"};
  t_sdk_api_httprequest_HttpRequestBase*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("timeout",&l_timeout);
  bbDBStmt(192514);
  this->m__0timeout=l_timeout;
}

bbFloat t_sdk_api_httprequest_HttpRequestBase::m_Timeout(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Timeout:monkey.types.Float()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/protocoles/httprequest/httprequest.monkey2"};
  t_sdk_api_httprequest_HttpRequestBase*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(176130);
  return this->m__0timeout;
}

bbInt t_sdk_api_httprequest_HttpRequestBase::m_Status(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Status:monkey.types.Int()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/protocoles/httprequest/httprequest.monkey2"};
  t_sdk_api_httprequest_HttpRequestBase*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(253954);
  return this->m__0status;
}

void t_sdk_api_httprequest_HttpRequestBase::m_SetReadyState(t_sdk_api_httprequest_ReadyState l_readyState){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"SetReadyState:Void(readyState:sdk.api.httprequest.ReadyState)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/protocoles/httprequest/httprequest.monkey2"};
  t_sdk_api_httprequest_HttpRequestBase*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("readyState",&l_readyState);
  bbDBStmt(479234);
  if((l_readyState==this->m__0readyState)){
    bbDBBlock db_blk;
    return;
  }
  bbDBStmt(487426);
  this->m__0readyState=l_readyState;
  bbDBStmt(495618);
  this->m_ReadyStateChanged();
}

void t_sdk_api_httprequest_HttpRequestBase::m_SetHeader(bbString l_header,bbString l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"SetHeader:Void(header:monkey.types.String,value:monkey.types.String)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/protocoles/httprequest/httprequest.monkey2"};
  t_sdk_api_httprequest_HttpRequestBase*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("header",&l_header);
  bbDBLocal("value",&l_value);
  bbDBStmt(294914);
  this->m_OnSetHeader(l_header,l_value);
}

void t_sdk_api_httprequest_HttpRequestBase::m_Send(bbString l_text){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Send:Void(text:monkey.types.String)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/protocoles/httprequest/httprequest.monkey2"};
  t_sdk_api_httprequest_HttpRequestBase*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("text",&l_text);
  bbDBStmt(315394);
  this->m_OnSend(l_text);
}

bbString t_sdk_api_httprequest_HttpRequestBase::m_ResponseText(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"ResponseText:monkey.types.String()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/protocoles/httprequest/httprequest.monkey2"};
  t_sdk_api_httprequest_HttpRequestBase*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(233474);
  return this->m__0response;
}

t_sdk_api_httprequest_ReadyState t_sdk_api_httprequest_HttpRequestBase::m_ReadyState(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"ReadyState:sdk.api.httprequest.ReadyState()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/protocoles/httprequest/httprequest.monkey2"};
  t_sdk_api_httprequest_HttpRequestBase*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(212994);
  return this->m__0readyState;
}

void t_sdk_api_httprequest_HttpRequestBase::m_Open(bbString l_req,bbString l_url){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Open:Void(req:monkey.types.String,url:monkey.types.String)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/protocoles/httprequest/httprequest.monkey2"};
  t_sdk_api_httprequest_HttpRequestBase*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("req",&l_req);
  bbDBLocal("url",&l_url);
  bbDBStmt(274434);
  this->m_OnOpen(l_req,l_url);
}

void t_sdk_api_httprequest_HttpRequestBase::m_OnSetHeader(bbString l_header,bbString l_value){
  bbDBFrame db_f{"OnSetHeader:Void(header:monkey.types.String,value:monkey.types.String)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/protocoles/httprequest/httprequest.monkey2"};
  t_sdk_api_httprequest_HttpRequestBase*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("header",&l_header);
  bbDBLocal("value",&l_value);
}

void t_sdk_api_httprequest_HttpRequestBase::m_OnOpen(bbString l_req,bbString l_url){
  bbDBFrame db_f{"OnOpen:Void(req:monkey.types.String,url:monkey.types.String)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/protocoles/httprequest/httprequest.monkey2"};
  t_sdk_api_httprequest_HttpRequestBase*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("req",&l_req);
  bbDBLocal("url",&l_url);
  bbDBStmt(417794);
  this->m__0req=l_req;
  bbDBStmt(421890);
  this->m__0url=l_url;
  bbDBStmt(425986);
  this->m_SetReadyState(t_sdk_api_httprequest_ReadyState(1));
}

void t_sdk_api_httprequest_HttpRequestBase::m_OnCancel(){
  bbDBFrame db_f{"OnCancel:Void()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/protocoles/httprequest/httprequest.monkey2"};
  t_sdk_api_httprequest_HttpRequestBase*self=this;
  bbDBLocal("Self",&self);
}

void t_sdk_api_httprequest_HttpRequestBase::m_Cancel(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Cancel:Void()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/protocoles/httprequest/httprequest.monkey2"};
  t_sdk_api_httprequest_HttpRequestBase*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(335874);
  this->m_OnCancel();
}
bbString bbDBType(t_sdk_api_httprequest_HttpRequestBase**){
  return "sdk.api.httprequest.HttpRequestBase";
}
bbString bbDBValue(t_sdk_api_httprequest_HttpRequestBase**p){
  return bbDBObjectValue(*p);
}

void mx2_sdk_api_2protocoles_2httprequest_2httprequest_init_f(){
}
