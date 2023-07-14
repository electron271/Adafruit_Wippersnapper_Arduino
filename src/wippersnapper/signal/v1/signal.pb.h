/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5-dev at Fri Jul 14 15:58:44 2023. */

#ifndef PB_WIPPERSNAPPER_SIGNAL_V1_WIPPERSNAPPER_SIGNAL_V1_SIGNAL_PB_H_INCLUDED
#define PB_WIPPERSNAPPER_SIGNAL_V1_WIPPERSNAPPER_SIGNAL_V1_SIGNAL_PB_H_INCLUDED
#include <pb.h>
#include "nanopb/nanopb.pb.h"
#include "wippersnapper/pin/v1/pin.pb.h"
#include "wippersnapper/i2c/v1/i2c.pb.h"
#include "wippersnapper/servo/v1/servo.pb.h"
#include "wippersnapper/pwm/v1/pwm.pb.h"
#include "wippersnapper/ds18x20/v1/ds18x20.pb.h"
#include "wippersnapper/pixels/v1/pixels.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _wippersnapper_signal_v1_CreateSignalRequest {
    pb_callback_t cb_payload;
    pb_size_t which_payload;
    union {
        wippersnapper_pin_v1_ConfigurePinRequests pin_configs;
        wippersnapper_pin_v1_PinEvents pin_events;
        wippersnapper_pin_v1_PinEvent pin_event;
    } payload;
} wippersnapper_signal_v1_CreateSignalRequest;

typedef struct _wippersnapper_signal_v1_Ds18x20Request {
    pb_callback_t cb_payload;
    pb_size_t which_payload;
    union {
        wippersnapper_ds18x20_v1_Ds18x20InitRequest req_ds18x20_init;
        wippersnapper_ds18x20_v1_Ds18x20DeInitRequest req_ds18x20_deinit;
    } payload;
} wippersnapper_signal_v1_Ds18x20Request;

typedef struct _wippersnapper_signal_v1_Ds18x20Response {
    pb_callback_t cb_payload;
    pb_size_t which_payload;
    union {
        wippersnapper_ds18x20_v1_Ds18x20InitResponse resp_ds18x20_init;
        wippersnapper_ds18x20_v1_Ds18x20DeviceEvent resp_ds18x20_event;
    } payload;
} wippersnapper_signal_v1_Ds18x20Response;

typedef struct _wippersnapper_signal_v1_I2CRequest {
    pb_callback_t cb_payload;
    pb_size_t which_payload;
    union {
        wippersnapper_i2c_v1_I2CBusScanRequest req_i2c_scan;
        wippersnapper_i2c_v1_I2CBusSetFrequency req_i2c_set_freq;
        wippersnapper_i2c_v1_I2CDeviceInitRequest req_i2c_device_init;
        wippersnapper_i2c_v1_I2CDeviceDeinitRequest req_i2c_device_deinit;
        wippersnapper_i2c_v1_I2CDeviceUpdateRequest req_i2c_device_update;
        wippersnapper_i2c_v1_I2CDeviceInitRequests req_i2c_device_init_requests;
    } payload;
} wippersnapper_signal_v1_I2CRequest;

typedef struct _wippersnapper_signal_v1_I2CResponse {
    pb_callback_t cb_payload;
    pb_size_t which_payload;
    union {
        wippersnapper_i2c_v1_I2CBusScanResponse resp_i2c_scan;
        wippersnapper_i2c_v1_I2CDeviceInitResponse resp_i2c_device_init;
        wippersnapper_i2c_v1_I2CDeviceDeinitResponse resp_i2c_device_deinit;
        wippersnapper_i2c_v1_I2CDeviceUpdateResponse resp_i2c_device_update;
        wippersnapper_i2c_v1_I2CDeviceEvent resp_i2c_device_event;
    } payload;
} wippersnapper_signal_v1_I2CResponse;

