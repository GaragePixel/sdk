
#include "sdk/sdk.buildv1.1.15/windows_debug_mx/include/sdk_api_2sounds_2portmidi_2portmidi.h"

#include "sdk/sdk.buildv1.1.15/windows_debug_mx/include/sdk_api_2sounds_2portmidi_2nomidi.h"
#include "sdk/sdk.buildv1.1.15/windows_debug_mx/include/sdk_stdlib_collections_2map.h"
#include "stdlib/stdlib.buildv1.1.15/windows_debug_mx/include/stdlib_collections_2stack.h"

void t_sdk_api_portmidi_PortMidi::init(){
  m_version=bbString(L"0.02",4);
  m_inputDevices=bbGCNew<t_stdlib_collections_Stack_1i>();
  m_outputDevices=bbGCNew<t_stdlib_collections_Stack_1i>();
  m_openInputs=bbGCNew<t_stdlib_collections_Map_1ii>();
  m_openOutputs=bbGCNew<t_stdlib_collections_Map_1ii>();
  m_sysexBuffer=bbArray<bbByte>(65536);
}

void t_sdk_api_portmidi_PortMidi::gcMark(){
  bbGCMark(m_driver);
  bbGCMark(m_inputDevices);
  bbGCMark(m_outputDevices);
  bbGCMark(m_openInputs);
  bbGCMark(m_openOutputs);
  bbGCMark(m_sysexBuffer);
}

void t_sdk_api_portmidi_PortMidi::dbEmit(){
  puts( "[sdk.api.portmidi.PortMidi]");
  bbDBEmit("version",&m_version);
  bbDBEmit("deviceCount",&m_deviceCount);
  bbDBEmit("driver",&m_driver);
  bbDBEmit("inputDevices",&m_inputDevices);
  bbDBEmit("outputDevices",&m_outputDevices);
  bbDBEmit("openInputs",&m_openInputs);
  bbDBEmit("openOutputs",&m_openOutputs);
  bbDBEmit("sysexBuffer",&m_sysexBuffer);
}

