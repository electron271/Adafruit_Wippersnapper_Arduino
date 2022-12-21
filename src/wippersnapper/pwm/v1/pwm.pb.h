/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5-dev at Wed Dec 21 17:49:12 2022. */

#ifndef PB_WIPPERSNAPPER_PWM_V1_WIPPERSNAPPER_PWM_V1_PWM_PB_H_INCLUDED
#define PB_WIPPERSNAPPER_PWM_V1_WIPPERSNAPPER_PWM_V1_PWM_PB_H_INCLUDED
#include <pb.h>
#include "nanopb/nanopb.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _wippersnapper_pwm_v1_PWMAttachRequest {
    char pin[6];
    int32_t frequency;
    int32_t resolution;
} wippersnapper_pwm_v1_PWMAttachRequest;

typedef struct _wippersnapper_pwm_v1_PWMAttachResponse {
    char pin[6];
    bool did_attach;
} wippersnapper_pwm_v1_PWMAttachResponse;

typedef struct _wippersnapper_pwm_v1_PWMDetachRequest {
    char pin[6];
} wippersnapper_pwm_v1_PWMDetachRequest;

typedef struct _wippersnapper_pwm_v1_PWMWriteDutyCycleRequest {
    char pin[6];
    int32_t duty_cycle;
} wippersnapper_pwm_v1_PWMWriteDutyCycleRequest;

typedef struct _wippersnapper_pwm_v1_PWMWriteFrequencyRequest {
    char pin[6];
    int32_t frequency;
} wippersnapper_pwm_v1_PWMWriteFrequencyRequest;

typedef struct _wippersnapper_pwm_v1_PWMWriteDutyCycleMultiRequest {
    pb_size_t write_duty_cycle_req_count;
    wippersnapper_pwm_v1_PWMWriteDutyCycleRequest write_duty_cycle_req[4];
} wippersnapper_pwm_v1_PWMWriteDutyCycleMultiRequest;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define wippersnapper_pwm_v1_PWMAttachRequest_init_default {"", 0, 0}
#define wippersnapper_pwm_v1_PWMAttachResponse_init_default {"", 0}
#define wippersnapper_pwm_v1_PWMDetachRequest_init_default {""}
#define wippersnapper_pwm_v1_PWMWriteDutyCycleRequest_init_default {"", 0}
#define wippersnapper_pwm_v1_PWMWriteDutyCycleMultiRequest_init_default {0, {wippersnapper_pwm_v1_PWMWriteDutyCycleRequest_init_default, wippersnapper_pwm_v1_PWMWriteDutyCycleRequest_init_default, wippersnapper_pwm_v1_PWMWriteDutyCycleRequest_init_default, wippersnapper_pwm_v1_PWMWriteDutyCycleRequest_init_default}}
#define wippersnapper_pwm_v1_PWMWriteFrequencyRequest_init_default {"", 0}
#define wippersnapper_pwm_v1_PWMAttachRequest_init_zero {"", 0, 0}
#define wippersnapper_pwm_v1_PWMAttachResponse_init_zero {"", 0}
#define wippersnapper_pwm_v1_PWMDetachRequest_init_zero {""}
#define wippersnapper_pwm_v1_PWMWriteDutyCycleRequest_init_zero {"", 0}
#define wippersnapper_pwm_v1_PWMWriteDutyCycleMultiRequest_init_zero {0, {wippersnapper_pwm_v1_PWMWriteDutyCycleRequest_init_zero, wippersnapper_pwm_v1_PWMWriteDutyCycleRequest_init_zero, wippersnapper_pwm_v1_PWMWriteDutyCycleRequest_init_zero, wippersnapper_pwm_v1_PWMWriteDutyCycleRequest_init_zero}}
#define wippersnapper_pwm_v1_PWMWriteFrequencyRequest_init_zero {"", 0}

/* Field tags (for use in manual encoding/decoding) */
#define wippersnapper_pwm_v1_PWMAttachRequest_pin_tag 1
#define wippersnapper_pwm_v1_PWMAttachRequest_frequency_tag 2
#define wippersnapper_pwm_v1_PWMAttachRequest_resolution_tag 3
#define wippersnapper_pwm_v1_PWMAttachResponse_pin_tag 1
#define wippersnapper_pwm_v1_PWMAttachResponse_did_attach_tag 2
#define wippersnapper_pwm_v1_PWMDetachRequest_pin_tag 1
#define wippersnapper_pwm_v1_PWMWriteDutyCycleRequest_pin_tag 1
#define wippersnapper_pwm_v1_PWMWriteDutyCycleRequest_duty_cycle_tag 2
#define wippersnapper_pwm_v1_PWMWriteFrequencyRequest_pin_tag 1
#define wippersnapper_pwm_v1_PWMWriteFrequencyRequest_frequency_tag 2
#define wippersnapper_pwm_v1_PWMWriteDutyCycleMultiRequest_write_duty_cycle_req_tag 1