typedef struct _wippersnapper_signal_v1_PWMRequest {
    pb_callback_t cb_payload;
    pb_size_t which_payload;
    union {
        wippersnapper_pwm_v1_PWMAttachRequest attach_request;
        wippersnapper_pwm_v1_PWMDetachRequest detach_request;
        wippersnapper_pwm_v1_PWMWriteDutyCycleRequest write_duty_request;
        wippersnapper_pwm_v1_PWMWriteDutyCycleMultiRequest write_duty_multi_request;
        wippersnapper_pwm_v1_PWMWriteFrequencyRequest write_freq_request;
    } payload;
} wippersnapper_signal_v1_PWMRequest;

typedef struct _wippersnapper_signal_v1_PWMResponse {
    pb_callback_t cb_payload;
    pb_size_t which_payload;
    union {
        wippersnapper_pwm_v1_PWMAttachResponse attach_response;
    } payload;
} wippersnapper_signal_v1_PWMResponse;

typedef struct _wippersnapper_signal_v1_PixelsRequest {
    pb_callback_t cb_payload;
    pb_size_t which_payload;
    union {
        wippersnapper_pixels_v1_PixelsCreateRequest req_pixels_create;
        wippersnapper_pixels_v1_PixelsDeleteRequest req_pixels_delete;
        wippersnapper_pixels_v1_PixelsWriteRequest req_pixels_write;
    } payload;
} wippersnapper_signal_v1_PixelsRequest;

typedef struct _wippersnapper_signal_v1_PixelsResponse {
    pb_callback_t cb_payload;
    pb_size_t which_payload;
    union {
        wippersnapper_pixels_v1_PixelsCreateResponse resp_pixels_create;
    } payload;
} wippersnapper_signal_v1_PixelsResponse;

typedef struct _wippersnapper_signal_v1_ServoRequest {
    pb_callback_t cb_payload;
    pb_size_t which_payload;
    union {
        wippersnapper_servo_v1_ServoAttachRequest servo_attach;
        wippersnapper_servo_v1_ServoDetachRequest servo_detach;
        wippersnapper_servo_v1_ServoWriteRequest servo_write;
    } payload;
} wippersnapper_signal_v1_ServoRequest;

typedef struct _wippersnapper_signal_v1_ServoResponse {
    pb_callback_t cb_payload;
    pb_size_t which_payload;
    union {
        wippersnapper_servo_v1_ServoAttachResponse servo_attach_resp;
    } payload;
} wippersnapper_signal_v1_ServoResponse;

