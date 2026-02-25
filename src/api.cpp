#include <atomic>
#include "types.h"
#include "../include/api.h"
#include "callbacks.h"
#include "../interop/Linux/include/DeckLinkAPIVideoFrame_v14_2_1.h"

unsigned long cdecklink_timecode_add_ref(cdecklink_timecode_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_timecode_release(cdecklink_timecode_t *obj) {
	return obj->Release();
}

DecklinkTimecodeBCD cdecklink_timecode_get_bcd(cdecklink_timecode_t *obj) {
	return obj->GetBCD();
}

HRESULT cdecklink_timecode_get_components(cdecklink_timecode_t *obj, uint8_t * hours, uint8_t * minutes, uint8_t * seconds, uint8_t * frames) {
	return obj->GetComponents((uint8_t *)hours, (uint8_t *)minutes, (uint8_t *)seconds, (uint8_t *)frames);
}

HRESULT cdecklink_timecode_get_string(cdecklink_timecode_t *obj, const char ** timecode) {
	return obj->GetString((const char **)timecode);
}

DecklinkTimecodeFlags cdecklink_timecode_get_flags(cdecklink_timecode_t *obj) {
	return obj->GetFlags();
}

HRESULT cdecklink_timecode_get_timecode_user_bits(cdecklink_timecode_t *obj, DecklinkTimecodeUserBits * userBits) {
	return obj->GetTimecodeUserBits((BMDTimecodeUserBits *)userBits);
}


unsigned long cdecklink_display_mode_iterator_add_ref(cdecklink_display_mode_iterator_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_display_mode_iterator_release(cdecklink_display_mode_iterator_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_display_mode_iterator_next(cdecklink_display_mode_iterator_t *obj, cdecklink_display_mode_t ** deckLinkDisplayMode) {
	return obj->Next((IDeckLinkDisplayMode **)deckLinkDisplayMode);
}


unsigned long cdecklink_display_mode_add_ref(cdecklink_display_mode_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_display_mode_release(cdecklink_display_mode_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_display_mode_get_name(cdecklink_display_mode_t *obj, const char ** name) {
	return obj->GetName((const char **)name);
}

DecklinkDisplayMode cdecklink_display_mode_get_display_mode(cdecklink_display_mode_t *obj) {
	return obj->GetDisplayMode();
}

long cdecklink_display_mode_get_width(cdecklink_display_mode_t *obj) {
	return obj->GetWidth();
}

long cdecklink_display_mode_get_height(cdecklink_display_mode_t *obj) {
	return obj->GetHeight();
}

HRESULT cdecklink_display_mode_get_frame_rate(cdecklink_display_mode_t *obj, DecklinkTimeValue * frameDuration, DecklinkTimeScale * timeScale) {
	return obj->GetFrameRate((BMDTimeValue *)frameDuration, (BMDTimeScale *)timeScale);
}

DecklinkFieldDominance cdecklink_display_mode_get_field_dominance(cdecklink_display_mode_t *obj) {
	return obj->GetFieldDominance();
}

DecklinkDisplayModeFlags cdecklink_display_mode_get_flags(cdecklink_display_mode_t *obj) {
	return obj->GetFlags();
}


unsigned long cdecklink_device_add_ref(cdecklink_device_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_device_release(cdecklink_device_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_device_get_model_name(cdecklink_device_t *obj, const char ** modelName) {
	return obj->GetModelName((const char **)modelName);
}

HRESULT cdecklink_device_get_display_name(cdecklink_device_t *obj, const char ** displayName) {
	return obj->GetDisplayName((const char **)displayName);
}


unsigned long cdecklink_configuration_add_ref(cdecklink_configuration_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_configuration_release(cdecklink_configuration_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_configuration_set_flag(cdecklink_configuration_t *obj, DecklinkConfigurationID cfgID, bool value) {
	return obj->SetFlag((BMDDeckLinkConfigurationID)cfgID, (bool)value);
}

HRESULT cdecklink_configuration_get_flag(cdecklink_configuration_t *obj, DecklinkConfigurationID cfgID, bool * value) {
	return obj->GetFlag((BMDDeckLinkConfigurationID)cfgID, (bool *)value);
}

HRESULT cdecklink_configuration_set_int(cdecklink_configuration_t *obj, DecklinkConfigurationID cfgID, int64_t value) {
	return obj->SetInt((BMDDeckLinkConfigurationID)cfgID, (int64_t)value);
}

HRESULT cdecklink_configuration_get_int(cdecklink_configuration_t *obj, DecklinkConfigurationID cfgID, int64_t * value) {
	return obj->GetInt((BMDDeckLinkConfigurationID)cfgID, (int64_t *)value);
}

HRESULT cdecklink_configuration_set_float(cdecklink_configuration_t *obj, DecklinkConfigurationID cfgID, double value) {
	return obj->SetFloat((BMDDeckLinkConfigurationID)cfgID, (double)value);
}

HRESULT cdecklink_configuration_get_float(cdecklink_configuration_t *obj, DecklinkConfigurationID cfgID, double * value) {
	return obj->GetFloat((BMDDeckLinkConfigurationID)cfgID, (double *)value);
}

HRESULT cdecklink_configuration_set_string(cdecklink_configuration_t *obj, DecklinkConfigurationID cfgID, const char * value) {
	return obj->SetString((BMDDeckLinkConfigurationID)cfgID, (const char *)value);
}

HRESULT cdecklink_configuration_get_string(cdecklink_configuration_t *obj, DecklinkConfigurationID cfgID, const char ** value) {
	return obj->GetString((BMDDeckLinkConfigurationID)cfgID, (const char **)value);
}

HRESULT cdecklink_configuration_write_configuration_to_preferences(cdecklink_configuration_t *obj) {
	return obj->WriteConfigurationToPreferences();
}


unsigned long cdecklink_encoder_configuration_add_ref(cdecklink_encoder_configuration_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_encoder_configuration_release(cdecklink_encoder_configuration_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_encoder_configuration_set_flag(cdecklink_encoder_configuration_t *obj, DecklinkEncoderConfigurationID cfgID, bool value) {
	return obj->SetFlag((BMDDeckLinkEncoderConfigurationID)cfgID, (bool)value);
}

HRESULT cdecklink_encoder_configuration_get_flag(cdecklink_encoder_configuration_t *obj, DecklinkEncoderConfigurationID cfgID, bool * value) {
	return obj->GetFlag((BMDDeckLinkEncoderConfigurationID)cfgID, (bool *)value);
}

HRESULT cdecklink_encoder_configuration_set_int(cdecklink_encoder_configuration_t *obj, DecklinkEncoderConfigurationID cfgID, int64_t value) {
	return obj->SetInt((BMDDeckLinkEncoderConfigurationID)cfgID, (int64_t)value);
}

HRESULT cdecklink_encoder_configuration_get_int(cdecklink_encoder_configuration_t *obj, DecklinkEncoderConfigurationID cfgID, int64_t * value) {
	return obj->GetInt((BMDDeckLinkEncoderConfigurationID)cfgID, (int64_t *)value);
}

HRESULT cdecklink_encoder_configuration_set_float(cdecklink_encoder_configuration_t *obj, DecklinkEncoderConfigurationID cfgID, double value) {
	return obj->SetFloat((BMDDeckLinkEncoderConfigurationID)cfgID, (double)value);
}

HRESULT cdecklink_encoder_configuration_get_float(cdecklink_encoder_configuration_t *obj, DecklinkEncoderConfigurationID cfgID, double * value) {
	return obj->GetFloat((BMDDeckLinkEncoderConfigurationID)cfgID, (double *)value);
}

HRESULT cdecklink_encoder_configuration_set_string(cdecklink_encoder_configuration_t *obj, DecklinkEncoderConfigurationID cfgID, const char * value) {
	return obj->SetString((BMDDeckLinkEncoderConfigurationID)cfgID, (const char *)value);
}

HRESULT cdecklink_encoder_configuration_get_string(cdecklink_encoder_configuration_t *obj, DecklinkEncoderConfigurationID cfgID, const char ** value) {
	return obj->GetString((BMDDeckLinkEncoderConfigurationID)cfgID, (const char **)value);
}

HRESULT cdecklink_encoder_configuration_get_bytes(cdecklink_encoder_configuration_t *obj, DecklinkEncoderConfigurationID cfgID, void * buffer, uint32_t * bufferSize) {
	return obj->GetBytes((BMDDeckLinkEncoderConfigurationID)cfgID, (void *)buffer, (uint32_t *)bufferSize);
}


unsigned long cdecklink_deck_control_add_ref(cdecklink_deck_control_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_deck_control_release(cdecklink_deck_control_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_deck_control_open(cdecklink_deck_control_t *obj, DecklinkTimeScale timeScale, DecklinkTimeValue timeValue, bool timecodeIsDropFrame, DecklinkDeckControlError * error) {
	return obj->Open((BMDTimeScale)timeScale, (BMDTimeValue)timeValue, (bool)timecodeIsDropFrame, (BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_close(cdecklink_deck_control_t *obj, bool standbyOn) {
	return obj->Close((bool)standbyOn);
}

HRESULT cdecklink_deck_control_get_current_state(cdecklink_deck_control_t *obj, DecklinkDeckControlMode * mode, DecklinkDeckControlVTRControlState * vtrControlState, DecklinkDeckControlStatusFlags * flags) {
	return obj->GetCurrentState((BMDDeckControlMode *)mode, (BMDDeckControlVTRControlState *)vtrControlState, (BMDDeckControlStatusFlags *)flags);
}

HRESULT cdecklink_deck_control_set_standby(cdecklink_deck_control_t *obj, bool standbyOn) {
	return obj->SetStandby((bool)standbyOn);
}

HRESULT cdecklink_deck_control_send_command(cdecklink_deck_control_t *obj, uint8_t * inBuffer, uint32_t inBufferSize, uint8_t * outBuffer, uint32_t * outDataSize, uint32_t outBufferSize, DecklinkDeckControlError * error) {
	return obj->SendCommand((uint8_t *)inBuffer, (uint32_t)inBufferSize, (uint8_t *)outBuffer, (uint32_t *)outDataSize, (uint32_t)outBufferSize, (BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_play(cdecklink_deck_control_t *obj, DecklinkDeckControlError * error) {
	return obj->Play((BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_stop(cdecklink_deck_control_t *obj, DecklinkDeckControlError * error) {
	return obj->Stop((BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_toggle_play_stop(cdecklink_deck_control_t *obj, DecklinkDeckControlError * error) {
	return obj->TogglePlayStop((BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_eject(cdecklink_deck_control_t *obj, DecklinkDeckControlError * error) {
	return obj->Eject((BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_go_to_timecode(cdecklink_deck_control_t *obj, DecklinkTimecodeBCD timecode, DecklinkDeckControlError * error) {
	return obj->GoToTimecode((BMDTimecodeBCD)timecode, (BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_fast_forward(cdecklink_deck_control_t *obj, bool viewTape, DecklinkDeckControlError * error) {
	return obj->FastForward((bool)viewTape, (BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_rewind(cdecklink_deck_control_t *obj, bool viewTape, DecklinkDeckControlError * error) {
	return obj->Rewind((bool)viewTape, (BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_step_forward(cdecklink_deck_control_t *obj, DecklinkDeckControlError * error) {
	return obj->StepForward((BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_step_back(cdecklink_deck_control_t *obj, DecklinkDeckControlError * error) {
	return obj->StepBack((BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_jog(cdecklink_deck_control_t *obj, double rate, DecklinkDeckControlError * error) {
	return obj->Jog((double)rate, (BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_shuttle(cdecklink_deck_control_t *obj, double rate, DecklinkDeckControlError * error) {
	return obj->Shuttle((double)rate, (BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_get_timecode_string(cdecklink_deck_control_t *obj, const char ** currentTimeCode, DecklinkDeckControlError * error) {
	return obj->GetTimecodeString((const char **)currentTimeCode, (BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_get_timecode(cdecklink_deck_control_t *obj, cdecklink_timecode_t ** currentTimecode, DecklinkDeckControlError * error) {
	return obj->GetTimecode((IDeckLinkTimecode **)currentTimecode, (BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_get_timecode_bcd(cdecklink_deck_control_t *obj, DecklinkTimecodeBCD * currentTimecode, DecklinkDeckControlError * error) {
	return obj->GetTimecodeBCD((BMDTimecodeBCD *)currentTimecode, (BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_set_preroll(cdecklink_deck_control_t *obj, uint32_t prerollSeconds) {
	return obj->SetPreroll((uint32_t)prerollSeconds);
}

HRESULT cdecklink_deck_control_get_preroll(cdecklink_deck_control_t *obj, uint32_t * prerollSeconds) {
	return obj->GetPreroll((uint32_t *)prerollSeconds);
}

HRESULT cdecklink_deck_control_set_export_offset(cdecklink_deck_control_t *obj, int32_t exportOffsetFields) {
	return obj->SetExportOffset((int32_t)exportOffsetFields);
}

HRESULT cdecklink_deck_control_get_export_offset(cdecklink_deck_control_t *obj, int32_t * exportOffsetFields) {
	return obj->GetExportOffset((int32_t *)exportOffsetFields);
}

HRESULT cdecklink_deck_control_get_manual_export_offset(cdecklink_deck_control_t *obj, int32_t * deckManualExportOffsetFields) {
	return obj->GetManualExportOffset((int32_t *)deckManualExportOffsetFields);
}

HRESULT cdecklink_deck_control_set_capture_offset(cdecklink_deck_control_t *obj, int32_t captureOffsetFields) {
	return obj->SetCaptureOffset((int32_t)captureOffsetFields);
}

HRESULT cdecklink_deck_control_get_capture_offset(cdecklink_deck_control_t *obj, int32_t * captureOffsetFields) {
	return obj->GetCaptureOffset((int32_t *)captureOffsetFields);
}

HRESULT cdecklink_deck_control_start_export(cdecklink_deck_control_t *obj, DecklinkTimecodeBCD inTimecode, DecklinkTimecodeBCD outTimecode, DecklinkDeckControlExportModeOpsFlags exportModeOps, DecklinkDeckControlError * error) {
	return obj->StartExport((BMDTimecodeBCD)inTimecode, (BMDTimecodeBCD)outTimecode, (BMDDeckControlExportModeOpsFlags)exportModeOps, (BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_start_capture(cdecklink_deck_control_t *obj, bool useVITC, DecklinkTimecodeBCD inTimecode, DecklinkTimecodeBCD outTimecode, DecklinkDeckControlError * error) {
	return obj->StartCapture((bool)useVITC, (BMDTimecodeBCD)inTimecode, (BMDTimecodeBCD)outTimecode, (BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_get_device_id(cdecklink_deck_control_t *obj, uint16_t * deviceId, DecklinkDeckControlError * error) {
	return obj->GetDeviceID((uint16_t *)deviceId, (BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_abort(cdecklink_deck_control_t *obj) {
	return obj->Abort();
}

HRESULT cdecklink_deck_control_crash_record_start(cdecklink_deck_control_t *obj, DecklinkDeckControlError * error) {
	return obj->CrashRecordStart((BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_crash_record_stop(cdecklink_deck_control_t *obj, DecklinkDeckControlError * error) {
	return obj->CrashRecordStop((BMDDeckControlError *)error);
}

HRESULT cdecklink_deck_control_set_callback(cdecklink_deck_control_t *obj, void *ctx, cdecklink_deck_control_status_callback_timecode_update* cb0, cdecklink_deck_control_status_callback_vtr_control_state_changed* cb1, cdecklink_deck_control_status_callback_deck_control_event_received* cb2, cdecklink_deck_control_status_callback_deck_control_status_changed* cb3) {
	IDeckLinkDeckControlStatusCallback * handler = cdecklink_internal_callback_create_deck_link_deck_control_status_callback(ctx, cb0, cb1, cb2, cb3);
	return obj->SetCallback(handler);
}


unsigned long cdecklink_video_buffer_allocator_add_ref(cdecklink_video_buffer_allocator_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_video_buffer_allocator_release(cdecklink_video_buffer_allocator_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_video_buffer_allocator_allocate_video_buffer(cdecklink_video_buffer_allocator_t *obj, cdecklink_video_buffer_t ** allocatedBuffer) {
	return obj->AllocateVideoBuffer((IDeckLinkVideoBuffer **)allocatedBuffer);
}


unsigned long cdecklink_video_buffer_allocator_provider_add_ref(cdecklink_video_buffer_allocator_provider_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_video_buffer_allocator_provider_release(cdecklink_video_buffer_allocator_provider_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_video_buffer_allocator_provider_get_video_buffer_allocator(cdecklink_video_buffer_allocator_provider_t *obj, uint32_t bufferSize, uint32_t width, uint32_t height, uint32_t rowBytes, DecklinkPixelFormat pixelFormat, cdecklink_video_buffer_allocator_t ** allocator) {
	return obj->GetVideoBufferAllocator((uint32_t)bufferSize, (uint32_t)width, (uint32_t)height, (uint32_t)rowBytes, (BMDPixelFormat)pixelFormat, (IDeckLinkVideoBufferAllocator **)allocator);
}


unsigned long cdecklink_iterator_add_ref(cdecklink_iterator_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_iterator_release(cdecklink_iterator_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_iterator_next(cdecklink_iterator_t *obj, cdecklink_device_t ** deckLinkInstance) {
	return obj->Next((IDeckLink **)deckLinkInstance);
}


unsigned long cdecklink_api_information_add_ref(cdecklink_api_information_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_api_information_release(cdecklink_api_information_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_api_information_get_flag(cdecklink_api_information_t *obj, DecklinkAPIInformationID cfgID, bool * value) {
	return obj->GetFlag((BMDDeckLinkAPIInformationID)cfgID, (bool *)value);
}

HRESULT cdecklink_api_information_get_int(cdecklink_api_information_t *obj, DecklinkAPIInformationID cfgID, int64_t * value) {
	return obj->GetInt((BMDDeckLinkAPIInformationID)cfgID, (int64_t *)value);
}

HRESULT cdecklink_api_information_get_float(cdecklink_api_information_t *obj, DecklinkAPIInformationID cfgID, double * value) {
	return obj->GetFloat((BMDDeckLinkAPIInformationID)cfgID, (double *)value);
}

HRESULT cdecklink_api_information_get_string(cdecklink_api_information_t *obj, DecklinkAPIInformationID cfgID, const char ** value) {
	return obj->GetString((BMDDeckLinkAPIInformationID)cfgID, (const char **)value);
}


unsigned long cdecklink_ip_flow_attributes_add_ref(cdecklink_ip_flow_attributes_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_ip_flow_attributes_release(cdecklink_ip_flow_attributes_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_ip_flow_attributes_get_int(cdecklink_ip_flow_attributes_t *obj, DecklinkIPFlowAttributeID attrID, int64_t * value) {
	return obj->GetInt((BMDDeckLinkIPFlowAttributeID)attrID, (int64_t *)value);
}

HRESULT cdecklink_ip_flow_attributes_get_flag(cdecklink_ip_flow_attributes_t *obj, DecklinkIPFlowAttributeID attrID, bool * value) {
	return obj->GetFlag((BMDDeckLinkIPFlowAttributeID)attrID, (bool *)value);
}

HRESULT cdecklink_ip_flow_attributes_get_float(cdecklink_ip_flow_attributes_t *obj, DecklinkIPFlowAttributeID attrID, double * value) {
	return obj->GetFloat((BMDDeckLinkIPFlowAttributeID)attrID, (double *)value);
}

HRESULT cdecklink_ip_flow_attributes_get_string(cdecklink_ip_flow_attributes_t *obj, DecklinkIPFlowAttributeID attrID, const char ** value) {
	return obj->GetString((BMDDeckLinkIPFlowAttributeID)attrID, (const char **)value);
}


unsigned long cdecklink_ip_flow_status_add_ref(cdecklink_ip_flow_status_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_ip_flow_status_release(cdecklink_ip_flow_status_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_ip_flow_status_get_int(cdecklink_ip_flow_status_t *obj, DecklinkIPFlowStatusID statusID, int64_t * value) {
	return obj->GetInt((BMDDeckLinkIPFlowStatusID)statusID, (int64_t *)value);
}

HRESULT cdecklink_ip_flow_status_get_flag(cdecklink_ip_flow_status_t *obj, DecklinkIPFlowStatusID statusID, bool * value) {
	return obj->GetFlag((BMDDeckLinkIPFlowStatusID)statusID, (bool *)value);
}

HRESULT cdecklink_ip_flow_status_get_float(cdecklink_ip_flow_status_t *obj, DecklinkIPFlowStatusID statusID, double * value) {
	return obj->GetFloat((BMDDeckLinkIPFlowStatusID)statusID, (double *)value);
}

HRESULT cdecklink_ip_flow_status_get_string(cdecklink_ip_flow_status_t *obj, DecklinkIPFlowStatusID statusID, const char ** value) {
	return obj->GetString((BMDDeckLinkIPFlowStatusID)statusID, (const char **)value);
}


unsigned long cdecklink_ip_flow_setting_add_ref(cdecklink_ip_flow_setting_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_ip_flow_setting_release(cdecklink_ip_flow_setting_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_ip_flow_setting_get_int(cdecklink_ip_flow_setting_t *obj, DecklinkIPFlowSettingID settingID, int64_t * value) {
	return obj->GetInt((BMDDeckLinkIPFlowSettingID)settingID, (int64_t *)value);
}

HRESULT cdecklink_ip_flow_setting_get_flag(cdecklink_ip_flow_setting_t *obj, DecklinkIPFlowSettingID settingID, bool * value) {
	return obj->GetFlag((BMDDeckLinkIPFlowSettingID)settingID, (bool *)value);
}

HRESULT cdecklink_ip_flow_setting_get_float(cdecklink_ip_flow_setting_t *obj, DecklinkIPFlowSettingID settingID, double * value) {
	return obj->GetFloat((BMDDeckLinkIPFlowSettingID)settingID, (double *)value);
}

HRESULT cdecklink_ip_flow_setting_get_string(cdecklink_ip_flow_setting_t *obj, DecklinkIPFlowSettingID settingID, const char ** value) {
	return obj->GetString((BMDDeckLinkIPFlowSettingID)settingID, (const char **)value);
}

HRESULT cdecklink_ip_flow_setting_set_int(cdecklink_ip_flow_setting_t *obj, DecklinkIPFlowSettingID settingID, int64_t value) {
	return obj->SetInt((BMDDeckLinkIPFlowSettingID)settingID, (int64_t)value);
}

HRESULT cdecklink_ip_flow_setting_set_flag(cdecklink_ip_flow_setting_t *obj, DecklinkIPFlowSettingID settingID, bool value) {
	return obj->SetFlag((BMDDeckLinkIPFlowSettingID)settingID, (bool)value);
}

HRESULT cdecklink_ip_flow_setting_set_float(cdecklink_ip_flow_setting_t *obj, DecklinkIPFlowSettingID settingID, double value) {
	return obj->SetFloat((BMDDeckLinkIPFlowSettingID)settingID, (double)value);
}

HRESULT cdecklink_ip_flow_setting_set_string(cdecklink_ip_flow_setting_t *obj, DecklinkIPFlowSettingID settingID, const char * value) {
	return obj->SetString((BMDDeckLinkIPFlowSettingID)settingID, (const char *)value);
}


unsigned long cdecklink_ip_flow_add_ref(cdecklink_ip_flow_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_ip_flow_release(cdecklink_ip_flow_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_ip_flow_enable(cdecklink_ip_flow_t *obj) {
	return obj->Enable();
}

HRESULT cdecklink_ip_flow_disable(cdecklink_ip_flow_t *obj) {
	return obj->Disable();
}


unsigned long cdecklink_ip_flow_iterator_add_ref(cdecklink_ip_flow_iterator_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_ip_flow_iterator_release(cdecklink_ip_flow_iterator_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_ip_flow_iterator_next(cdecklink_ip_flow_iterator_t *obj, cdecklink_ip_flow_t ** deckLinkIPFlowInstance) {
	return obj->Next((IDeckLinkIPFlow **)deckLinkIPFlowInstance);
}


unsigned long cdecklink_output_add_ref(cdecklink_output_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_output_release(cdecklink_output_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_output_does_support_video_mode(cdecklink_output_t *obj, DecklinkVideoConnection connection, DecklinkDisplayMode requestedMode, DecklinkPixelFormat requestedPixelFormat, DecklinkVideoOutputConversionMode conversionMode, DecklinkSupportedVideoModeFlags flags, DecklinkDisplayMode * actualMode, bool * supported) {
	return obj->DoesSupportVideoMode((BMDVideoConnection)connection, (BMDDisplayMode)requestedMode, (BMDPixelFormat)requestedPixelFormat, (BMDVideoOutputConversionMode)conversionMode, (BMDSupportedVideoModeFlags)flags, (BMDDisplayMode *)actualMode, (bool *)supported);
}

HRESULT cdecklink_output_get_display_mode(cdecklink_output_t *obj, DecklinkDisplayMode displayMode, cdecklink_display_mode_t ** resultDisplayMode) {
	return obj->GetDisplayMode((BMDDisplayMode)displayMode, (IDeckLinkDisplayMode **)resultDisplayMode);
}

HRESULT cdecklink_output_get_display_mode_iterator(cdecklink_output_t *obj, cdecklink_display_mode_iterator_t ** iterator) {
	return obj->GetDisplayModeIterator((IDeckLinkDisplayModeIterator **)iterator);
}

HRESULT cdecklink_output_set_screen_preview_callback(cdecklink_output_t *obj, void *ctx, cdecklink_screen_preview_callback_draw_frame* cb0) {
	IDeckLinkScreenPreviewCallback * handler = cdecklink_internal_callback_create_deck_link_screen_preview_callback(ctx, cb0);
	return obj->SetScreenPreviewCallback(handler);
}

HRESULT cdecklink_output_enable_video_output(cdecklink_output_t *obj, DecklinkDisplayMode displayMode, DecklinkVideoOutputFlags flags) {
	return obj->EnableVideoOutput((BMDDisplayMode)displayMode, (BMDVideoOutputFlags)flags);
}

HRESULT cdecklink_output_disable_video_output(cdecklink_output_t *obj) {
	return obj->DisableVideoOutput();
}

HRESULT cdecklink_output_create_video_frame(cdecklink_output_t *obj, int32_t width, int32_t height, int32_t rowBytes, DecklinkPixelFormat pixelFormat, DecklinkFrameFlags flags, cdecklink_mutable_video_frame_t ** outFrame) {
	return obj->CreateVideoFrame((int32_t)width, (int32_t)height, (int32_t)rowBytes, (BMDPixelFormat)pixelFormat, (BMDFrameFlags)flags, (IDeckLinkMutableVideoFrame **)outFrame);
}

HRESULT cdecklink_output_create_video_frame_with_buffer(cdecklink_output_t *obj, int32_t width, int32_t height, int32_t rowBytes, DecklinkPixelFormat pixelFormat, DecklinkFrameFlags flags, cdecklink_video_buffer_t * buffer, cdecklink_mutable_video_frame_t ** outFrame) {
	return obj->CreateVideoFrameWithBuffer((int32_t)width, (int32_t)height, (int32_t)rowBytes, (BMDPixelFormat)pixelFormat, (BMDFrameFlags)flags, (IDeckLinkVideoBuffer *)buffer, (IDeckLinkMutableVideoFrame **)outFrame);
}

HRESULT cdecklink_output_row_bytes_for_pixel_format(cdecklink_output_t *obj, DecklinkPixelFormat pixelFormat, int32_t width, int32_t * rowBytes) {
	return obj->RowBytesForPixelFormat((BMDPixelFormat)pixelFormat, (int32_t)width, (int32_t *)rowBytes);
}

HRESULT cdecklink_output_create_ancillary_data(cdecklink_output_t *obj, DecklinkPixelFormat pixelFormat, cdecklink_video_frame_ancillary_t ** outBuffer) {
	return obj->CreateAncillaryData((BMDPixelFormat)pixelFormat, (IDeckLinkVideoFrameAncillary **)outBuffer);
}

HRESULT cdecklink_output_display_video_frame_sync(cdecklink_output_t *obj, cdecklink_video_frame_t * theFrame) {
	return obj->DisplayVideoFrameSync((IDeckLinkVideoFrame *)theFrame);
}

HRESULT cdecklink_output_schedule_video_frame(cdecklink_output_t *obj, cdecklink_video_frame_t * theFrame, DecklinkTimeValue displayTime, DecklinkTimeValue displayDuration, DecklinkTimeScale timeScale) {
	return obj->ScheduleVideoFrame((IDeckLinkVideoFrame *)theFrame, (BMDTimeValue)displayTime, (BMDTimeValue)displayDuration, (BMDTimeScale)timeScale);
}

HRESULT cdecklink_output_set_scheduled_frame_completion_callback(cdecklink_output_t *obj, void *ctx, cdecklink_video_output_callback_scheduled_frame_completed* cb0, cdecklink_video_output_callback_scheduled_playback_has_stopped* cb1) {
	IDeckLinkVideoOutputCallback * handler = cdecklink_internal_callback_create_deck_link_video_output_callback(ctx, cb0, cb1);
	return obj->SetScheduledFrameCompletionCallback(handler);
}

HRESULT cdecklink_output_get_buffered_video_frame_count(cdecklink_output_t *obj, uint32_t * bufferedFrameCount) {
	return obj->GetBufferedVideoFrameCount((uint32_t *)bufferedFrameCount);
}

HRESULT cdecklink_output_enable_audio_output(cdecklink_output_t *obj, DecklinkAudioSampleRate sampleRate, DecklinkAudioSampleType sampleType, uint32_t channelCount, DecklinkAudioOutputStreamType streamType) {
	return obj->EnableAudioOutput((BMDAudioSampleRate)sampleRate, (BMDAudioSampleType)sampleType, (uint32_t)channelCount, (BMDAudioOutputStreamType)streamType);
}

HRESULT cdecklink_output_disable_audio_output(cdecklink_output_t *obj) {
	return obj->DisableAudioOutput();
}

HRESULT cdecklink_output_write_audio_samples_sync(cdecklink_output_t *obj, void * buffer, uint32_t sampleFrameCount, uint32_t * sampleFramesWritten) {
	return obj->WriteAudioSamplesSync((void *)buffer, (uint32_t)sampleFrameCount, (uint32_t *)sampleFramesWritten);
}

HRESULT cdecklink_output_begin_audio_preroll(cdecklink_output_t *obj) {
	return obj->BeginAudioPreroll();
}

HRESULT cdecklink_output_end_audio_preroll(cdecklink_output_t *obj) {
	return obj->EndAudioPreroll();
}

HRESULT cdecklink_output_schedule_audio_samples(cdecklink_output_t *obj, void * buffer, uint32_t sampleFrameCount, DecklinkTimeValue streamTime, DecklinkTimeScale timeScale, uint32_t * sampleFramesWritten) {
	return obj->ScheduleAudioSamples((void *)buffer, (uint32_t)sampleFrameCount, (BMDTimeValue)streamTime, (BMDTimeScale)timeScale, (uint32_t *)sampleFramesWritten);
}

HRESULT cdecklink_output_get_buffered_audio_sample_frame_count(cdecklink_output_t *obj, uint32_t * bufferedSampleFrameCount) {
	return obj->GetBufferedAudioSampleFrameCount((uint32_t *)bufferedSampleFrameCount);
}

HRESULT cdecklink_output_flush_buffered_audio_samples(cdecklink_output_t *obj) {
	return obj->FlushBufferedAudioSamples();
}

HRESULT cdecklink_output_set_audio_callback(cdecklink_output_t *obj, void *ctx, cdecklink_audio_output_callback_render_audio_samples* cb0) {
	IDeckLinkAudioOutputCallback * handler = cdecklink_internal_callback_create_deck_link_audio_output_callback(ctx, cb0);
	return obj->SetAudioCallback(handler);
}

HRESULT cdecklink_output_start_scheduled_playback(cdecklink_output_t *obj, DecklinkTimeValue playbackStartTime, DecklinkTimeScale timeScale, double playbackSpeed) {
	return obj->StartScheduledPlayback((BMDTimeValue)playbackStartTime, (BMDTimeScale)timeScale, (double)playbackSpeed);
}

HRESULT cdecklink_output_stop_scheduled_playback(cdecklink_output_t *obj, DecklinkTimeValue stopPlaybackAtTime, DecklinkTimeValue * actualStopTime, DecklinkTimeScale timeScale) {
	return obj->StopScheduledPlayback((BMDTimeValue)stopPlaybackAtTime, (BMDTimeValue *)actualStopTime, (BMDTimeScale)timeScale);
}

HRESULT cdecklink_output_is_scheduled_playback_running(cdecklink_output_t *obj, bool * active) {
	return obj->IsScheduledPlaybackRunning((bool *)active);
}

HRESULT cdecklink_output_get_scheduled_stream_time(cdecklink_output_t *obj, DecklinkTimeScale desiredTimeScale, DecklinkTimeValue * streamTime, double * playbackSpeed) {
	return obj->GetScheduledStreamTime((BMDTimeScale)desiredTimeScale, (BMDTimeValue *)streamTime, (double *)playbackSpeed);
}

HRESULT cdecklink_output_get_reference_status(cdecklink_output_t *obj, DecklinkReferenceStatus * referenceStatus) {
	return obj->GetReferenceStatus((BMDReferenceStatus *)referenceStatus);
}

HRESULT cdecklink_output_get_hardware_reference_clock(cdecklink_output_t *obj, DecklinkTimeScale desiredTimeScale, DecklinkTimeValue * hardwareTime, DecklinkTimeValue * timeInFrame, DecklinkTimeValue * ticksPerFrame) {
	return obj->GetHardwareReferenceClock((BMDTimeScale)desiredTimeScale, (BMDTimeValue *)hardwareTime, (BMDTimeValue *)timeInFrame, (BMDTimeValue *)ticksPerFrame);
}

HRESULT cdecklink_output_get_frame_completion_reference_timestamp(cdecklink_output_t *obj, cdecklink_video_frame_t * theFrame, DecklinkTimeScale desiredTimeScale, DecklinkTimeValue * frameCompletionTimestamp) {
	return obj->GetFrameCompletionReferenceTimestamp((IDeckLinkVideoFrame *)theFrame, (BMDTimeScale)desiredTimeScale, (BMDTimeValue *)frameCompletionTimestamp);
}


unsigned long cdecklink_input_add_ref(cdecklink_input_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_input_release(cdecklink_input_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_input_does_support_video_mode(cdecklink_input_t *obj, DecklinkVideoConnection connection, DecklinkDisplayMode requestedMode, DecklinkPixelFormat requestedPixelFormat, DecklinkVideoInputConversionMode conversionMode, DecklinkSupportedVideoModeFlags flags, DecklinkDisplayMode * actualMode, bool * supported) {
	return obj->DoesSupportVideoMode((BMDVideoConnection)connection, (BMDDisplayMode)requestedMode, (BMDPixelFormat)requestedPixelFormat, (BMDVideoInputConversionMode)conversionMode, (BMDSupportedVideoModeFlags)flags, (BMDDisplayMode *)actualMode, (bool *)supported);
}

HRESULT cdecklink_input_get_display_mode(cdecklink_input_t *obj, DecklinkDisplayMode displayMode, cdecklink_display_mode_t ** resultDisplayMode) {
	return obj->GetDisplayMode((BMDDisplayMode)displayMode, (IDeckLinkDisplayMode **)resultDisplayMode);
}

HRESULT cdecklink_input_get_display_mode_iterator(cdecklink_input_t *obj, cdecklink_display_mode_iterator_t ** iterator) {
	return obj->GetDisplayModeIterator((IDeckLinkDisplayModeIterator **)iterator);
}

HRESULT cdecklink_input_set_screen_preview_callback(cdecklink_input_t *obj, void *ctx, cdecklink_screen_preview_callback_draw_frame* cb0) {
	IDeckLinkScreenPreviewCallback * handler = cdecklink_internal_callback_create_deck_link_screen_preview_callback(ctx, cb0);
	return obj->SetScreenPreviewCallback(handler);
}

HRESULT cdecklink_input_enable_video_input(cdecklink_input_t *obj, DecklinkDisplayMode displayMode, DecklinkPixelFormat pixelFormat, DecklinkVideoInputFlags flags) {
	return obj->EnableVideoInput((BMDDisplayMode)displayMode, (BMDPixelFormat)pixelFormat, (BMDVideoInputFlags)flags);
}

HRESULT cdecklink_input_enable_video_input_with_allocator_provider(cdecklink_input_t *obj, DecklinkDisplayMode displayMode, DecklinkPixelFormat pixelFormat, DecklinkVideoInputFlags flags, cdecklink_video_buffer_allocator_provider_t * allocatorProvider) {
	return obj->EnableVideoInputWithAllocatorProvider((BMDDisplayMode)displayMode, (BMDPixelFormat)pixelFormat, (BMDVideoInputFlags)flags, (IDeckLinkVideoBufferAllocatorProvider *)allocatorProvider);
}

HRESULT cdecklink_input_disable_video_input(cdecklink_input_t *obj) {
	return obj->DisableVideoInput();
}

HRESULT cdecklink_input_get_available_video_frame_count(cdecklink_input_t *obj, uint32_t * availableFrameCount) {
	return obj->GetAvailableVideoFrameCount((uint32_t *)availableFrameCount);
}

HRESULT cdecklink_input_enable_audio_input(cdecklink_input_t *obj, DecklinkAudioSampleRate sampleRate, DecklinkAudioSampleType sampleType, uint32_t channelCount) {
	return obj->EnableAudioInput((BMDAudioSampleRate)sampleRate, (BMDAudioSampleType)sampleType, (uint32_t)channelCount);
}

HRESULT cdecklink_input_disable_audio_input(cdecklink_input_t *obj) {
	return obj->DisableAudioInput();
}

HRESULT cdecklink_input_get_available_audio_sample_frame_count(cdecklink_input_t *obj, uint32_t * availableSampleFrameCount) {
	return obj->GetAvailableAudioSampleFrameCount((uint32_t *)availableSampleFrameCount);
}

HRESULT cdecklink_input_start_streams(cdecklink_input_t *obj) {
	return obj->StartStreams();
}

HRESULT cdecklink_input_stop_streams(cdecklink_input_t *obj) {
	return obj->StopStreams();
}

HRESULT cdecklink_input_pause_streams(cdecklink_input_t *obj) {
	return obj->PauseStreams();
}

HRESULT cdecklink_input_flush_streams(cdecklink_input_t *obj) {
	return obj->FlushStreams();
}

HRESULT cdecklink_input_set_callback(cdecklink_input_t *obj, void *ctx, cdecklink_input_callback_video_input_format_changed* cb0, cdecklink_input_callback_video_input_frame_arrived* cb1) {
	IDeckLinkInputCallback * handler = cdecklink_internal_callback_create_deck_link_input_callback(ctx, cb0, cb1);
	return obj->SetCallback(handler);
}

HRESULT cdecklink_input_get_hardware_reference_clock(cdecklink_input_t *obj, DecklinkTimeScale desiredTimeScale, DecklinkTimeValue * hardwareTime, DecklinkTimeValue * timeInFrame, DecklinkTimeValue * ticksPerFrame) {
	return obj->GetHardwareReferenceClock((BMDTimeScale)desiredTimeScale, (BMDTimeValue *)hardwareTime, (BMDTimeValue *)timeInFrame, (BMDTimeValue *)ticksPerFrame);
}


unsigned long cdecklink_ip_extensions_add_ref(cdecklink_ip_extensions_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_ip_extensions_release(cdecklink_ip_extensions_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_ip_extensions_get_deck_link_ip_flow_iterator(cdecklink_ip_extensions_t *obj, cdecklink_ip_flow_iterator_t ** iterator) {
	return obj->GetDeckLinkIPFlowIterator((IDeckLinkIPFlowIterator **)iterator);
}

HRESULT cdecklink_ip_extensions_get_ip_flow_by_id(cdecklink_ip_extensions_t *obj, DecklinkIPFlowID id, cdecklink_ip_flow_t ** flow) {
	return obj->GetIPFlowByID((BMDIPFlowID)id, (IDeckLinkIPFlow **)flow);
}


unsigned long cdecklink_hdmi_input_edid_add_ref(cdecklink_hdmi_input_edid_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_hdmi_input_edid_release(cdecklink_hdmi_input_edid_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_hdmi_input_edid_set_int(cdecklink_hdmi_input_edid_t *obj, DecklinkHDMIInputEDIDID cfgID, int64_t value) {
	return obj->SetInt((BMDDeckLinkHDMIInputEDIDID)cfgID, (int64_t)value);
}

HRESULT cdecklink_hdmi_input_edid_get_int(cdecklink_hdmi_input_edid_t *obj, DecklinkHDMIInputEDIDID cfgID, int64_t * value) {
	return obj->GetInt((BMDDeckLinkHDMIInputEDIDID)cfgID, (int64_t *)value);
}

HRESULT cdecklink_hdmi_input_edid_write_to_edid(cdecklink_hdmi_input_edid_t *obj) {
	return obj->WriteToEDID();
}


unsigned long cdecklink_encoder_input_add_ref(cdecklink_encoder_input_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_encoder_input_release(cdecklink_encoder_input_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_encoder_input_does_support_video_mode(cdecklink_encoder_input_t *obj, DecklinkVideoConnection connection, DecklinkDisplayMode requestedMode, DecklinkPixelFormat requestedCodec, uint32_t requestedCodecProfile, DecklinkSupportedVideoModeFlags flags, bool * supported) {
	return obj->DoesSupportVideoMode((BMDVideoConnection)connection, (BMDDisplayMode)requestedMode, (BMDPixelFormat)requestedCodec, (uint32_t)requestedCodecProfile, (BMDSupportedVideoModeFlags)flags, (bool *)supported);
}

HRESULT cdecklink_encoder_input_get_display_mode(cdecklink_encoder_input_t *obj, DecklinkDisplayMode displayMode, cdecklink_display_mode_t ** resultDisplayMode) {
	return obj->GetDisplayMode((BMDDisplayMode)displayMode, (IDeckLinkDisplayMode **)resultDisplayMode);
}

HRESULT cdecklink_encoder_input_get_display_mode_iterator(cdecklink_encoder_input_t *obj, cdecklink_display_mode_iterator_t ** iterator) {
	return obj->GetDisplayModeIterator((IDeckLinkDisplayModeIterator **)iterator);
}

HRESULT cdecklink_encoder_input_enable_video_input(cdecklink_encoder_input_t *obj, DecklinkDisplayMode displayMode, DecklinkPixelFormat pixelFormat, DecklinkVideoInputFlags flags) {
	return obj->EnableVideoInput((BMDDisplayMode)displayMode, (BMDPixelFormat)pixelFormat, (BMDVideoInputFlags)flags);
}

HRESULT cdecklink_encoder_input_disable_video_input(cdecklink_encoder_input_t *obj) {
	return obj->DisableVideoInput();
}

HRESULT cdecklink_encoder_input_get_available_packets_count(cdecklink_encoder_input_t *obj, uint32_t * availablePacketsCount) {
	return obj->GetAvailablePacketsCount((uint32_t *)availablePacketsCount);
}

HRESULT cdecklink_encoder_input_enable_audio_input(cdecklink_encoder_input_t *obj, DecklinkAudioFormat audioFormat, DecklinkAudioSampleRate sampleRate, DecklinkAudioSampleType sampleType, uint32_t channelCount) {
	return obj->EnableAudioInput((BMDAudioFormat)audioFormat, (BMDAudioSampleRate)sampleRate, (BMDAudioSampleType)sampleType, (uint32_t)channelCount);
}

HRESULT cdecklink_encoder_input_disable_audio_input(cdecklink_encoder_input_t *obj) {
	return obj->DisableAudioInput();
}

HRESULT cdecklink_encoder_input_get_available_audio_sample_frame_count(cdecklink_encoder_input_t *obj, uint32_t * availableSampleFrameCount) {
	return obj->GetAvailableAudioSampleFrameCount((uint32_t *)availableSampleFrameCount);
}

HRESULT cdecklink_encoder_input_start_streams(cdecklink_encoder_input_t *obj) {
	return obj->StartStreams();
}

HRESULT cdecklink_encoder_input_stop_streams(cdecklink_encoder_input_t *obj) {
	return obj->StopStreams();
}

HRESULT cdecklink_encoder_input_pause_streams(cdecklink_encoder_input_t *obj) {
	return obj->PauseStreams();
}

HRESULT cdecklink_encoder_input_flush_streams(cdecklink_encoder_input_t *obj) {
	return obj->FlushStreams();
}

HRESULT cdecklink_encoder_input_set_callback(cdecklink_encoder_input_t *obj, void *ctx, cdecklink_encoder_input_callback_video_input_signal_changed* cb0, cdecklink_encoder_input_callback_video_packet_arrived* cb1, cdecklink_encoder_input_callback_audio_packet_arrived* cb2) {
	IDeckLinkEncoderInputCallback * handler = cdecklink_internal_callback_create_deck_link_encoder_input_callback(ctx, cb0, cb1, cb2);
	return obj->SetCallback(handler);
}

HRESULT cdecklink_encoder_input_get_hardware_reference_clock(cdecklink_encoder_input_t *obj, DecklinkTimeScale desiredTimeScale, DecklinkTimeValue * hardwareTime, DecklinkTimeValue * timeInFrame, DecklinkTimeValue * ticksPerFrame) {
	return obj->GetHardwareReferenceClock((BMDTimeScale)desiredTimeScale, (BMDTimeValue *)hardwareTime, (BMDTimeValue *)timeInFrame, (BMDTimeValue *)ticksPerFrame);
}


unsigned long cdecklink_video_buffer_add_ref(cdecklink_video_buffer_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_video_buffer_release(cdecklink_video_buffer_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_video_buffer_get_bytes(cdecklink_video_buffer_t *obj, void ** buffer) {
	return obj->GetBytes((void **)buffer);
}

HRESULT cdecklink_video_buffer_start_access(cdecklink_video_buffer_t *obj, DecklinkBufferAccessFlags flags) {
	return obj->StartAccess((BMDBufferAccessFlags)flags);
}

HRESULT cdecklink_video_buffer_end_access(cdecklink_video_buffer_t *obj, DecklinkBufferAccessFlags flags) {
	return obj->EndAccess((BMDBufferAccessFlags)flags);
}


unsigned long cdecklink_video_frame_add_ref(cdecklink_video_frame_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_video_frame_release(cdecklink_video_frame_t *obj) {
	return obj->Release();
}

long cdecklink_video_frame_get_width(cdecklink_video_frame_t *obj) {
	return obj->GetWidth();
}

long cdecklink_video_frame_get_height(cdecklink_video_frame_t *obj) {
	return obj->GetHeight();
}

long cdecklink_video_frame_get_row_bytes(cdecklink_video_frame_t *obj) {
	return obj->GetRowBytes();
}

DecklinkPixelFormat cdecklink_video_frame_get_pixel_format(cdecklink_video_frame_t *obj) {
	return obj->GetPixelFormat();
}

DecklinkFrameFlags cdecklink_video_frame_get_flags(cdecklink_video_frame_t *obj) {
	return obj->GetFlags();
}

HRESULT cdecklink_video_frame_get_timecode(cdecklink_video_frame_t *obj, DecklinkTimecodeFormat format, cdecklink_timecode_t ** timecode) {
	return obj->GetTimecode((BMDTimecodeFormat)format, (IDeckLinkTimecode **)timecode);
}

HRESULT cdecklink_video_frame_get_ancillary_data(cdecklink_video_frame_t *obj, cdecklink_video_frame_ancillary_t ** ancillary) {
	return obj->GetAncillaryData((IDeckLinkVideoFrameAncillary **)ancillary);
}


cdecklink_video_frame_t *cdecklink_mutable_video_frame_to_video_frame(cdecklink_mutable_video_frame_t *obj) {
	return obj;
}

unsigned long cdecklink_mutable_video_frame_add_ref(cdecklink_mutable_video_frame_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_mutable_video_frame_release(cdecklink_mutable_video_frame_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_mutable_video_frame_set_flags(cdecklink_mutable_video_frame_t *obj, DecklinkFrameFlags newFlags) {
	return obj->SetFlags((BMDFrameFlags)newFlags);
}

HRESULT cdecklink_mutable_video_frame_set_timecode(cdecklink_mutable_video_frame_t *obj, DecklinkTimecodeFormat format, cdecklink_timecode_t * timecode) {
	return obj->SetTimecode((BMDTimecodeFormat)format, (IDeckLinkTimecode *)timecode);
}

HRESULT cdecklink_mutable_video_frame_set_timecode_from_components(cdecklink_mutable_video_frame_t *obj, DecklinkTimecodeFormat format, uint8_t hours, uint8_t minutes, uint8_t seconds, uint8_t frames, DecklinkTimecodeFlags flags) {
	return obj->SetTimecodeFromComponents((BMDTimecodeFormat)format, (uint8_t)hours, (uint8_t)minutes, (uint8_t)seconds, (uint8_t)frames, (BMDTimecodeFlags)flags);
}

HRESULT cdecklink_mutable_video_frame_set_ancillary_data(cdecklink_mutable_video_frame_t *obj, cdecklink_video_frame_ancillary_t * ancillary) {
	return obj->SetAncillaryData((IDeckLinkVideoFrameAncillary *)ancillary);
}

HRESULT cdecklink_mutable_video_frame_set_timecode_user_bits(cdecklink_mutable_video_frame_t *obj, DecklinkTimecodeFormat format, DecklinkTimecodeUserBits userBits) {
	return obj->SetTimecodeUserBits((BMDTimecodeFormat)format, (BMDTimecodeUserBits)userBits);
}


unsigned long cdecklink_video_frame3_d_extensions_add_ref(cdecklink_video_frame3_d_extensions_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_video_frame3_d_extensions_release(cdecklink_video_frame3_d_extensions_t *obj) {
	return obj->Release();
}

DecklinkVideo3DPackingFormat cdecklink_video_frame3_d_extensions_get3_d_packing_format(cdecklink_video_frame3_d_extensions_t *obj) {
	return obj->Get3DPackingFormat();
}

HRESULT cdecklink_video_frame3_d_extensions_get_frame_for_right_eye(cdecklink_video_frame3_d_extensions_t *obj, cdecklink_video_frame_t ** rightEyeFrame) {
	return obj->GetFrameForRightEye((IDeckLinkVideoFrame **)rightEyeFrame);
}


unsigned long cdecklink_video_frame_metadata_extensions_add_ref(cdecklink_video_frame_metadata_extensions_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_video_frame_metadata_extensions_release(cdecklink_video_frame_metadata_extensions_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_video_frame_metadata_extensions_get_int(cdecklink_video_frame_metadata_extensions_t *obj, DecklinkFrameMetadataID metadataID, int64_t * value) {
	return obj->GetInt((BMDDeckLinkFrameMetadataID)metadataID, (int64_t *)value);
}

HRESULT cdecklink_video_frame_metadata_extensions_get_float(cdecklink_video_frame_metadata_extensions_t *obj, DecklinkFrameMetadataID metadataID, double * value) {
	return obj->GetFloat((BMDDeckLinkFrameMetadataID)metadataID, (double *)value);
}

HRESULT cdecklink_video_frame_metadata_extensions_get_flag(cdecklink_video_frame_metadata_extensions_t *obj, DecklinkFrameMetadataID metadataID, bool * value) {
	return obj->GetFlag((BMDDeckLinkFrameMetadataID)metadataID, (bool *)value);
}

HRESULT cdecklink_video_frame_metadata_extensions_get_string(cdecklink_video_frame_metadata_extensions_t *obj, DecklinkFrameMetadataID metadataID, const char ** value) {
	return obj->GetString((BMDDeckLinkFrameMetadataID)metadataID, (const char **)value);
}

HRESULT cdecklink_video_frame_metadata_extensions_get_bytes(cdecklink_video_frame_metadata_extensions_t *obj, DecklinkFrameMetadataID metadataID, void * buffer, uint32_t * bufferSize) {
	return obj->GetBytes((BMDDeckLinkFrameMetadataID)metadataID, (void *)buffer, (uint32_t *)bufferSize);
}


cdecklink_video_frame_metadata_extensions_t *cdecklink_video_frame_mutable_metadata_extensions_to_video_frame_metadata_extensions(cdecklink_video_frame_mutable_metadata_extensions_t *obj) {
	return obj;
}

unsigned long cdecklink_video_frame_mutable_metadata_extensions_add_ref(cdecklink_video_frame_mutable_metadata_extensions_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_video_frame_mutable_metadata_extensions_release(cdecklink_video_frame_mutable_metadata_extensions_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_video_frame_mutable_metadata_extensions_set_int(cdecklink_video_frame_mutable_metadata_extensions_t *obj, DecklinkFrameMetadataID metadataID, int64_t value) {
	return obj->SetInt((BMDDeckLinkFrameMetadataID)metadataID, (int64_t)value);
}

HRESULT cdecklink_video_frame_mutable_metadata_extensions_set_float(cdecklink_video_frame_mutable_metadata_extensions_t *obj, DecklinkFrameMetadataID metadataID, double value) {
	return obj->SetFloat((BMDDeckLinkFrameMetadataID)metadataID, (double)value);
}

HRESULT cdecklink_video_frame_mutable_metadata_extensions_set_flag(cdecklink_video_frame_mutable_metadata_extensions_t *obj, DecklinkFrameMetadataID metadataID, bool value) {
	return obj->SetFlag((BMDDeckLinkFrameMetadataID)metadataID, (bool)value);
}

HRESULT cdecklink_video_frame_mutable_metadata_extensions_set_string(cdecklink_video_frame_mutable_metadata_extensions_t *obj, DecklinkFrameMetadataID metadataID, const char * value) {
	return obj->SetString((BMDDeckLinkFrameMetadataID)metadataID, (const char *)value);
}

HRESULT cdecklink_video_frame_mutable_metadata_extensions_set_bytes(cdecklink_video_frame_mutable_metadata_extensions_t *obj, DecklinkFrameMetadataID metadataID, void * buffer, uint32_t bufferSize) {
	return obj->SetBytes((BMDDeckLinkFrameMetadataID)metadataID, (void *)buffer, (uint32_t)bufferSize);
}


HRESULT cdecklink_video_frame_get_bytes(cdecklink_video_frame_t *obj, void ** buffer) {
	// Try new API (v15+): IDeckLinkVideoBuffer with StartAccess/EndAccess
	IDeckLinkVideoBuffer *videoBuffer = nullptr;
	HRESULT hr = obj->QueryInterface(IID_IDeckLinkVideoBuffer, reinterpret_cast<void**>(&videoBuffer));
	if (hr == S_OK && videoBuffer != nullptr) {
		hr = videoBuffer->StartAccess(bmdBufferAccessRead);
		if (hr == S_OK) {
			hr = videoBuffer->GetBytes(buffer);
		}
		videoBuffer->Release();
		return hr;
	}

	// Fallback to old API (v14.2.1): IDeckLinkVideoFrame_v14_2_1 which has GetBytes directly
	IDeckLinkVideoFrame_v14_2_1 *oldFrame = nullptr;
	hr = obj->QueryInterface(IID_IDeckLinkVideoFrame_v14_2_1, reinterpret_cast<void**>(&oldFrame));
	if (hr == S_OK && oldFrame != nullptr) {
		hr = oldFrame->GetBytes(buffer);
		oldFrame->Release();
		return hr;
	}

	return E_NOINTERFACE;
}

HRESULT cdecklink_video_frame_end_access(cdecklink_video_frame_t *obj) {
	IDeckLinkVideoBuffer *videoBuffer = nullptr;
	HRESULT hr = obj->QueryInterface(IID_IDeckLinkVideoBuffer, reinterpret_cast<void**>(&videoBuffer));
	if (hr == S_OK && videoBuffer != nullptr) {
		hr = videoBuffer->EndAccess(bmdBufferAccessRead);
		videoBuffer->Release();
		return hr;
	}
	// Old API doesn't need EndAccess
	return S_OK;
}

cdecklink_video_frame_t *cdecklink_video_input_frame_to_video_frame(cdecklink_video_input_frame_t *obj) {
	return obj;
}

unsigned long cdecklink_video_input_frame_add_ref(cdecklink_video_input_frame_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_video_input_frame_release(cdecklink_video_input_frame_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_video_input_frame_get_stream_time(cdecklink_video_input_frame_t *obj, DecklinkTimeValue * frameTime, DecklinkTimeValue * frameDuration, DecklinkTimeScale timeScale) {
	return obj->GetStreamTime((BMDTimeValue *)frameTime, (BMDTimeValue *)frameDuration, (BMDTimeScale)timeScale);
}

HRESULT cdecklink_video_input_frame_get_hardware_reference_timestamp(cdecklink_video_input_frame_t *obj, DecklinkTimeScale timeScale, DecklinkTimeValue * frameTime, DecklinkTimeValue * frameDuration) {
	return obj->GetHardwareReferenceTimestamp((BMDTimeScale)timeScale, (BMDTimeValue *)frameTime, (BMDTimeValue *)frameDuration);
}


unsigned long cdecklink_ancillary_packet_add_ref(cdecklink_ancillary_packet_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_ancillary_packet_release(cdecklink_ancillary_packet_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_ancillary_packet_get_bytes(cdecklink_ancillary_packet_t *obj, DecklinkAncillaryPacketFormat format, const void ** data, uint32_t * size) {
	return obj->GetBytes((BMDAncillaryPacketFormat)format, (const void **)data, (uint32_t *)size);
}

uint8_t cdecklink_ancillary_packet_get_did(cdecklink_ancillary_packet_t *obj) {
	return obj->GetDID();
}

uint8_t cdecklink_ancillary_packet_get_sdid(cdecklink_ancillary_packet_t *obj) {
	return obj->GetSDID();
}

uint32_t cdecklink_ancillary_packet_get_line_number(cdecklink_ancillary_packet_t *obj) {
	return obj->GetLineNumber();
}

uint8_t cdecklink_ancillary_packet_get_data_stream_index(cdecklink_ancillary_packet_t *obj) {
	return obj->GetDataStreamIndex();
}

DecklinkAncillaryDataSpace cdecklink_ancillary_packet_get_data_space(cdecklink_ancillary_packet_t *obj) {
	return obj->GetDataSpace();
}


unsigned long cdecklink_ancillary_packet_iterator_add_ref(cdecklink_ancillary_packet_iterator_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_ancillary_packet_iterator_release(cdecklink_ancillary_packet_iterator_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_ancillary_packet_iterator_next(cdecklink_ancillary_packet_iterator_t *obj, cdecklink_ancillary_packet_t ** packet) {
	return obj->Next((IDeckLinkAncillaryPacket **)packet);
}


unsigned long cdecklink_video_frame_ancillary_packets_add_ref(cdecklink_video_frame_ancillary_packets_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_video_frame_ancillary_packets_release(cdecklink_video_frame_ancillary_packets_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_video_frame_ancillary_packets_get_packet_iterator(cdecklink_video_frame_ancillary_packets_t *obj, cdecklink_ancillary_packet_iterator_t ** iterator) {
	return obj->GetPacketIterator((IDeckLinkAncillaryPacketIterator **)iterator);
}

HRESULT cdecklink_video_frame_ancillary_packets_get_first_packet_by_id(cdecklink_video_frame_ancillary_packets_t *obj, uint8_t DID, uint8_t SDID, cdecklink_ancillary_packet_t ** packet) {
	return obj->GetFirstPacketByID((uint8_t)DID, (uint8_t)SDID, (IDeckLinkAncillaryPacket **)packet);
}

HRESULT cdecklink_video_frame_ancillary_packets_attach_packet(cdecklink_video_frame_ancillary_packets_t *obj, cdecklink_ancillary_packet_t * packet) {
	return obj->AttachPacket((IDeckLinkAncillaryPacket *)packet);
}

HRESULT cdecklink_video_frame_ancillary_packets_detach_packet(cdecklink_video_frame_ancillary_packets_t *obj, cdecklink_ancillary_packet_t * packet) {
	return obj->DetachPacket((IDeckLinkAncillaryPacket *)packet);
}

HRESULT cdecklink_video_frame_ancillary_packets_detach_all_packets(cdecklink_video_frame_ancillary_packets_t *obj) {
	return obj->DetachAllPackets();
}


unsigned long cdecklink_video_frame_ancillary_add_ref(cdecklink_video_frame_ancillary_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_video_frame_ancillary_release(cdecklink_video_frame_ancillary_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_video_frame_ancillary_get_buffer_for_vertical_blanking_line(cdecklink_video_frame_ancillary_t *obj, uint32_t lineNumber, void ** buffer) {
	return obj->GetBufferForVerticalBlankingLine((uint32_t)lineNumber, (void **)buffer);
}

DecklinkPixelFormat cdecklink_video_frame_ancillary_get_pixel_format(cdecklink_video_frame_ancillary_t *obj) {
	return obj->GetPixelFormat();
}

DecklinkDisplayMode cdecklink_video_frame_ancillary_get_display_mode(cdecklink_video_frame_ancillary_t *obj) {
	return obj->GetDisplayMode();
}


unsigned long cdecklink_encoder_packet_add_ref(cdecklink_encoder_packet_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_encoder_packet_release(cdecklink_encoder_packet_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_encoder_packet_get_bytes(cdecklink_encoder_packet_t *obj, void ** buffer) {
	return obj->GetBytes((void **)buffer);
}

long cdecklink_encoder_packet_get_size(cdecklink_encoder_packet_t *obj) {
	return obj->GetSize();
}

HRESULT cdecklink_encoder_packet_get_stream_time(cdecklink_encoder_packet_t *obj, DecklinkTimeValue * frameTime, DecklinkTimeScale timeScale) {
	return obj->GetStreamTime((BMDTimeValue *)frameTime, (BMDTimeScale)timeScale);
}

DecklinkPacketType cdecklink_encoder_packet_get_packet_type(cdecklink_encoder_packet_t *obj) {
	return obj->GetPacketType();
}


cdecklink_encoder_packet_t *cdecklink_encoder_video_packet_to_encoder_packet(cdecklink_encoder_video_packet_t *obj) {
	return obj;
}

unsigned long cdecklink_encoder_video_packet_add_ref(cdecklink_encoder_video_packet_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_encoder_video_packet_release(cdecklink_encoder_video_packet_t *obj) {
	return obj->Release();
}

DecklinkPixelFormat cdecklink_encoder_video_packet_get_pixel_format(cdecklink_encoder_video_packet_t *obj) {
	return obj->GetPixelFormat();
}

HRESULT cdecklink_encoder_video_packet_get_hardware_reference_timestamp(cdecklink_encoder_video_packet_t *obj, DecklinkTimeScale timeScale, DecklinkTimeValue * frameTime, DecklinkTimeValue * frameDuration) {
	return obj->GetHardwareReferenceTimestamp((BMDTimeScale)timeScale, (BMDTimeValue *)frameTime, (BMDTimeValue *)frameDuration);
}

HRESULT cdecklink_encoder_video_packet_get_timecode(cdecklink_encoder_video_packet_t *obj, DecklinkTimecodeFormat format, cdecklink_timecode_t ** timecode) {
	return obj->GetTimecode((BMDTimecodeFormat)format, (IDeckLinkTimecode **)timecode);
}


cdecklink_encoder_packet_t *cdecklink_encoder_audio_packet_to_encoder_packet(cdecklink_encoder_audio_packet_t *obj) {
	return obj;
}

unsigned long cdecklink_encoder_audio_packet_add_ref(cdecklink_encoder_audio_packet_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_encoder_audio_packet_release(cdecklink_encoder_audio_packet_t *obj) {
	return obj->Release();
}

DecklinkAudioFormat cdecklink_encoder_audio_packet_get_audio_format(cdecklink_encoder_audio_packet_t *obj) {
	return obj->GetAudioFormat();
}


cdecklink_encoder_video_packet_t *cdecklink_h265nal_packet_to_encoder_video_packet(cdecklink_h265nal_packet_t *obj) {
	return obj;
}

unsigned long cdecklink_h265nal_packet_add_ref(cdecklink_h265nal_packet_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_h265nal_packet_release(cdecklink_h265nal_packet_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_h265nal_packet_get_unit_type(cdecklink_h265nal_packet_t *obj, uint8_t * unitType) {
	return obj->GetUnitType((uint8_t *)unitType);
}

HRESULT cdecklink_h265nal_packet_get_bytes_no_prefix(cdecklink_h265nal_packet_t *obj, void ** buffer) {
	return obj->GetBytesNoPrefix((void **)buffer);
}

long cdecklink_h265nal_packet_get_size_no_prefix(cdecklink_h265nal_packet_t *obj) {
	return obj->GetSizeNoPrefix();
}


unsigned long cdecklink_audio_input_packet_add_ref(cdecklink_audio_input_packet_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_audio_input_packet_release(cdecklink_audio_input_packet_t *obj) {
	return obj->Release();
}

long cdecklink_audio_input_packet_get_sample_frame_count(cdecklink_audio_input_packet_t *obj) {
	return obj->GetSampleFrameCount();
}

HRESULT cdecklink_audio_input_packet_get_bytes(cdecklink_audio_input_packet_t *obj, void ** buffer) {
	return obj->GetBytes((void **)buffer);
}

HRESULT cdecklink_audio_input_packet_get_packet_time(cdecklink_audio_input_packet_t *obj, DecklinkTimeValue * packetTime, DecklinkTimeScale timeScale) {
	return obj->GetPacketTime((BMDTimeValue *)packetTime, (BMDTimeScale)timeScale);
}


unsigned long cdecklink_gl_screen_preview_helper_add_ref(cdecklink_gl_screen_preview_helper_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_gl_screen_preview_helper_release(cdecklink_gl_screen_preview_helper_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_gl_screen_preview_helper_initialize_gl(cdecklink_gl_screen_preview_helper_t *obj) {
	return obj->InitializeGL();
}

HRESULT cdecklink_gl_screen_preview_helper_paint_gl(cdecklink_gl_screen_preview_helper_t *obj) {
	return obj->PaintGL();
}

HRESULT cdecklink_gl_screen_preview_helper_set_frame(cdecklink_gl_screen_preview_helper_t *obj, cdecklink_video_frame_t * theFrame) {
	return obj->SetFrame((IDeckLinkVideoFrame *)theFrame);
}

HRESULT cdecklink_gl_screen_preview_helper_set3_d_preview_format(cdecklink_gl_screen_preview_helper_t *obj, Decklink3DPreviewFormat previewFormat) {
	return obj->Set3DPreviewFormat((BMD3DPreviewFormat)previewFormat);
}


unsigned long cdecklink_notification_add_ref(cdecklink_notification_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_notification_release(cdecklink_notification_t *obj) {
	return obj->Release();
}


unsigned long cdecklink_profile_attributes_add_ref(cdecklink_profile_attributes_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_profile_attributes_release(cdecklink_profile_attributes_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_profile_attributes_get_flag(cdecklink_profile_attributes_t *obj, DecklinkAttributeID cfgID, bool * value) {
	return obj->GetFlag((BMDDeckLinkAttributeID)cfgID, (bool *)value);
}

HRESULT cdecklink_profile_attributes_get_int(cdecklink_profile_attributes_t *obj, DecklinkAttributeID cfgID, int64_t * value) {
	return obj->GetInt((BMDDeckLinkAttributeID)cfgID, (int64_t *)value);
}

HRESULT cdecklink_profile_attributes_get_float(cdecklink_profile_attributes_t *obj, DecklinkAttributeID cfgID, double * value) {
	return obj->GetFloat((BMDDeckLinkAttributeID)cfgID, (double *)value);
}

HRESULT cdecklink_profile_attributes_get_string(cdecklink_profile_attributes_t *obj, DecklinkAttributeID cfgID, const char ** value) {
	return obj->GetString((BMDDeckLinkAttributeID)cfgID, (const char **)value);
}


unsigned long cdecklink_profile_iterator_add_ref(cdecklink_profile_iterator_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_profile_iterator_release(cdecklink_profile_iterator_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_profile_iterator_next(cdecklink_profile_iterator_t *obj, cdecklink_profile_t ** profile) {
	return obj->Next((IDeckLinkProfile **)profile);
}


unsigned long cdecklink_profile_add_ref(cdecklink_profile_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_profile_release(cdecklink_profile_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_profile_get_device(cdecklink_profile_t *obj, cdecklink_device_t ** device) {
	return obj->GetDevice((IDeckLink **)device);
}

HRESULT cdecklink_profile_is_active(cdecklink_profile_t *obj, bool * isActive) {
	return obj->IsActive((bool *)isActive);
}

HRESULT cdecklink_profile_set_active(cdecklink_profile_t *obj) {
	return obj->SetActive();
}

HRESULT cdecklink_profile_get_peers(cdecklink_profile_t *obj, cdecklink_profile_iterator_t ** profileIterator) {
	return obj->GetPeers((IDeckLinkProfileIterator **)profileIterator);
}


unsigned long cdecklink_profile_manager_add_ref(cdecklink_profile_manager_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_profile_manager_release(cdecklink_profile_manager_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_profile_manager_get_profiles(cdecklink_profile_manager_t *obj, cdecklink_profile_iterator_t ** profileIterator) {
	return obj->GetProfiles((IDeckLinkProfileIterator **)profileIterator);
}

HRESULT cdecklink_profile_manager_get_profile(cdecklink_profile_manager_t *obj, DecklinkProfileID profileID, cdecklink_profile_t ** profile) {
	return obj->GetProfile((BMDProfileID)profileID, (IDeckLinkProfile **)profile);
}

HRESULT cdecklink_profile_manager_set_callback(cdecklink_profile_manager_t *obj, void *ctx, cdecklink_profile_callback_profile_changing* cb0, cdecklink_profile_callback_profile_activated* cb1) {
	IDeckLinkProfileCallback * handler = cdecklink_internal_callback_create_deck_link_profile_callback(ctx, cb0, cb1);
	return obj->SetCallback(handler);
}


unsigned long cdecklink_status_add_ref(cdecklink_status_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_status_release(cdecklink_status_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_status_get_flag(cdecklink_status_t *obj, DecklinkStatusID statusID, bool * value) {
	return obj->GetFlag((BMDDeckLinkStatusID)statusID, (bool *)value);
}

HRESULT cdecklink_status_get_int(cdecklink_status_t *obj, DecklinkStatusID statusID, int64_t * value) {
	return obj->GetInt((BMDDeckLinkStatusID)statusID, (int64_t *)value);
}

HRESULT cdecklink_status_get_float(cdecklink_status_t *obj, DecklinkStatusID statusID, double * value) {
	return obj->GetFloat((BMDDeckLinkStatusID)statusID, (double *)value);
}

HRESULT cdecklink_status_get_string(cdecklink_status_t *obj, DecklinkStatusID statusID, const char ** value) {
	return obj->GetString((BMDDeckLinkStatusID)statusID, (const char **)value);
}

HRESULT cdecklink_status_get_bytes(cdecklink_status_t *obj, DecklinkStatusID statusID, void * buffer, uint32_t * bufferSize) {
	return obj->GetBytes((BMDDeckLinkStatusID)statusID, (void *)buffer, (uint32_t *)bufferSize);
}


unsigned long cdecklink_keyer_add_ref(cdecklink_keyer_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_keyer_release(cdecklink_keyer_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_keyer_enable(cdecklink_keyer_t *obj, bool isExternal) {
	return obj->Enable((bool)isExternal);
}

HRESULT cdecklink_keyer_set_level(cdecklink_keyer_t *obj, uint8_t level) {
	return obj->SetLevel((uint8_t)level);
}

HRESULT cdecklink_keyer_ramp_up(cdecklink_keyer_t *obj, uint32_t numberOfFrames) {
	return obj->RampUp((uint32_t)numberOfFrames);
}

HRESULT cdecklink_keyer_ramp_down(cdecklink_keyer_t *obj, uint32_t numberOfFrames) {
	return obj->RampDown((uint32_t)numberOfFrames);
}

HRESULT cdecklink_keyer_disable(cdecklink_keyer_t *obj) {
	return obj->Disable();
}


unsigned long cdecklink_video_conversion_add_ref(cdecklink_video_conversion_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_video_conversion_release(cdecklink_video_conversion_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_video_conversion_convert_frame(cdecklink_video_conversion_t *obj, cdecklink_video_frame_t * srcFrame, cdecklink_video_frame_t * dstFrame) {
	return obj->ConvertFrame((IDeckLinkVideoFrame *)srcFrame, (IDeckLinkVideoFrame *)dstFrame);
}

HRESULT cdecklink_video_conversion_convert_new_frame(cdecklink_video_conversion_t *obj, cdecklink_video_frame_t * srcFrame, DecklinkPixelFormat dstPixelFormat, DecklinkColorspace dstColorspace, cdecklink_video_buffer_t * dstBuffer, cdecklink_video_frame_t ** dstFrame) {
	return obj->ConvertNewFrame((IDeckLinkVideoFrame *)srcFrame, (BMDPixelFormat)dstPixelFormat, (BMDColorspace)dstColorspace, (IDeckLinkVideoBuffer *)dstBuffer, (IDeckLinkVideoFrame **)dstFrame);
}


unsigned long cdecklink_discovery_add_ref(cdecklink_discovery_t *obj) {
	return obj->AddRef();
}

unsigned long cdecklink_discovery_release(cdecklink_discovery_t *obj) {
	return obj->Release();
}

HRESULT cdecklink_discovery_install_device_notifications(cdecklink_discovery_t *obj, void *ctx, cdecklink_device_notification_callback_deck_link_device_arrived* cb0, cdecklink_device_notification_callback_deck_link_device_removed* cb1) {
	IDeckLinkDeviceNotificationCallback * handler = cdecklink_internal_callback_create_deck_link_device_notification_callback(ctx, cb0, cb1);
	return obj->InstallDeviceNotifications(handler);
}

HRESULT cdecklink_discovery_uninstall_device_notifications(cdecklink_discovery_t *obj) {
	return obj->UninstallDeviceNotifications();
}


cdecklink_iterator_t * cdecklink_create_decklink_iterator_instance() {
	return CreateDeckLinkIteratorInstance();
}

cdecklink_discovery_t * cdecklink_create_decklink_discovery_instance() {
	return CreateDeckLinkDiscoveryInstance();
}

cdecklink_api_information_t * cdecklink_create_decklink_api_information_instance() {
	return CreateDeckLinkAPIInformationInstance();
}

cdecklink_gl_screen_preview_helper_t * cdecklink_create_open_gl_screen_preview_helper() {
	return CreateOpenGLScreenPreviewHelper();
}

cdecklink_gl_screen_preview_helper_t * cdecklink_create_open_gl3_screen_preview_helper() {
	return CreateOpenGL3ScreenPreviewHelper();
}

cdecklink_video_conversion_t * cdecklink_create_video_conversion_instance() {
	return CreateVideoConversionInstance();
}

cdecklink_video_frame_ancillary_packets_t * cdecklink_create_video_frame_ancillary_packets_instance() {
	return CreateVideoFrameAncillaryPacketsInstance();
}

HRESULT cdecklink_device_query_output(cdecklink_device_t *obj, cdecklink_output_t **dst) {
	return obj->QueryInterface(IID_IDeckLinkOutput, reinterpret_cast<void**>(dst));
}

HRESULT cdecklink_device_query_input(cdecklink_device_t *obj, cdecklink_input_t **dst) {
	return obj->QueryInterface(IID_IDeckLinkInput, reinterpret_cast<void**>(dst));
}

HRESULT cdecklink_device_query_hdmi_input_edid(cdecklink_device_t *obj, cdecklink_hdmi_input_edid_t **dst) {
	return obj->QueryInterface(IID_IDeckLinkHDMIInputEDID, reinterpret_cast<void**>(dst));
}

HRESULT cdecklink_device_query_encoder_input(cdecklink_device_t *obj, cdecklink_encoder_input_t **dst) {
	return obj->QueryInterface(IID_IDeckLinkEncoderInput, reinterpret_cast<void**>(dst));
}

HRESULT cdecklink_video_frame_query_video_frame_ancillary_packets(cdecklink_video_frame_t *obj, cdecklink_video_frame_ancillary_packets_t **dst) {
	return obj->QueryInterface(IID_IDeckLinkVideoFrameAncillaryPackets, reinterpret_cast<void**>(dst));
}

HRESULT cdecklink_video_frame_query_video_frame_ancillary(cdecklink_video_frame_t *obj, cdecklink_video_frame_ancillary_t **dst) {
	return obj->QueryInterface(IID_IDeckLinkVideoFrameAncillary, reinterpret_cast<void**>(dst));
}

HRESULT cdecklink_encoder_video_packet_query_h265nal_packet(cdecklink_encoder_video_packet_t *obj, cdecklink_h265nal_packet_t **dst) {
	return obj->QueryInterface(IID_IDeckLinkH265NALPacket, reinterpret_cast<void**>(dst));
}

HRESULT cdecklink_device_query_profile_attributes(cdecklink_device_t *obj, cdecklink_profile_attributes_t **dst) {
	return obj->QueryInterface(IID_IDeckLinkProfileAttributes, reinterpret_cast<void**>(dst));
}

HRESULT cdecklink_device_query_profile_manager(cdecklink_device_t *obj, cdecklink_profile_manager_t **dst) {
	return obj->QueryInterface(IID_IDeckLinkProfileManager, reinterpret_cast<void**>(dst));
}

