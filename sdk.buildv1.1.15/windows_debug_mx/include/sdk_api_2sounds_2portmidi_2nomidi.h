
#ifndef MX2_SDK_API_2SOUNDS_2PORTMIDI_2NOMIDI_H
#define MX2_SDK_API_2SOUNDS_2PORTMIDI_2NOMIDI_H

#include <bbmonkey.h>

#include "monkey/monkey.buildv1.1.15/windows_debug_mx/include/monkey_types.h"

BB_CLASS(t_sdk_api_portmidi_PmDeviceInfo)
BB_CLASS(t_sdk_api_portmidi_MidiDriver)

struct t_sdk_api_portmidi_PmDeviceInfo : public bbObject{
  typedef t_sdk_api_portmidi_PmDeviceInfo *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_sdk_api_portmidi_PmDeviceInfo";}

  bbInt m_structVersion{};
  bbByte* m_interf{};
  bbByte* m_name{};
  bbInt m_input{};
  bbInt m_output{};
  bbInt m_opened{};
  void dbEmit();

  ~t_sdk_api_portmidi_PmDeviceInfo();

  t_sdk_api_portmidi_PmDeviceInfo(){
  }
};

struct t_sdk_api_portmidi_MidiDriver : public bbObject{
  typedef t_sdk_api_portmidi_MidiDriver *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_sdk_api_portmidi_MidiDriver";}

  bbInt m_deviceCount{};
  bbInt m_error{};
  bbByte* m_errorText{};
  bbGCVar<t_sdk_api_portmidi_PmDeviceInfo> m_info{};

  void gcMark();
  void dbEmit();

  ~t_sdk_api_portmidi_MidiDriver();

  void m_Sleep(bbDouble l_duration);
  void m_OutputMessages(bbInt l_index,bbInt* l_bytes,bbInt l_length);
  void m_OutputMessage(bbInt l_index,bbInt l_data);
  bbInt m_OpenOutput(bbInt l_index);
  bbInt m_OpenInput(bbInt l_index);
  bbDouble m_MidiEventTimestamp();
  bbInt m_MidiEventMessage(void* l_buffer,bbInt l_length);
  bbInt m_MidiEventData();
  bbBool m_HasInput(bbInt l_handle);
  void m_GetInfo(bbInt l_index);
  void m_CloseOutput(bbInt l_handle);
  void m_CloseInput(bbInt l_handle);

  t_sdk_api_portmidi_MidiDriver(){
  }
};

#endif
