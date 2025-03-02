
#include "sdk/sdk.buildv1.1.15/windows_debug_mx/include/sdk_api_2sounds_2portmidi_2nomidi.h"

void t_sdk_api_portmidi_PmDeviceInfo::dbEmit(){
  puts( "[sdk.api.portmidi.PmDeviceInfo]");
  bbDBEmit("structVersion",&m_structVersion);
  bbDBEmit("interf",&m_interf);
  bbDBEmit("name",&m_name);
  bbDBEmit("input",&m_input);
  bbDBEmit("output",&m_output);
  bbDBEmit("opened",&m_opened);
}
t_sdk_api_portmidi_PmDeviceInfo::~t_sdk_api_portmidi_PmDeviceInfo(){
}
bbString bbDBType(t_sdk_api_portmidi_PmDeviceInfo**){
  return "sdk.api.portmidi.PmDeviceInfo";
}
bbString bbDBValue(t_sdk_api_portmidi_PmDeviceInfo**p){
  return bbDBObjectValue(*p);
}

void t_sdk_api_portmidi_MidiDriver::gcMark(){
  bbGCMark(m_info);
}

void t_sdk_api_portmidi_MidiDriver::dbEmit(){
  puts( "[sdk.api.portmidi.MidiDriver]");
  bbDBEmit("deviceCount",&m_deviceCount);
  bbDBEmit("error",&m_error);
  bbDBEmit("errorText",&m_errorText);
  bbDBEmit("info",&m_info);
}
t_sdk_api_portmidi_MidiDriver::~t_sdk_api_portmidi_MidiDriver(){
}

void t_sdk_api_portmidi_MidiDriver::m_Sleep(bbDouble l_duration){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Sleep:Void(duration:monkey.types.Double)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/nomidi.monkey2"};
  t_sdk_api_portmidi_MidiDriver*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("duration",&l_duration);
}

void t_sdk_api_portmidi_MidiDriver::m_OutputMessages(bbInt l_index,bbInt* l_bytes,bbInt l_length){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"OutputMessages:Void(index:monkey.types.Int,bytes:monkey.types.Int Ptr,length:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/nomidi.monkey2"};
  t_sdk_api_portmidi_MidiDriver*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBLocal("bytes",&l_bytes);
  bbDBLocal("length",&l_length);
}

void t_sdk_api_portmidi_MidiDriver::m_OutputMessage(bbInt l_index,bbInt l_data){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"OutputMessage:Void(index:monkey.types.Int,data:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/nomidi.monkey2"};
  t_sdk_api_portmidi_MidiDriver*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBLocal("data",&l_data);
}

bbInt t_sdk_api_portmidi_MidiDriver::m_OpenOutput(bbInt l_index){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"OpenOutput:sdk.api.portmidi.Handle(index:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/nomidi.monkey2"};
  t_sdk_api_portmidi_MidiDriver*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBStmt(118786);
  return bbInt(0);
}

bbInt t_sdk_api_portmidi_MidiDriver::m_OpenInput(bbInt l_index){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"OpenInput:sdk.api.portmidi.Handle(index:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/nomidi.monkey2"};
  t_sdk_api_portmidi_MidiDriver*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBStmt(172034);
  return bbInt(0);
}

bbDouble t_sdk_api_portmidi_MidiDriver::m_MidiEventTimestamp(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"MidiEventTimestamp:monkey.types.Double()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/nomidi.monkey2"};
  t_sdk_api_portmidi_MidiDriver*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(237570);
  return 0.0;
}

bbInt t_sdk_api_portmidi_MidiDriver::m_MidiEventMessage(void* l_buffer,bbInt l_length){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"MidiEventMessage:monkey.types.Int(buffer:Void Ptr,length:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/nomidi.monkey2"};
  t_sdk_api_portmidi_MidiDriver*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("buffer",&l_buffer);
  bbDBLocal("length",&l_length);
  bbDBStmt(221186);
  return bbInt(0);
}

bbInt t_sdk_api_portmidi_MidiDriver::m_MidiEventData(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"MidiEventData:monkey.types.Int()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/nomidi.monkey2"};
  t_sdk_api_portmidi_MidiDriver*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(204802);
  return bbInt(0);
}

bbBool t_sdk_api_portmidi_MidiDriver::m_HasInput(bbInt l_handle){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"HasInput:monkey.types.Bool(handle:sdk.api.portmidi.Handle)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/nomidi.monkey2"};
  t_sdk_api_portmidi_MidiDriver*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("handle",&l_handle);
  bbDBStmt(188418);
  return false;
}

void t_sdk_api_portmidi_MidiDriver::m_GetInfo(bbInt l_index){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"GetInfo:Void(index:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/nomidi.monkey2"};
  t_sdk_api_portmidi_MidiDriver*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
}

void t_sdk_api_portmidi_MidiDriver::m_CloseOutput(bbInt l_handle){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"CloseOutput:Void(handle:sdk.api.portmidi.Handle)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/nomidi.monkey2"};
  t_sdk_api_portmidi_MidiDriver*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("handle",&l_handle);
}

void t_sdk_api_portmidi_MidiDriver::m_CloseInput(bbInt l_handle){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"CloseInput:Void(handle:sdk.api.portmidi.Handle)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/nomidi.monkey2"};
  t_sdk_api_portmidi_MidiDriver*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("handle",&l_handle);
}
bbString bbDBType(t_sdk_api_portmidi_MidiDriver**){
  return "sdk.api.portmidi.MidiDriver";
}
bbString bbDBValue(t_sdk_api_portmidi_MidiDriver**p){
  return bbDBObjectValue(*p);
}

void mx2_sdk_api_2sounds_2portmidi_2nomidi_init_f(){
}