typedef struct _wippersnapper_signal_v1_SignalResponse {
    pb_size_t which_payload;
    union {
        bool configuration_complete;
    } payload;
} wippersnapper_signal_v1_SignalResponse;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define wippersnapper_signal_v1_Ds18x20Request_init_default {{{NULL}, NULL}, 0, {wippersnapper_ds18x20_v1_Ds18x20InitRequest_init_default}}
#define wippersnapper_signal_v1_Ds18x20Response_init_default {{{NULL}, NULL}, 0, {wippersnapper_ds18x20_v1_Ds18x20InitResponse_init_default}}
#define wippersnapper_signal_v1_I2CRequest_init_default {{{NULL}, NULL}, 0, {wippersnapper_i2c_v1_I2CBusScanRequest_init_default}}
#define wippersnapper_signal_v1_I2CResponse_init_default {{{NULL}, NULL}, 0, {wippersnapper_i2c_v1_I2CBusScanResponse_init_default}}
#define wippersnapper_signal_v1_ServoRequest_init_default {{{NULL}, NULL}, 0, {wippersnapper_servo_v1_ServoAttachRequest_init_default}}
#define wippersnapper_signal_v1_ServoResponse_init_default {{{NULL}, NULL}, 0, {wippersnapper_servo_v1_ServoAttachResponse_init_default}}
#define wippersnapper_signal_v1_PixelsRequest_init_default {{{NULL}, NULL}, 0, {wippersnapper_pixels_v1_PixelsCreateRequest_init_default}}
#define wippersnapper_signal_v1_PixelsResponse_init_default {{{NULL}, NULL}, 0, {wippersnapper_pixels_v1_PixelsCreateResponse_init_default}}
#define wippersnapper_signal_v1_CreateSignalRequest_init_default {{{NULL}, NULL}, 0, {wippersnapper_pin_v1_ConfigurePinRequests_init_default}}
#define wippersnapper_signal_v1_SignalResponse_init_default {0, {0}}
#define wippersnapper_signal_v1_PWMRequest_init_default {{{NULL}, NULL}, 0, {wippersnapper_pwm_v1_PWMAttachRequest_init_default}}
#define wippersnapper_signal_v1_PWMResponse_init_default {{{NULL}, NULL}, 0, {wippersnapper_pwm_v1_PWMAttachResponse_init_default}}
#define wippersnapper_signal_v1_Ds18x20Request_init_zero {{{NULL}, NULL}, 0, {wippersnapper_ds18x20_v1_Ds18x20InitRequest_init_zero}}
#define wippersnapper_signal_v1_Ds18x20Response_init_zero {{{NULL}, NULL}, 0, {wippersnapper_ds18x20_v1_Ds18x20InitResponse_init_zero}}
#define wippersnapper_signal_v1_I2CRequest_init_zero {{{NULL}, NULL}, 0, {wippersnapper_i2c_v1_I2CBusScanRequest_init_zero}}
#define wippersnapper_signal_v1_I2CResponse_init_zero {{{NULL}, NULL}, 0, {wippersnapper_i2c_v1_I2CBusScanResponse_init_zero}}
#define wippersnapper_signal_v1_ServoRequest_init_zero {{{NULL}, NULL}, 0, {wippersnapper_servo_v1_ServoAttachRequest_init_zero}}
#define wippersnapper_signal_v1_ServoResponse_init_zero {{{NULL}, NULL}, 0, {wippersnapper_servo_v1_ServoAttachResponse_init_zero}}
#define wippersnapper_signal_v1_PixelsRequest_init_zero {{{NULL}, NULL}, 0, {wippersnapper_pixels_v1_PixelsCreateRequest_init_zero}}
#define wippersnapper_signal_v1_PixelsResponse_init_zero {{{NULL}, NULL}, 0, {wippersnapper_pixels_v1_PixelsCreateResponse_init_zero}}
#define wippersnapper_signal_v1_CreateSignalRequest_init_zero {{{NULL}, NULL}, 0, {wippersnapper_pin_v1_ConfigurePinRequests_init_zero}}
#define wippersnapper_signal_v1_SignalResponse_init_zero {0, {0}}
#define wippersnapper_signal_v1_PWMRequest_init_zero {{{NULL}, NULL}, 0, {wippersnapper_pwm_v1_PWMAttachRequest_init_zero}}
#define wippersnapper_signal_v1_PWMResponse_init_zero {{{NULL}, NULL}, 0, {wippersnapper_pwm_v1_PWMAttachResponse_init_zero}}

