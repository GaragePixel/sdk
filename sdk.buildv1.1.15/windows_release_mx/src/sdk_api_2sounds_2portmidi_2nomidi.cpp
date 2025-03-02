
#include "sdk/sdk.buildv1.1.15/windows_release_mx/include/sdk_api_2sounds_2portmidi_2nomidi.h"

t_sdk_api_portmidi_PmDeviceInfo::~t_sdk_api_portmidi_PmDeviceInfo(){
}

void t_sdk_api_portmidi_MidiDriver::gcMark(){
  bbGCMark(m_info);
}
t_sdk_api_portmidi_MidiDriver::~t_sdk_api_portmidi_MidiDriver(){
}

void t_sdk_api_portmidi_MidiDriver::m_Sleep(bbDouble l_duration){
}

void t_sdk_api_portmidi_MidiDriver::m_OutputMessages(bbInt l_index,bbInt* l_bytes,bbInt l_length){
}

void t_sdk_api_portmidi_MidiDriver::m_OutputMessage(bbInt l_index,bbInt l_data){
}

bbInt t_sdk_api_portmidi_MidiDriver::m_OpenOutput(bbInt l_index){
  return bbInt(0);
}

bbInt t_sdk_api_portmidi_MidiDriver::m_OpenInput(bbInt l_index){
  return bbInt(0);
}

bbDouble t_sdk_api_portmidi_MidiDriver::m_MidiEventTimestamp(){
  return 0.0;
}

bbInt t_sdk_api_portmidi_MidiDriver::m_MidiEventMessage(void* l_buffer,bbInt l_length){
  return bbInt(0);
}

bbInt t_sdk_api_portmidi_MidiDriver::m_MidiEventData(){
  return bbInt(0);
}

bbBool t_sdk_api_portmidi_MidiDriver::m_HasInput(bbInt l_handle){
  return false;
}

void t_sdk_api_portmidi_MidiDriver::m_GetInfo(bbInt l_index){
}

void t_sdk_api_portmidi_MidiDriver::m_CloseOutput(bbInt l_handle){
}

void t_sdk_api_portmidi_MidiDriver::m_CloseInput(bbInt l_handle){
}

void mx2_sdk_api_2sounds_2portmidi_2nomidi_init_f(){
}
