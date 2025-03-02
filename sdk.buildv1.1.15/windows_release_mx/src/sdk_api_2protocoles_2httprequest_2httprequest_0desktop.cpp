
#include "sdk/sdk.buildv1.1.15/windows_release_mx/include/sdk_api_2protocoles_2httprequest_2httprequest_0desktop.h"

extern bbBool g_stdlib_system_io_filesystem_DeleteFile(bbString l_path);
extern bbString g_stdlib_system_io_filesystem_GetEnv(bbString l_name,bbString l_defaultValue);
extern bbString g_stdlib_stringio_LoadString(bbString l_path,bbBool l_fixeols);
void g_sdk_api_httprequest_Hello(){
}

void t_sdk_api_httprequest_HttpRequest::gcMark(){
  t_sdk_api_httprequest_HttpRequestBase::gcMark();
  bbGCMark(m__0process);
}

t_sdk_api_httprequest_HttpRequest::t_sdk_api_httprequest_HttpRequest():t_sdk_api_httprequest_HttpRequestBase(){
}
t_sdk_api_httprequest_HttpRequest::~t_sdk_api_httprequest_HttpRequest(){
}

void t_sdk_api_httprequest_HttpRequest::m_OnSend(bbString l_text){
  struct f0_t : public bbGCFrame{
    bbProcess* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  static bbInt g_id=bbInt(0);
  g_id+=1;
  this->m__0tmp=(((g_stdlib_system_io_filesystem_GetEnv(bbString(L"TMP",3),bbString{})+bbString(L"\\mx2_wget-",10))+bbString(g_id))+bbString(L".txt",4));
  bbString l_post_0data=((this->m__0req==bbString(L"POST",4)) ? ((bbString(L" -post-data=\"",13)+l_text)+bbString(L"\"",1)) : bbString{});
  bbString l_cmd=(((((((((bbString(L"wget -q -T ",11)+bbString(this->m__0timeout))+bbString(L" -O \"",5))+this->m__0tmp)+bbString(L"\" --method=",11))+this->m__0req)+l_post_0data)+bbString(L" \"",2))+this->m__0url)+bbString(L"\"",1));
  this->m__0process=bbGCNew<bbProcess>();
  struct lambda0 : public bbFunction<void()>::Rep{
    t_sdk_api_httprequest_HttpRequest* l_self;
    lambda0(t_sdk_api_httprequest_HttpRequest* l_self):l_self(l_self){
    }
    void invoke(){
      struct f1_t : public bbGCFrame{
        bbProcess* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      if(!bbBool(l_self->m__0process.get())){
        return;
      }
      if(((f1.t0=l_self->m__0process.get())->exitCode()==bbInt(0))){
        l_self->m__0response=g_stdlib_stringio_LoadString(l_self->m__0tmp,false);
        g_stdlib_system_io_filesystem_DeleteFile(l_self->m__0tmp);
        l_self->m__0status=200;
        l_self->m__0process=((bbProcess*)0);
        l_self->m_SetReadyState(t_sdk_api_httprequest_ReadyState(4));
      }else{
        g_stdlib_system_io_filesystem_DeleteFile(l_self->m__0tmp);
        l_self->m__0status=404;
        l_self->m__0process=((bbProcess*)0);
        l_self->m_SetReadyState(t_sdk_api_httprequest_ReadyState(5));
      }
    }
    void gcMark(){
      bbGCMark(l_self);
    }
  };
  this->m__0process.get()->finished=bbFunction<void()>(new lambda0(this));
  this->m_SetReadyState(t_sdk_api_httprequest_ReadyState(3));
  (f0.t0=this->m__0process.get())->start(l_cmd);
}

void t_sdk_api_httprequest_HttpRequest::m_OnCancel(){
  struct f0_t : public bbGCFrame{
    bbProcess* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  if(!bbBool(this->m__0process.get())){
    return;
  }
  g_stdlib_system_io_filesystem_DeleteFile(this->m__0tmp);
  (f0.t0=this->m__0process.get())->terminate();
  this->m__0process=((bbProcess*)0);
  this->m__0status=-1;
  this->m_SetReadyState(t_sdk_api_httprequest_ReadyState(5));
}

void mx2_sdk_api_2protocoles_2httprequest_2httprequest_0desktop_init_f(){
}