/* Field tags (for use in manual encoding/decoding) */
#define wippersnapper_signal_v1_CreateSignalRequest_pin_configs_tag 6
#define wippersnapper_signal_v1_CreateSignalRequest_pin_events_tag 7
#define wippersnapper_signal_v1_CreateSignalRequest_pin_event_tag 15
#define wippersnapper_signal_v1_Ds18x20Request_req_ds18x20_init_tag 1
#define wippersnapper_signal_v1_Ds18x20Request_req_ds18x20_deinit_tag 2
#define wippersnapper_signal_v1_Ds18x20Response_resp_ds18x20_init_tag 1
#define wippersnapper_signal_v1_Ds18x20Response_resp_ds18x20_event_tag 2
#define wippersnapper_signal_v1_I2CRequest_req_i2c_scan_tag 2
#define wippersnapper_signal_v1_I2CRequest_req_i2c_set_freq_tag 3
#define wippersnapper_signal_v1_I2CRequest_req_i2c_device_init_tag 4
#define wippersnapper_signal_v1_I2CRequest_req_i2c_device_deinit_tag 5
#define wippersnapper_signal_v1_I2CRequest_req_i2c_device_update_tag 6
#define wippersnapper_signal_v1_I2CRequest_req_i2c_device_init_requests_tag 7
#define wippersnapper_signal_v1_I2CResponse_resp_i2c_scan_tag 2
#define wippersnapper_signal_v1_I2CResponse_resp_i2c_device_init_tag 3
#define wippersnapper_signal_v1_I2CResponse_resp_i2c_device_deinit_tag 4
#define wippersnapper_signal_v1_I2CResponse_resp_i2c_device_update_tag 5
#define wippersnapper_signal_v1_I2CResponse_resp_i2c_device_event_tag 6
#define wippersnapper_signal_v1_PWMRequest_attach_request_tag 1
#define wippersnapper_signal_v1_PWMRequest_detach_request_tag 2
#define wippersnapper_signal_v1_PWMRequest_write_duty_request_tag 3
#define wippersnapper_signal_v1_PWMRequest_write_duty_multi_request_tag 4
#define wippersnapper_signal_v1_PWMRequest_write_freq_request_tag 5
#define wippersnapper_signal_v1_PWMResponse_attach_response_tag 1
#define wippersnapper_signal_v1_PixelsRequest_req_pixels_create_tag 1
#define wippersnapper_signal_v1_PixelsRequest_req_pixels_delete_tag 2
#define wippersnapper_signal_v1_PixelsRequest_req_pixels_write_tag 3
#define wippersnapper_signal_v1_PixelsResponse_resp_pixels_create_tag 1
#define wippersnapper_signal_v1_ServoRequest_servo_attach_tag 1
#define wippersnapper_signal_v1_ServoRequest_servo_detach_tag 2
#define wippersnapper_signal_v1_ServoRequest_servo_write_tag 3
#define wippersnapper_signal_v1_ServoResponse_servo_attach_resp_tag 1
#define wippersnapper_signal_v1_SignalResponse_configuration_complete_tag 1

/* Struct field encoding specification for nanopb */
#define wippersnapper_signal_v1_Ds18x20Request_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,req_ds18x20_init,payload.req_ds18x20_init),   1) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,req_ds18x20_deinit,payload.req_ds18x20_deinit),   2)
#define wippersnapper_signal_v1_Ds18x20Request_CALLBACK NULL
#define wippersnapper_signal_v1_Ds18x20Request_DEFAULT NULL
#define wippersnapper_signal_v1_Ds18x20Request_payload_req_ds18x20_init_MSGTYPE wippersnapper_ds18x20_v1_Ds18x20InitRequest
#define wippersnapper_signal_v1_Ds18x20Request_payload_req_ds18x20_deinit_MSGTYPE wippersnapper_ds18x20_v1_Ds18x20DeInitRequest

#define wippersnapper_signal_v1_Ds18x20Response_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,resp_ds18x20_init,payload.resp_ds18x20_init),   1) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,resp_ds18x20_event,payload.resp_ds18x20_event),   2)
#define wippersnapper_signal_v1_Ds18x20Response_CALLBACK NULL
#define wippersnapper_signal_v1_Ds18x20Response_DEFAULT NULL
#define wippersnapper_signal_v1_Ds18x20Response_payload_resp_ds18x20_init_MSGTYPE wippersnapper_ds18x20_v1_Ds18x20InitResponse
#define wippersnapper_signal_v1_Ds18x20Response_payload_resp_ds18x20_event_MSGTYPE wippersnapper_ds18x20_v1_Ds18x20DeviceEvent

