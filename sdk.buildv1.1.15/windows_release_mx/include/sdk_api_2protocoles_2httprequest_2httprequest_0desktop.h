
#ifndef MX2_SDK_API_2PROTOCOLES_2HTTPREQUEST_2HTTPREQUEST_0DESKTOP_H
#define MX2_SDK_API_2PROTOCOLES_2HTTPREQUEST_2HTTPREQUEST_0DESKTOP_H

#include <bbmonkey.h>

#include "sdk/sdk.buildv1.1.15/windows_release_mx/include/sdk_api_2protocoles_2httprequest_2httprequest.h"
#include "stdlib/stdlib.buildv1.1.15/windows_release_mx/include/stdlib_system_2process_2process.h"

BB_CLASS(t_sdk_api_httprequest_HttpRequest)

void g_sdk_api_httprequest_Hello();

struct t_sdk_api_httprequest_HttpRequest : public t_sdk_api_httprequest_HttpRequestBase{
  typedef t_sdk_api_httprequest_HttpRequest *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_sdk_api_httprequest_HttpRequest";}

  bbGCVar<bbProcess> m__0process{};
  bbString m__0tmp{};

  void gcMark();

  t_sdk_api_httprequest_HttpRequest();
  ~t_sdk_api_httprequest_HttpRequest();

  void m_OnSend(bbString l_text);
  void m_OnCancel();
};

#endif