/* Struct field encoding specification for nanopb */
#define wippersnapper_pwm_v1_PWMAttachRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   pin,               1) \
X(a, STATIC,   SINGULAR, INT32,    frequency,         2) \
X(a, STATIC,   SINGULAR, INT32,    resolution,        3)
#define wippersnapper_pwm_v1_PWMAttachRequest_CALLBACK NULL
#define wippersnapper_pwm_v1_PWMAttachRequest_DEFAULT NULL

#define wippersnapper_pwm_v1_PWMAttachResponse_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   pin,               1) \
X(a, STATIC,   SINGULAR, BOOL,     did_attach,        2)
#define wippersnapper_pwm_v1_PWMAttachResponse_CALLBACK NULL
#define wippersnapper_pwm_v1_PWMAttachResponse_DEFAULT NULL

#define wippersnapper_pwm_v1_PWMDetachRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   pin,               1)
#define wippersnapper_pwm_v1_PWMDetachRequest_CALLBACK NULL
#define wippersnapper_pwm_v1_PWMDetachRequest_DEFAULT NULL

#define wippersnapper_pwm_v1_PWMWriteDutyCycleRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   pin,               1) \
X(a, STATIC,   SINGULAR, INT32,    duty_cycle,        2)
#define wippersnapper_pwm_v1_PWMWriteDutyCycleRequest_CALLBACK NULL
#define wippersnapper_pwm_v1_PWMWriteDutyCycleRequest_DEFAULT NULL

#define wippersnapper_pwm_v1_PWMWriteDutyCycleMultiRequest_FIELDLIST(X, a) \
X(a, STATIC,   REPEATED, MESSAGE,  write_duty_cycle_req,   1)
#define wippersnapper_pwm_v1_PWMWriteDutyCycleMultiRequest_CALLBACK NULL
#define wippersnapper_pwm_v1_PWMWriteDutyCycleMultiRequest_DEFAULT NULL
#define wippersnapper_pwm_v1_PWMWriteDutyCycleMultiRequest_write_duty_cycle_req_MSGTYPE wippersnapper_pwm_v1_PWMWriteDutyCycleRequest

#define wippersnapper_pwm_v1_PWMWriteFrequencyRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   pin,               1) \
X(a, STATIC,   SINGULAR, INT32,    frequency,         2)
#define wippersnapper_pwm_v1_PWMWriteFrequencyRequest_CALLBACK NULL
#define wippersnapper_pwm_v1_PWMWriteFrequencyRequest_DEFAULT NULL

extern const pb_msgdesc_t wippersnapper_pwm_v1_PWMAttachRequest_msg;
extern const pb_msgdesc_t wippersnapper_pwm_v1_PWMAttachResponse_msg;
extern const pb_msgdesc_t wippersnapper_pwm_v1_PWMDetachRequest_msg;
extern const pb_msgdesc_t wippersnapper_pwm_v1_PWMWriteDutyCycleRequest_msg;
extern const pb_msgdesc_t wippersnapper_pwm_v1_PWMWriteDutyCycleMultiRequest_msg;
extern const pb_msgdesc_t wippersnapper_pwm_v1_PWMWriteFrequencyRequest_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define wippersnapper_pwm_v1_PWMAttachRequest_fields &wippersnapper_pwm_v1_PWMAttachRequest_msg
#define wippersnapper_pwm_v1_PWMAttachResponse_fields &wippersnapper_pwm_v1_PWMAttachResponse_msg
#define wippersnapper_pwm_v1_PWMDetachRequest_fields &wippersnapper_pwm_v1_PWMDetachRequest_msg
#define wippersnapper_pwm_v1_PWMWriteDutyCycleRequest_fields &wippersnapper_pwm_v1_PWMWriteDutyCycleRequest_msg
#define wippersnapper_pwm_v1_PWMWriteDutyCycleMultiRequest_fields &wippersnapper_pwm_v1_PWMWriteDutyCycleMultiRequest_msg
#define wippersnapper_pwm_v1_PWMWriteFrequencyRequest_fields &wippersnapper_pwm_v1_PWMWriteFrequencyRequest_msg

/* Maximum encoded size of messages (where known) */
#define wippersnapper_pwm_v1_PWMAttachRequest_size 29
#define wippersnapper_pwm_v1_PWMAttachResponse_size 9
#define wippersnapper_pwm_v1_PWMDetachRequest_size 7
#define wippersnapper_pwm_v1_PWMWriteDutyCycleRequest_size 18
#define wippersnapper_pwm_v1_PWMWriteDutyCycleMultiRequest_size 80
#define wippersnapper_pwm_v1_PWMWriteFrequencyRequest_size 18

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