t_sdk_api_portmidi_PortMidi::t_sdk_api_portmidi_PortMidi(){
  init();
  bbDBFrame db_f{"new:Void()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/portmidi.monkey2"};
  t_sdk_api_portmidi_PortMidi*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(208898);
  this->m_driver=bbGCNew<t_sdk_api_portmidi_MidiDriver>();
  bbDBStmt(212994);
  bb_print((bbString(L"countDevices=",13)+bbString(this->m_driver.get()->m_deviceCount)));
  bbDBStmt(217090);
  {
    bbDBLoop db_loop;
    bbInt l_id=bbInt(0);
    bbDBLocal("id",&l_id);
    for(;(l_id<this->m_driver.get()->m_deviceCount);l_id+=1){
      struct f2_t : public bbGCFrame{
        t_sdk_api_portmidi_MidiDriver* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f2{};
      bbDBBlock db_blk;
      bbDBStmt(221187);
      (f2.t0=this->m_driver.get())->m_GetInfo(l_id);
      bbDBStmt(225283);
      if(bbBool(this->m_driver.get()->m_info.get()->m_input)){
        struct f3_t : public bbGCFrame{
          t_stdlib_collections_Stack_1i* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f3{};
        bbDBBlock db_blk;
        (f3.t0=this->m_inputDevices.get())->m_Push(l_id);
      }
      bbDBStmt(229379);
      if(bbBool(this->m_driver.get()->m_info.get()->m_output)){
        struct f3_t : public bbGCFrame{
          t_stdlib_collections_Stack_1i* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f3{};
        bbDBBlock db_blk;
        (f3.t0=this->m_outputDevices.get())->m_Push(l_id);
      }
    }
  }
}
t_sdk_api_portmidi_PortMidi::~t_sdk_api_portmidi_PortMidi(){
}

void t_sdk_api_portmidi_PortMidi::m_Sleep(bbDouble l_seconds){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_sdk_api_portmidi_MidiDriver* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Sleep:Void(seconds:monkey.types.Double)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/portmidi.monkey2"};
  t_sdk_api_portmidi_PortMidi*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("seconds",&l_seconds);
  bbDBStmt(180226);
  (f0.t0=this->m_driver.get())->m_Sleep(l_seconds);
}

void t_sdk_api_portmidi_PortMidi::m_SendMessages(bbInt l_index,bbArray<bbInt> l_data){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Stack_1i* t0{};
    t_sdk_api_portmidi_MidiDriver* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"SendMessages:Void(index:monkey.types.Int,data:monkey.types.Int[])","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/portmidi.monkey2"};
  t_sdk_api_portmidi_PortMidi*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBLocal("data",&l_data);
  bbDBStmt(520200);
  bbInt l_id=(f0.t0=this->m_outputDevices.get())->m_Get(l_index);
  bbDBLocal("id",&l_id);
  bbDBStmt(524290);
  (f0.t1=this->m_driver.get())->m_OutputMessages(l_id,l_data.data(),l_data.length());
}

void t_sdk_api_portmidi_PortMidi::m_SendMessage(bbInt l_index,bbInt l_data){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Stack_1i* t0{};
    t_sdk_api_portmidi_MidiDriver* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"SendMessage:Void(index:monkey.types.Int,data:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/portmidi.monkey2"};
  t_sdk_api_portmidi_PortMidi*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBLocal("data",&l_data);
  bbDBStmt(491528);
  bbInt l_id=(f0.t0=this->m_outputDevices.get())->m_Get(l_index);
  bbDBLocal("id",&l_id);
  bbDBStmt(495618);
  (f0.t1=this->m_driver.get())->m_OutputMessage(l_id,l_data);
}

bbString t_sdk_api_portmidi_PortMidi::m_OutputName(bbInt l_index){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Stack_1i* t0{};
    t_sdk_api_portmidi_MidiDriver* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"OutputName:monkey.types.String(index:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/portmidi.monkey2"};
  t_sdk_api_portmidi_PortMidi*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBStmt(376840);
  bbInt l_id=(f0.t0=this->m_inputDevices.get())->m_Get(l_index);
  bbDBLocal("id",&l_id);
  bbDBStmt(380930);
  (f0.t1=this->m_driver.get())->m_GetInfo(l_id);
  bbDBStmt(385032);
  bbString l_interf=bbString::fromCString(((void*)(this->m_driver.get()->m_info.get()->m_interf)));
  bbDBLocal("interf",&l_interf);
  bbDBStmt(389129);
  bbString l_name=bbString::fromCString(((void*)(this->m_driver.get()->m_info.get()->m_name)));
  bbDBLocal("name",&l_name);
  bbDBStmt(393218);
  return l_name;
}

void t_sdk_api_portmidi_PortMidi::m_OpenOutput(bbInt l_index){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Stack_1i* t0{};
    t_sdk_api_portmidi_MidiDriver* t1{};
    t_stdlib_collections_Map_1ii* t2{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
      bbGCMark(t2);
    }
  }f0{};
  bbDBFrame db_f{"OpenOutput:Void(index:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/portmidi.monkey2"};
  t_sdk_api_portmidi_PortMidi*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBStmt(454664);
  bbInt l_id=(f0.t0=this->m_outputDevices.get())->m_Get(l_index);
  bbDBLocal("id",&l_id);
  bbDBStmt(458760);
  bbInt l_output=(f0.t1=this->m_driver.get())->m_OpenOutput(l_id);
  bbDBLocal("output",&l_output);
  bbDBStmt(462850);
  bb_print((((((bbString(L"PortMidi Open output",20)+bbString(l_index))+bbString(L"@",1))+bbString(l_id))+bbString(L"=",1))+bbString(l_output)));
  bbDBStmt(466946);
  (f0.t2=this->m_openOutputs.get())->m__idxeq(l_index,l_id);
}

