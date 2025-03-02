
#include "sdk/sdk.buildv1.1.15/windows_debug_mx/include/sdk_api_2protocoles_2httprequest_2httprequest_0desktop.h"

extern bbBool g_stdlib_system_io_filesystem_DeleteFile(bbString l_path);
extern bbString g_stdlib_system_io_filesystem_GetEnv(bbString l_name,bbString l_defaultValue);
extern bbString g_stdlib_stringio_LoadString(bbString l_path,bbBool l_fixeols);
void g_sdk_api_httprequest_Hello(){
  bbDBFrame db_f{"Hello:Void()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/protocoles/httprequest/httprequest_desktop.monkey2"};
}

void t_sdk_api_httprequest_HttpRequest::gcMark(){
  t_sdk_api_httprequest_HttpRequestBase::gcMark();
  bbGCMark(m__0process);
}

void t_sdk_api_httprequest_HttpRequest::dbEmit(){
  t_sdk_api_httprequest_HttpRequestBase::dbEmit();
  puts( "[sdk.api.httprequest.HttpRequest]");
  bbDBEmit("_process",&m__0process);
  bbDBEmit("_tmp",&m__0tmp);
}

t_sdk_api_httprequest_HttpRequest::t_sdk_api_httprequest_HttpRequest():t_sdk_api_httprequest_HttpRequestBase(){
  bbDBFrame db_f{"new:Void()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/protocoles/httprequest/httprequest_desktop.monkey2"};
  t_sdk_api_httprequest_HttpRequest*self=this;
  bbDBLocal("Self",&self);
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
  bbDBFrame db_f{"OnSend:Void(text:monkey.types.String)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/protocoles/httprequest/httprequest_desktop.monkey2"};
  t_sdk_api_httprequest_HttpRequest*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("text",&l_text);
  bbDBStmt(65545);
  static bbInt g_id=bbInt(0);
  bbDBStmt(73730);
  g_id+=1;
  bbDBStmt(86018);
  this->m__0tmp=(((g_stdlib_system_io_filesystem_GetEnv(bbString(L"TMP",3),bbString{})+bbString(L"\\mx2_wget-",10))+bbString(g_id))+bbString(L".txt",4));
  bbDBStmt(110600);
  bbString l_post_0data=((this->m__0req==bbString(L"POST",4)) ? ((bbString(L" -post-data=\"",13)+l_text)+bbString(L"\"",1)) : bbString{});
  bbDBLocal("post_data",&l_post_0data);
  bbDBStmt(114696);
  bbString l_cmd=(((((((((bbString(L"wget -q -T ",11)+bbString(this->m__0timeout))+bbString(L" -O \"",5))+this->m__0tmp)+bbString(L"\" --method=",11))+this->m__0req)+l_post_0data)+bbString(L" \"",2))+this->m__0url)+bbString(L"\"",1));
  bbDBLocal("cmd",&l_cmd);
  bbDBStmt(135170);
  this->m__0process=bbGCNew<bbProcess>();
  bbDBStmt(143362);
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
      bbDBFrame db_f{"?????:Void()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/protocoles/httprequest/httprequest_desktop.monkey2"};
      bbDBStmt(151555);
      if(!bbBool(l_self->m__0process.get())){
        bbDBBlock db_blk;
        return;
      }
      bbDBStmt(159747);
      if(((f1.t0=l_self->m__0process.get())->exitCode()==bbInt(0))){
        bbDBBlock db_blk;
        bbDBStmt(167940);
        l_self->m__0response=g_stdlib_stringio_LoadString(l_self->m__0tmp,false);
        bbDBStmt(176132);
        g_stdlib_system_io_filesystem_DeleteFile(l_self->m__0tmp);
        bbDBStmt(184324);
        l_self->m__0status=200;
        bbDBStmt(192516);
        l_self->m__0process=((bbProcess*)0);
        bbDBStmt(200708);
        l_self->m_SetReadyState(t_sdk_api_httprequest_ReadyState(4));
      }else{
        bbDBStmt(208899);
        bbDBBlock db_blk;
        bbDBStmt(217092);
        g_stdlib_system_io_filesystem_DeleteFile(l_self->m__0tmp);
        bbDBStmt(225284);
        l_self->m__0status=404;
        bbDBStmt(233476);
        l_self->m__0process=((bbProcess*)0);
        bbDBStmt(241668);
        l_self->m_SetReadyState(t_sdk_api_httprequest_ReadyState(5));
      }
    }
    void gcMark(){
      bbGCMark(l_self);
    }
  };
  this->m__0process.get()->finished=bbFunction<void()>(new lambda0(this));
  bbDBStmt(262146);
  this->m_SetReadyState(t_sdk_api_httprequest_ReadyState(3));
  bbDBStmt(270338);
  (f0.t0=this->m__0process.get())->start(l_cmd);
}

void t_sdk_api_httprequest_HttpRequest::m_OnCancel(){
  struct f0_t : public bbGCFrame{
    bbProcess* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"OnCancel:Void()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/protocoles/httprequest/httprequest_desktop.monkey2"};
  t_sdk_api_httprequest_HttpRequest*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(290818);
  if(!bbBool(this->m__0process.get())){
    bbDBBlock db_blk;
    return;
  }
  bbDBStmt(299010);
  g_stdlib_system_io_filesystem_DeleteFile(this->m__0tmp);
  bbDBStmt(307202);
  (f0.t0=this->m__0process.get())->terminate();
  bbDBStmt(315394);
  this->m__0process=((bbProcess*)0);
  bbDBStmt(323586);
  this->m__0status=-1;
  bbDBStmt(331778);
  this->m_SetReadyState(t_sdk_api_httprequest_ReadyState(5));
}
bbString bbDBType(t_sdk_api_httprequest_HttpRequest**){
  return "sdk.api.httprequest.HttpRequest";
}
bbString bbDBValue(t_sdk_api_httprequest_HttpRequest**p){
  return bbDBObjectValue(*p);
}

void mx2_sdk_api_2protocoles_2httprequest_2httprequest_0desktop_init_f(){
}
