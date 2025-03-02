
#ifndef MX2_SDK_API_2SOUNDS_2PORTMIDI_2PORTMIDI_H
#define MX2_SDK_API_2SOUNDS_2PORTMIDI_2PORTMIDI_H

#include <bbmonkey.h>

#include "monkey/monkey.buildv1.1.15/windows_release_mx/include/monkey_types.h"

BB_CLASS(t_sdk_api_portmidi_MidiDriver)
BB_CLASS(t_stdlib_collections_Map_1ii)
BB_CLASS(t_stdlib_collections_Stack_1i)

BB_CLASS(t_sdk_api_portmidi_PortMidi)

struct t_sdk_api_portmidi_PortMidi : public bbObject{
  typedef t_sdk_api_portmidi_PortMidi *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_sdk_api_portmidi_PortMidi";}

  bbString m_version{};
  bbInt m_deviceCount{};
  bbGCVar<t_sdk_api_portmidi_MidiDriver> m_driver{};
  bbGCVar<t_stdlib_collections_Stack_1i> m_inputDevices{};
  bbGCVar<t_stdlib_collections_Stack_1i> m_outputDevices{};
  bbGCVar<t_stdlib_collections_Map_1ii> m_openInputs{};
  bbGCVar<t_stdlib_collections_Map_1ii> m_openOutputs{};
  bbArray<bbByte> m_sysexBuffer{};

  void init();

  void gcMark();

  t_sdk_api_portmidi_PortMidi();
  ~t_sdk_api_portmidi_PortMidi();

  void m_Sleep(bbDouble l_seconds);
  void m_SendMessages(bbInt l_index,bbArray<bbInt> l_data);
  void m_SendMessage(bbInt l_index,bbInt l_data);
  bbString m_OutputName(bbInt l_index);
  void m_OpenOutput(bbInt l_index);
  void m_OpenInput(bbInt l_index);
  bbString m_InputName(bbInt l_index);
  bbInt m_HasEvent();
  bbDouble m_EventTime();
  bbArray<bbUByte> m_EventDataBytes();
  bbInt m_EventData();
  bbArray<bbByte> m_EventContent();
  void m_CloseOutput(bbInt l_index);
  void m_CloseInput(bbInt l_index);
  void m_CloseAll();
};

#endif
