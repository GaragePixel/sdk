
#include "sdk/sdk.buildv1.1.15/windows_release_mx/include/sdk_api_2sounds_2portmidi_2portmidi.h"

#include "sdk/sdk.buildv1.1.15/windows_release_mx/include/sdk_api_2sounds_2portmidi_2nomidi.h"
#include "sdk/sdk.buildv1.1.15/windows_release_mx/include/sdk_stdlib_collections_2map.h"
#include "stdlib/stdlib.buildv1.1.15/windows_release_mx/include/stdlib_collections_2stack.h"

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

t_sdk_api_portmidi_PortMidi::t_sdk_api_portmidi_PortMidi(){
  init();
  this->m_driver=bbGCNew<t_sdk_api_portmidi_MidiDriver>();
  bb_print((bbString(L"countDevices=",13)+bbString(this->m_driver.get()->m_deviceCount)));
  {
    bbInt l_id=bbInt(0);
    for(;(l_id<this->m_driver.get()->m_deviceCount);l_id+=1){
      struct f2_t : public bbGCFrame{
        t_sdk_api_portmidi_MidiDriver* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f2{};
      (f2.t0=this->m_driver.get())->m_GetInfo(l_id);
      if(bbBool(this->m_driver.get()->m_info.get()->m_input)){
        struct f3_t : public bbGCFrame{
          t_stdlib_collections_Stack_1i* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f3{};
        (f3.t0=this->m_inputDevices.get())->m_Push(l_id);
      }
      if(bbBool(this->m_driver.get()->m_info.get()->m_output)){
        struct f3_t : public bbGCFrame{
          t_stdlib_collections_Stack_1i* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f3{};
        (f3.t0=this->m_outputDevices.get())->m_Push(l_id);
      }
    }
  }
}
t_sdk_api_portmidi_PortMidi::~t_sdk_api_portmidi_PortMidi(){
}

void t_sdk_api_portmidi_PortMidi::m_Sleep(bbDouble l_seconds){
  struct f0_t : public bbGCFrame{
    t_sdk_api_portmidi_MidiDriver* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  (f0.t0=this->m_driver.get())->m_Sleep(l_seconds);
}

void t_sdk_api_portmidi_PortMidi::m_SendMessages(bbInt l_index,bbArray<bbInt> l_data){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Stack_1i* t0{};
    t_sdk_api_portmidi_MidiDriver* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbInt l_id=(f0.t0=this->m_outputDevices.get())->m_Get(l_index);
  (f0.t1=this->m_driver.get())->m_OutputMessages(l_id,l_data.data(),l_data.length());
}

void t_sdk_api_portmidi_PortMidi::m_SendMessage(bbInt l_index,bbInt l_data){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Stack_1i* t0{};
    t_sdk_api_portmidi_MidiDriver* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbInt l_id=(f0.t0=this->m_outputDevices.get())->m_Get(l_index);
  (f0.t1=this->m_driver.get())->m_OutputMessage(l_id,l_data);
}

bbString t_sdk_api_portmidi_PortMidi::m_OutputName(bbInt l_index){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Stack_1i* t0{};
    t_sdk_api_portmidi_MidiDriver* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbInt l_id=(f0.t0=this->m_inputDevices.get())->m_Get(l_index);
  (f0.t1=this->m_driver.get())->m_GetInfo(l_id);
  bbString l_interf=bbString::fromCString(((void*)(this->m_driver.get()->m_info.get()->m_interf)));
  bbString l_name=bbString::fromCString(((void*)(this->m_driver.get()->m_info.get()->m_name)));
  return l_name;
}

void t_sdk_api_portmidi_PortMidi::m_OpenOutput(bbInt l_index){
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
  bbInt l_id=(f0.t0=this->m_outputDevices.get())->m_Get(l_index);
  bbInt l_output=(f0.t1=this->m_driver.get())->m_OpenOutput(l_id);
  bb_print((((((bbString(L"PortMidi Open output",20)+bbString(l_index))+bbString(L"@",1))+bbString(l_id))+bbString(L"=",1))+bbString(l_output)));
  (f0.t2=this->m_openOutputs.get())->m__idxeq(l_index,l_id);
}

void t_sdk_api_portmidi_PortMidi::m_OpenInput(bbInt l_index){
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
  bbInt l_id=(f0.t0=this->m_inputDevices.get())->m_Get(l_index);
  bbInt l_input=(f0.t1=this->m_driver.get())->m_OpenInput(l_id);
  bb_print((((((bbString(L"PortMidi Open input",19)+bbString(l_index))+bbString(L"@",1))+bbString(l_id))+bbString(L"=",1))+bbString(l_input)));
  (f0.t2=this->m_openInputs.get())->m__idxeq(l_index,l_id);
}

bbString t_sdk_api_portmidi_PortMidi::m_InputName(bbInt l_index){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Stack_1i* t0{};
    t_sdk_api_portmidi_MidiDriver* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbInt l_id=(f0.t0=this->m_inputDevices.get())->m_Get(l_index);
  (f0.t1=this->m_driver.get())->m_GetInfo(l_id);
  bbString l_interf=bbString::fromCString(((void*)(this->m_driver.get()->m_info.get()->m_interf)));
  bbString l_name=bbString::fromCString(((void*)(this->m_driver.get()->m_info.get()->m_name)));
  return l_name;
}

bbInt t_sdk_api_portmidi_PortMidi::m_HasEvent(){
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
    f1.l_0=(f1.t1=(f1.t0=this->m_openInputs.get())->m_Keys()).m_All();
    for(;!f1.l_0.m_AtEnd();f1.l_0.m_Bump()){
      struct f2_t : public bbGCFrame{
        t_stdlib_collections_Map_1ii* t0{};
        t_sdk_api_portmidi_MidiDriver* t1{};
        void gcMark(){
          bbGCMark(t0);
          bbGCMark(t1);
        }
      }f2{};
      bbInt l_index=f1.l_0.m_Current();
      bbInt l_id=(f2.t0=this->m_openInputs.get())->m__idx(l_index);
      if((f2.t1=this->m_driver.get())->m_HasInput(l_id)){
        return 1;
      }
    }
  }
  return bbInt(0);
}

bbDouble t_sdk_api_portmidi_PortMidi::m_EventTime(){
  struct f0_t : public bbGCFrame{
    t_sdk_api_portmidi_MidiDriver* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  return (f0.t0=this->m_driver.get())->m_MidiEventTimestamp();
}

bbArray<bbUByte> t_sdk_api_portmidi_PortMidi::m_EventDataBytes(){
  bbInt l_i=this->m_EventData();
  return bbArray<bbUByte>({bbUByte((l_i&255)),bbUByte(((l_i>>8)&255)),bbUByte(((l_i>>16)&255)),bbUByte(((l_i>>24)&255))},4);
}

bbInt t_sdk_api_portmidi_PortMidi::m_EventData(){
  struct f0_t : public bbGCFrame{
    t_sdk_api_portmidi_MidiDriver* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  return (f0.t0=this->m_driver.get())->m_MidiEventData();
}

bbArray<bbByte> t_sdk_api_portmidi_PortMidi::m_EventContent(){
  struct f0_t : public bbGCFrame{
    t_sdk_api_portmidi_MidiDriver* t0{};
    bbArray<bbByte> t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbByte* l_b=(&this->m_sysexBuffer[bbInt(0)]);
  bbInt l_n=(f0.t0=this->m_driver.get())->m_MidiEventMessage(((void*)(l_b)),65536);
  return (f0.t1=this->m_sysexBuffer).slice(bbInt(0),l_n);
}

void t_sdk_api_portmidi_PortMidi::m_CloseOutput(bbInt l_index){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii* t0{};
    t_sdk_api_portmidi_MidiDriver* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbInt l_id=(f0.t0=this->m_openOutputs.get())->m__idx(l_index);
  (f0.t1=this->m_driver.get())->m_CloseOutput(l_id);
  bb_print((((bbString(L"PortMidi Close output",21)+bbString(l_index))+bbString(L"@",1))+bbString(l_id)));
  (f0.t0=this->m_openOutputs.get())->m_Remove(l_index);
}

void t_sdk_api_portmidi_PortMidi::m_CloseInput(bbInt l_index){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii* t0{};
    t_sdk_api_portmidi_MidiDriver* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbInt l_id=(f0.t0=this->m_openInputs.get())->m__idx(l_index);
  (f0.t1=this->m_driver.get())->m_CloseInput(l_id);
  bb_print((((bbString(L"PortMidi Close input",20)+bbString(l_index))+bbString(L"@",1))+bbString(l_id)));
  (f0.t0=this->m_openInputs.get())->m_Remove(l_index);
}

void t_sdk_api_portmidi_PortMidi::m_CloseAll(){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Stack_1i* l_indexes{};
    void gcMark(){
      bbGCMark(l_indexes);
    }
  }f0{};
  f0.l_indexes=bbGCNew<t_stdlib_collections_Stack_1i>();
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
    f1.l_0=(f1.t1=(f1.t0=this->m_openInputs.get())->m_Keys()).m_All();
    for(;!f1.l_0.m_AtEnd();f1.l_0.m_Bump()){
      bbInt l_in=f1.l_0.m_Current();
      f0.l_indexes->m_Push(l_in);
    }
  }
  {
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Stack_1i_Iterator l_1{};
      void gcMark(){
        bbGCMark(l_1);
      }
    }f1{};
    f1.l_1=f0.l_indexes->m_All();
    for(;!f1.l_1.m_AtEnd();f1.l_1.m_Bump()){
      bbInt l_index=f1.l_1.m_Current();
      this->m_CloseInput(l_index);
    }
  }
  f0.l_indexes->m_Clear();
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
    f1.l_2=(f1.t1=(f1.t0=this->m_openOutputs.get())->m_Keys()).m_All();
    for(;!f1.l_2.m_AtEnd();f1.l_2.m_Bump()){
      bbInt l_out=f1.l_2.m_Current();
      f0.l_indexes->m_Push(l_out);
    }
  }
  {
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Stack_1i_Iterator l_3{};
      void gcMark(){
        bbGCMark(l_3);
      }
    }f1{};
    f1.l_3=f0.l_indexes->m_All();
    for(;!f1.l_3.m_AtEnd();f1.l_3.m_Bump()){
      bbInt l_index=f1.l_3.m_Current();
      this->m_CloseOutput(l_index);
    }
  }
}

void mx2_sdk_api_2sounds_2portmidi_2portmidi_init_f(){
}
