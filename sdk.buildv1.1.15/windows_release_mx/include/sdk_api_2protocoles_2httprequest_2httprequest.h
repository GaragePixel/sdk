
#ifndef MX2_SDK_API_2PROTOCOLES_2HTTPREQUEST_2HTTPREQUEST_H
#define MX2_SDK_API_2PROTOCOLES_2HTTPREQUEST_2HTTPREQUEST_H

#include <bbmonkey.h>

#include "monkey/monkey.buildv1.1.15/windows_release_mx/include/monkey_types.h"

BB_ENUM(t_sdk_api_httprequest_ReadyState)

BB_CLASS(t_sdk_api_httprequest_HttpRequestBase)

struct t_sdk_api_httprequest_HttpRequestBase : public bbObject{
  typedef t_sdk_api_httprequest_HttpRequestBase *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_sdk_api_httprequest_HttpRequestBase";}

  bbFunction<void()> m_ReadyStateChanged{};
  t_sdk_api_httprequest_ReadyState m__0readyState{};
  bbFloat m__0timeout{60.0f};
  bbString m__0response{};
  bbInt m__0status{-1};
  bbString m__0req{};
  bbString m__0url{};

  void gcMark();

  t_sdk_api_httprequest_HttpRequestBase();
  ~t_sdk_api_httprequest_HttpRequestBase();

  void m_Timeout(bbFloat l_timeout);

  bbFloat m_Timeout(){
    return this->m__0timeout;
  }

  bbInt m_Status(){
    return this->m__0status;
  }
  void m_SetReadyState(t_sdk_api_httprequest_ReadyState l_readyState);
  void m_SetHeader(bbString l_header,bbString l_value);
  void m_Send(bbString l_text);

  bbString m_ResponseText(){
    return this->m__0response;
  }
  t_sdk_api_httprequest_ReadyState m_ReadyState();
  void m_Open(bbString l_req,bbString l_url);
  virtual void m_OnSetHeader(bbString l_header,bbString l_value);
  virtual void m_OnSend(bbString l_text)=0;
  virtual void m_OnOpen(bbString l_req,bbString l_url);
  virtual void m_OnCancel();
  void m_Cancel();
};

#endif