#define wippersnapper_signal_v1_I2CRequest_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,req_i2c_scan,payload.req_i2c_scan),   2) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,req_i2c_set_freq,payload.req_i2c_set_freq),   3) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,req_i2c_device_init,payload.req_i2c_device_init),   4) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,req_i2c_device_deinit,payload.req_i2c_device_deinit),   5) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,req_i2c_device_update,payload.req_i2c_device_update),   6) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,req_i2c_device_init_requests,payload.req_i2c_device_init_requests),   7)
#define wippersnapper_signal_v1_I2CRequest_CALLBACK NULL
#define wippersnapper_signal_v1_I2CRequest_DEFAULT NULL
#define wippersnapper_signal_v1_I2CRequest_payload_req_i2c_scan_MSGTYPE wippersnapper_i2c_v1_I2CBusScanRequest
#define wippersnapper_signal_v1_I2CRequest_payload_req_i2c_set_freq_MSGTYPE wippersnapper_i2c_v1_I2CBusSetFrequency
#define wippersnapper_signal_v1_I2CRequest_payload_req_i2c_device_init_MSGTYPE wippersnapper_i2c_v1_I2CDeviceInitRequest
#define wippersnapper_signal_v1_I2CRequest_payload_req_i2c_device_deinit_MSGTYPE wippersnapper_i2c_v1_I2CDeviceDeinitRequest
#define wippersnapper_signal_v1_I2CRequest_payload_req_i2c_device_update_MSGTYPE wippersnapper_i2c_v1_I2CDeviceUpdateRequest
#define wippersnapper_signal_v1_I2CRequest_payload_req_i2c_device_init_requests_MSGTYPE wippersnapper_i2c_v1_I2CDeviceInitRequests

#define wippersnapper_signal_v1_I2CResponse_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,resp_i2c_scan,payload.resp_i2c_scan),   2) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,resp_i2c_device_init,payload.resp_i2c_device_init),   3) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,resp_i2c_device_deinit,payload.resp_i2c_device_deinit),   4) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,resp_i2c_device_update,payload.resp_i2c_device_update),   5) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,resp_i2c_device_event,payload.resp_i2c_device_event),   6)
#define wippersnapper_signal_v1_I2CResponse_CALLBACK NULL
#define wippersnapper_signal_v1_I2CResponse_DEFAULT NULL
#define wippersnapper_signal_v1_I2CResponse_payload_resp_i2c_scan_MSGTYPE wippersnapper_i2c_v1_I2CBusScanResponse
#define wippersnapper_signal_v1_I2CResponse_payload_resp_i2c_device_init_MSGTYPE wippersnapper_i2c_v1_I2CDeviceInitResponse
#define wippersnapper_signal_v1_I2CResponse_payload_resp_i2c_device_deinit_MSGTYPE wippersnapper_i2c_v1_I2CDeviceDeinitResponse
#define wippersnapper_signal_v1_I2CResponse_payload_resp_i2c_device_update_MSGTYPE wippersnapper_i2c_v1_I2CDeviceUpdateResponse
#define wippersnapper_signal_v1_I2CResponse_payload_resp_i2c_device_event_MSGTYPE wippersnapper_i2c_v1_I2CDeviceEvent

#define wippersnapper_signal_v1_ServoRequest_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,servo_attach,payload.servo_attach),   1) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,servo_detach,payload.servo_detach),   2) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,servo_write,payload.servo_write),   3)
#define wippersnapper_signal_v1_ServoRequest_CALLBACK NULL
#define wippersnapper_signal_v1_ServoRequest_DEFAULT NULL
#define wippersnapper_signal_v1_ServoRequest_payload_servo_attach_MSGTYPE wippersnapper_servo_v1_ServoAttachRequest
#define wippersnapper_signal_v1_ServoRequest_payload_servo_detach_MSGTYPE wippersnapper_servo_v1_ServoDetachRequest
#define wippersnapper_signal_v1_ServoRequest_payload_servo_write_MSGTYPE wippersnapper_servo_v1_ServoWriteRequest

#define wippersnapper_signal_v1_ServoResponse_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,servo_attach_resp,payload.servo_attach_resp),   1)
#define wippersnapper_signal_v1_ServoResponse_CALLBACK NULL
#define wippersnapper_signal_v1_ServoResponse_DEFAULT NULL
#define wippersnapper_signal_v1_ServoResponse_payload_servo_attach_resp_MSGTYPE wippersnapper_servo_v1_ServoAttachResponse

#define wippersnapper_signal_v1_PixelsRequest_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,req_pixels_create,payload.req_pixels_create),   1) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,req_pixels_delete,payload.req_pixels_delete),   2) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,req_pixels_write,payload.req_pixels_write),   3)
#define wippersnapper_signal_v1_PixelsRequest_CALLBACK NULL
#define wippersnapper_signal_v1_PixelsRequest_DEFAULT NULL
#define wippersnapper_signal_v1_PixelsRequest_payload_req_pixels_create_MSGTYPE wippersnapper_pixels_v1_PixelsCreateRequest
#define wippersnapper_signal_v1_PixelsRequest_payload_req_pixels_delete_MSGTYPE wippersnapper_pixels_v1_PixelsDeleteRequest
#define wippersnapper_signal_v1_PixelsRequest_payload_req_pixels_write_MSGTYPE wippersnapper_pixels_v1_PixelsWriteRequest