void t_sdk_api_portmidi_PortMidi::m_OpenInput(bbInt l_index){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Stack_1i* t0{};
    t_sdk_api_portmidi_MidiDriver* t1{};
    t_stdlib_collections_Map_1ii* t2{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
      bbGCMark(t2);
    }
  }f0{};
  bbDBFrame db_f{"OpenInput:Void(index:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/portmidi.monkey2"};
  t_sdk_api_portmidi_PortMidi*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBStmt(417800);
  bbInt l_id=(f0.t0=this->m_inputDevices.get())->m_Get(l_index);
  bbDBLocal("id",&l_id);
  bbDBStmt(421896);
  bbInt l_input=(f0.t1=this->m_driver.get())->m_OpenInput(l_id);
  bbDBLocal("input",&l_input);
  bbDBStmt(425986);
  bb_print((((((bbString(L"PortMidi Open input",19)+bbString(l_index))+bbString(L"@",1))+bbString(l_id))+bbString(L"=",1))+bbString(l_input)));
  bbDBStmt(430082);
  (f0.t2=this->m_openInputs.get())->m__idxeq(l_index,l_id);
}

bbString t_sdk_api_portmidi_PortMidi::m_InputName(bbInt l_index){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Stack_1i* t0{};
    t_sdk_api_portmidi_MidiDriver* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"InputName:monkey.types.String(index:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/portmidi.monkey2"};
  t_sdk_api_portmidi_PortMidi*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBStmt(335880);
  bbInt l_id=(f0.t0=this->m_inputDevices.get())->m_Get(l_index);
  bbDBLocal("id",&l_id);
  bbDBStmt(339970);
  (f0.t1=this->m_driver.get())->m_GetInfo(l_id);
  bbDBStmt(344072);
  bbString l_interf=bbString::fromCString(((void*)(this->m_driver.get()->m_info.get()->m_interf)));
  bbDBLocal("interf",&l_interf);
  bbDBStmt(348169);
  bbString l_name=bbString::fromCString(((void*)(this->m_driver.get()->m_info.get()->m_name)));
  bbDBLocal("name",&l_name);
  bbDBStmt(352258);
  return l_name;
}

bbInt t_sdk_api_portmidi_PortMidi::m_HasEvent(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"HasEvent:monkey.types.Int()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/portmidi.monkey2"};
  t_sdk_api_portmidi_PortMidi*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(622594);
  {
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Map_1ii_KeyIterator l_0{};
      t_stdlib_collections_Map_1ii* t0{};
      t_stdlib_collections_Map_1ii_MapKeys t1{};
      void gcMark(){
        bbGCMark(l_0);
        bbGCMark(t0);
        bbGCMark(t1);
      }
    }f1{};
    bbDBLoop db_loop;
    f1.l_0=(f1.t1=(f1.t0=this->m_openInputs.get())->m_Keys()).m_All();
    bbDBLocal("0",&f1.l_0);
    for(;!f1.l_0.m_AtEnd();f1.l_0.m_Bump()){
      struct f2_t : public bbGCFrame{
        t_stdlib_collections_Map_1ii* t0{};
        t_sdk_api_portmidi_MidiDriver* t1{};
        void gcMark(){
          bbGCMark(t0);
          bbGCMark(t1);
        }
      }f2{};
      bbDBBlock db_blk;
      bbInt l_index=f1.l_0.m_Current();
      bbDBLocal("index",&l_index);
      bbDBStmt(626697);
      bbInt l_id=(f2.t0=this->m_openInputs.get())->m__idx(l_index);
      bbDBLocal("id",&l_id);
      bbDBStmt(630787);
      if((f2.t1=this->m_driver.get())->m_HasInput(l_id)){
        bbDBBlock db_blk;
        return 1;
      }
    }
  }
  bbDBStmt(638978);
  return bbInt(0);
}

