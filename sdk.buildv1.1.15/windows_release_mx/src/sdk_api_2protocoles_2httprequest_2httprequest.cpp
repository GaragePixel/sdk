
#include "sdk/sdk.buildv1.1.15/windows_release_mx/include/sdk_api_2protocoles_2httprequest_2httprequest.h"

bbString bbDBType(t_sdk_api_httprequest_ReadyState*p){
  	return "sdk.api.httprequest.ReadyState";
}
bbString bbDBValue(t_sdk_api_httprequest_ReadyState*p){
  	return bbString( *(int*)p );
}

void t_sdk_api_httprequest_HttpRequestBase::gcMark(){
  bbGCMark(m_ReadyStateChanged);
}

t_sdk_api_httprequest_HttpRequestBase::t_sdk_api_httprequest_HttpRequestBase(){
  this->m__0readyState=t_sdk_api_httprequest_ReadyState(0);
  this->m__0timeout=10.0f;
  this->m__0status=-1;
}
t_sdk_api_httprequest_HttpRequestBase::~t_sdk_api_httprequest_HttpRequestBase(){
}

void t_sdk_api_httprequest_HttpRequestBase::m_Timeout(bbFloat l_timeout){
  this->m__0timeout=l_timeout;
}

void t_sdk_api_httprequest_HttpRequestBase::m_SetReadyState(t_sdk_api_httprequest_ReadyState l_readyState){
  if((l_readyState==this->m__0readyState)){
    return;
  }
  this->m__0readyState=l_readyState;
  this->m_ReadyStateChanged();
}

void t_sdk_api_httprequest_HttpRequestBase::m_SetHeader(bbString l_header,bbString l_value){
  this->m_OnSetHeader(l_header,l_value);
}

void t_sdk_api_httprequest_HttpRequestBase::m_Send(bbString l_text){
  this->m_OnSend(l_text);
}

t_sdk_api_httprequest_ReadyState t_sdk_api_httprequest_HttpRequestBase::m_ReadyState(){
  return this->m__0readyState;
}

void t_sdk_api_httprequest_HttpRequestBase::m_Open(bbString l_req,bbString l_url){
  this->m_OnOpen(l_req,l_url);
}

void t_sdk_api_httprequest_HttpRequestBase::m_OnSetHeader(bbString l_header,bbString l_value){
}

void t_sdk_api_httprequest_HttpRequestBase::m_OnOpen(bbString l_req,bbString l_url){
  this->m__0req=l_req;
  this->m__0url=l_url;
  this->m_SetReadyState(t_sdk_api_httprequest_ReadyState(1));
}

void t_sdk_api_httprequest_HttpRequestBase::m_OnCancel(){
}

void t_sdk_api_httprequest_HttpRequestBase::m_Cancel(){
  this->m_OnCancel();
}

void mx2_sdk_api_2protocoles_2httprequest_2httprequest_init_f(){
}