#define wippersnapper_signal_v1_PixelsResponse_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,resp_pixels_create,payload.resp_pixels_create),   1)
#define wippersnapper_signal_v1_PixelsResponse_CALLBACK NULL
#define wippersnapper_signal_v1_PixelsResponse_DEFAULT NULL
#define wippersnapper_signal_v1_PixelsResponse_payload_resp_pixels_create_MSGTYPE wippersnapper_pixels_v1_PixelsCreateResponse

#define wippersnapper_signal_v1_CreateSignalRequest_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,pin_configs,payload.pin_configs),   6) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,pin_events,payload.pin_events),   7) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,pin_event,payload.pin_event),  15)
#define wippersnapper_signal_v1_CreateSignalRequest_CALLBACK NULL
#define wippersnapper_signal_v1_CreateSignalRequest_DEFAULT NULL
#define wippersnapper_signal_v1_CreateSignalRequest_payload_pin_configs_MSGTYPE wippersnapper_pin_v1_ConfigurePinRequests
#define wippersnapper_signal_v1_CreateSignalRequest_payload_pin_events_MSGTYPE wippersnapper_pin_v1_PinEvents
#define wippersnapper_signal_v1_CreateSignalRequest_payload_pin_event_MSGTYPE wippersnapper_pin_v1_PinEvent

#define wippersnapper_signal_v1_SignalResponse_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    BOOL,     (payload,configuration_complete,payload.configuration_complete),   1)
#define wippersnapper_signal_v1_SignalResponse_CALLBACK NULL
#define wippersnapper_signal_v1_SignalResponse_DEFAULT NULL

#define wippersnapper_signal_v1_PWMRequest_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,attach_request,payload.attach_request),   1) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,detach_request,payload.detach_request),   2) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,write_duty_request,payload.write_duty_request),   3) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,write_duty_multi_request,payload.write_duty_multi_request),   4) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,write_freq_request,payload.write_freq_request),   5)
#define wippersnapper_signal_v1_PWMRequest_CALLBACK NULL
#define wippersnapper_signal_v1_PWMRequest_DEFAULT NULL
#define wippersnapper_signal_v1_PWMRequest_payload_attach_request_MSGTYPE wippersnapper_pwm_v1_PWMAttachRequest
#define wippersnapper_signal_v1_PWMRequest_payload_detach_request_MSGTYPE wippersnapper_pwm_v1_PWMDetachRequest
#define wippersnapper_signal_v1_PWMRequest_payload_write_duty_request_MSGTYPE wippersnapper_pwm_v1_PWMWriteDutyCycleRequest
#define wippersnapper_signal_v1_PWMRequest_payload_write_duty_multi_request_MSGTYPE wippersnapper_pwm_v1_PWMWriteDutyCycleMultiRequest
#define wippersnapper_signal_v1_PWMRequest_payload_write_freq_request_MSGTYPE wippersnapper_pwm_v1_PWMWriteFrequencyRequest

#define wippersnapper_signal_v1_PWMResponse_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,attach_response,payload.attach_response),   1)
#define wippersnapper_signal_v1_PWMResponse_CALLBACK NULL
#define wippersnapper_signal_v1_PWMResponse_DEFAULT NULL
#define wippersnapper_signal_v1_PWMResponse_payload_attach_response_MSGTYPE wippersnapper_pwm_v1_PWMAttachResponse