bbDouble t_sdk_api_portmidi_PortMidi::m_EventTime(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_sdk_api_portmidi_MidiDriver* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"EventTime:monkey.types.Double()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/portmidi.monkey2"};
  t_sdk_api_portmidi_PortMidi*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(716802);
  return (f0.t0=this->m_driver.get())->m_MidiEventTimestamp();
}

bbArray<bbUByte> t_sdk_api_portmidi_PortMidi::m_EventDataBytes(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"EventDataBytes:monkey.types.Ubyte[]()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/portmidi.monkey2"};
  t_sdk_api_portmidi_PortMidi*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(688136);
  bbInt l_i=this->m_EventData();
  bbDBLocal("i",&l_i);
  bbDBStmt(692226);
  return bbArray<bbUByte>({bbUByte((l_i&255)),bbUByte(((l_i>>8)&255)),bbUByte(((l_i>>16)&255)),bbUByte(((l_i>>24)&255))},4);
}

bbInt t_sdk_api_portmidi_PortMidi::m_EventData(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_sdk_api_portmidi_MidiDriver* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"EventData:monkey.types.Int()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/portmidi.monkey2"};
  t_sdk_api_portmidi_PortMidi*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(663554);
  return (f0.t0=this->m_driver.get())->m_MidiEventData();
}

bbArray<bbByte> t_sdk_api_portmidi_PortMidi::m_EventContent(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_sdk_api_portmidi_MidiDriver* t0{};
    bbArray<bbByte> t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"EventContent:monkey.types.Byte[]()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/portmidi.monkey2"};
  t_sdk_api_portmidi_PortMidi*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(749576);
  bbByte* l_b=(&this->m_sysexBuffer[bbInt(0)]);
  bbDBLocal("b",&l_b);
  bbDBStmt(753672);
  bbInt l_n=(f0.t0=this->m_driver.get())->m_MidiEventMessage(((void*)(l_b)),65536);
  bbDBLocal("n",&l_n);
  bbDBStmt(757762);
  return (f0.t1=this->m_sysexBuffer).slice(bbInt(0),l_n);
}

void t_sdk_api_portmidi_PortMidi::m_CloseOutput(bbInt l_index){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii* t0{};
    t_sdk_api_portmidi_MidiDriver* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"CloseOutput:Void(index:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/portmidi.monkey2"};
  t_sdk_api_portmidi_PortMidi*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBStmt(585736);
  bbInt l_id=(f0.t0=this->m_openOutputs.get())->m__idx(l_index);
  bbDBLocal("id",&l_id);
  bbDBStmt(589826);
  (f0.t1=this->m_driver.get())->m_CloseOutput(l_id);
  bbDBStmt(593922);
  bb_print((((bbString(L"PortMidi Close output",21)+bbString(l_index))+bbString(L"@",1))+bbString(l_id)));
  bbDBStmt(598018);
  (f0.t0=this->m_openOutputs.get())->m_Remove(l_index);
}

void t_sdk_api_portmidi_PortMidi::m_CloseInput(bbInt l_index){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii* t0{};
    t_sdk_api_portmidi_MidiDriver* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"CloseInput:Void(index:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/portmidi.monkey2"};
  t_sdk_api_portmidi_PortMidi*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBStmt(548872);
  bbInt l_id=(f0.t0=this->m_openInputs.get())->m__idx(l_index);
  bbDBLocal("id",&l_id);
  bbDBStmt(552962);
  (f0.t1=this->m_driver.get())->m_CloseInput(l_id);
  bbDBStmt(557058);
  bb_print((((bbString(L"PortMidi Close input",20)+bbString(l_index))+bbString(L"@",1))+bbString(l_id)));
  bbDBStmt(561154);
  (f0.t0=this->m_openInputs.get())->m_Remove(l_index);
}