extern const pb_msgdesc_t wippersnapper_signal_v1_Ds18x20Request_msg;
extern const pb_msgdesc_t wippersnapper_signal_v1_Ds18x20Response_msg;
extern const pb_msgdesc_t wippersnapper_signal_v1_I2CRequest_msg;
extern const pb_msgdesc_t wippersnapper_signal_v1_I2CResponse_msg;
extern const pb_msgdesc_t wippersnapper_signal_v1_ServoRequest_msg;
extern const pb_msgdesc_t wippersnapper_signal_v1_ServoResponse_msg;
extern const pb_msgdesc_t wippersnapper_signal_v1_PixelsRequest_msg;
extern const pb_msgdesc_t wippersnapper_signal_v1_PixelsResponse_msg;
extern const pb_msgdesc_t wippersnapper_signal_v1_CreateSignalRequest_msg;
extern const pb_msgdesc_t wippersnapper_signal_v1_SignalResponse_msg;
extern const pb_msgdesc_t wippersnapper_signal_v1_PWMRequest_msg;
extern const pb_msgdesc_t wippersnapper_signal_v1_PWMResponse_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define wippersnapper_signal_v1_Ds18x20Request_fields &wippersnapper_signal_v1_Ds18x20Request_msg
#define wippersnapper_signal_v1_Ds18x20Response_fields &wippersnapper_signal_v1_Ds18x20Response_msg
#define wippersnapper_signal_v1_I2CRequest_fields &wippersnapper_signal_v1_I2CRequest_msg
#define wippersnapper_signal_v1_I2CResponse_fields &wippersnapper_signal_v1_I2CResponse_msg
#define wippersnapper_signal_v1_ServoRequest_fields &wippersnapper_signal_v1_ServoRequest_msg
#define wippersnapper_signal_v1_ServoResponse_fields &wippersnapper_signal_v1_ServoResponse_msg
#define wippersnapper_signal_v1_PixelsRequest_fields &wippersnapper_signal_v1_PixelsRequest_msg
#define wippersnapper_signal_v1_PixelsResponse_fields &wippersnapper_signal_v1_PixelsResponse_msg
#define wippersnapper_signal_v1_CreateSignalRequest_fields &wippersnapper_signal_v1_CreateSignalRequest_msg
#define wippersnapper_signal_v1_SignalResponse_fields &wippersnapper_signal_v1_SignalResponse_msg
#define wippersnapper_signal_v1_PWMRequest_fields &wippersnapper_signal_v1_PWMRequest_msg
#define wippersnapper_signal_v1_PWMResponse_fields &wippersnapper_signal_v1_PWMResponse_msg

/* Maximum encoded size of messages (where known) */
#define wippersnapper_signal_v1_Ds18x20Request_size 39
#define wippersnapper_signal_v1_Ds18x20Response_size 26
#if defined(wippersnapper_i2c_v1_I2CDeviceInitRequests_size)
union wippersnapper_signal_v1_I2CRequest_payload_size_union {char f7[(6 + wippersnapper_i2c_v1_I2CDeviceInitRequests_size)]; char f0[227];};
#define wippersnapper_signal_v1_I2CRequest_size  (0 + sizeof(union wippersnapper_signal_v1_I2CRequest_payload_size_union))
#endif
#define wippersnapper_signal_v1_I2CResponse_size 725
#define wippersnapper_signal_v1_ServoRequest_size 42
#define wippersnapper_signal_v1_ServoResponse_size 11
#define wippersnapper_signal_v1_PixelsRequest_size 39
#define wippersnapper_signal_v1_PixelsResponse_size 11
#if defined(wippersnapper_pin_v1_ConfigurePinRequests_size) && defined(wippersnapper_pin_v1_PinEvents_size)
union wippersnapper_signal_v1_CreateSignalRequest_payload_size_union {char f6[(6 + wippersnapper_pin_v1_ConfigurePinRequests_size)]; char f7[(6 + wippersnapper_pin_v1_PinEvents_size)]; char f0[21];};
#define wippersnapper_signal_v1_CreateSignalRequest_size (0 + sizeof(union wippersnapper_signal_v1_CreateSignalRequest_payload_size_union))
#endif
#define wippersnapper_signal_v1_SignalResponse_size 2
#define wippersnapper_signal_v1_PWMRequest_size  82
#define wippersnapper_signal_v1_PWMResponse_size 11

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