void t_sdk_api_portmidi_PortMidi::m_CloseAll(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Stack_1i* l_indexes{};
    void gcMark(){
      bbGCMark(l_indexes);
    }
  }f0{};
  bbDBFrame db_f{"CloseAll:Void()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/api/sounds/portmidi/portmidi.monkey2"};
  t_sdk_api_portmidi_PortMidi*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(258056);
  f0.l_indexes=bbGCNew<t_stdlib_collections_Stack_1i>();
  bbDBLocal("indexes",&f0.l_indexes);
  bbDBStmt(262146);
  {
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Map_1ii_KeyIterator l_0{};
      t_stdlib_collections_Map_1ii* t0{};
      t_stdlib_collections_Map_1ii_MapKeys t1{};
      void gcMark(){
        bbGCMark(l_0);
        bbGCMark(t0);
        bbGCMark(t1);
      }
    }f1{};
    bbDBLoop db_loop;
    f1.l_0=(f1.t1=(f1.t0=this->m_openInputs.get())->m_Keys()).m_All();
    bbDBLocal("0",&f1.l_0);
    for(;!f1.l_0.m_AtEnd();f1.l_0.m_Bump()){
      bbDBBlock db_blk;
      bbInt l_in=f1.l_0.m_Current();
      bbDBLocal("in",&l_in);
      bbDBStmt(266243);
      f0.l_indexes->m_Push(l_in);
    }
  }
  bbDBStmt(274434);
  {
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Stack_1i_Iterator l_1{};
      void gcMark(){
        bbGCMark(l_1);
      }
    }f1{};
    bbDBLoop db_loop;
    f1.l_1=f0.l_indexes->m_All();
    bbDBLocal("1",&f1.l_1);
    for(;!f1.l_1.m_AtEnd();f1.l_1.m_Bump()){
      bbDBBlock db_blk;
      bbInt l_index=f1.l_1.m_Current();
      bbDBLocal("index",&l_index);
      bbDBStmt(278531);
      this->m_CloseInput(l_index);
    }
  }
  bbDBStmt(286722);
  f0.l_indexes->m_Clear();
  bbDBStmt(290818);
  {
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Map_1ii_KeyIterator l_2{};
      t_stdlib_collections_Map_1ii* t0{};
      t_stdlib_collections_Map_1ii_MapKeys t1{};
      void gcMark(){
        bbGCMark(l_2);
        bbGCMark(t0);
        bbGCMark(t1);
      }
    }f1{};
    bbDBLoop db_loop;
    f1.l_2=(f1.t1=(f1.t0=this->m_openOutputs.get())->m_Keys()).m_All();
    bbDBLocal("2",&f1.l_2);
    for(;!f1.l_2.m_AtEnd();f1.l_2.m_Bump()){
      bbDBBlock db_blk;
      bbInt l_out=f1.l_2.m_Current();
      bbDBLocal("out",&l_out);
      bbDBStmt(294915);
      f0.l_indexes->m_Push(l_out);
    }
  }
  bbDBStmt(303106);
  {
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Stack_1i_Iterator l_3{};
      void gcMark(){
        bbGCMark(l_3);
      }
    }f1{};
    bbDBLoop db_loop;
    f1.l_3=f0.l_indexes->m_All();
    bbDBLocal("3",&f1.l_3);
    for(;!f1.l_3.m_AtEnd();f1.l_3.m_Bump()){
      bbDBBlock db_blk;
      bbInt l_index=f1.l_3.m_Current();
      bbDBLocal("index",&l_index);
      bbDBStmt(307203);
      this->m_CloseOutput(l_index);
    }
  }
}
bbString bbDBType(t_sdk_api_portmidi_PortMidi**){
  return "sdk.api.portmidi.PortMidi";
}
bbString bbDBValue(t_sdk_api_portmidi_PortMidi**p){
  return bbDBObjectValue(*p);
}

void mx2_sdk_api_2sounds_2portmidi_2portmidi_init_f(){
}
