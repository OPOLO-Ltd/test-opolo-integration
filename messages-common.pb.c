/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9 */

#include "messages-common.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t Success_fields[2] = {
    PB_FIELD(  1, STRING  , OPTIONAL, STATIC  , FIRST, Success, message, message, 0),
    PB_LAST_FIELD
};

const pb_field_t Failure_fields[3] = {
    PB_FIELD(  1, UENUM   , OPTIONAL, STATIC  , FIRST, Failure, code, code, 0),
    PB_FIELD(  2, STRING  , OPTIONAL, STATIC  , OTHER, Failure, message, code, 0),
    PB_LAST_FIELD
};

const pb_field_t ButtonRequest_fields[3] = {
    PB_FIELD(  1, UENUM   , OPTIONAL, STATIC  , FIRST, ButtonRequest, code, code, 0),
    PB_FIELD(  2, STRING  , OPTIONAL, STATIC  , OTHER, ButtonRequest, data, code, 0),
    PB_LAST_FIELD
};

const pb_field_t ButtonAck_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t PinMatrixRequest_fields[2] = {
    PB_FIELD(  1, UENUM   , OPTIONAL, STATIC  , FIRST, PinMatrixRequest, type, type, 0),
    PB_LAST_FIELD
};

const pb_field_t PinMatrixAck_fields[2] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, PinMatrixAck, pin, pin, 0),
    PB_LAST_FIELD
};

const pb_field_t PassphraseRequest_fields[2] = {
    PB_FIELD(  1, BOOL    , OPTIONAL, STATIC  , FIRST, PassphraseRequest, on_device, on_device, 0),
    PB_LAST_FIELD
};

const pb_field_t PassphraseAck_fields[3] = {
    PB_FIELD(  1, STRING  , OPTIONAL, STATIC  , FIRST, PassphraseAck, passphrase, passphrase, 0),
    PB_FIELD(  2, BYTES   , OPTIONAL, STATIC  , OTHER, PassphraseAck, state, passphrase, 0),
    PB_LAST_FIELD
};

const pb_field_t PassphraseStateRequest_fields[2] = {
    PB_FIELD(  1, BYTES   , OPTIONAL, STATIC  , FIRST, PassphraseStateRequest, state, state, 0),
    PB_LAST_FIELD
};

const pb_field_t ValidateDeviceGeniune_fields[2] = {
    PB_FIELD(  1, BYTES   , REQUIRED, STATIC  , FIRST, ValidateDeviceGeniune, messageToSign, messageToSign, 0),
    PB_LAST_FIELD
};

const pb_field_t BootLoaderMode_fields[2] = {
    PB_FIELD(  1, BOOL    , REQUIRED, STATIC  , FIRST, BootLoaderMode, setMode, setMode, 0),
    PB_LAST_FIELD
};

const pb_field_t DeviceGeniuneSignatureResponse_fields[5] = {
    PB_FIELD(  1, BYTES   , REQUIRED, STATIC  , FIRST, DeviceGeniuneSignatureResponse, seSignedMessage, seSignedMessage, 0),
    PB_FIELD(  2, BYTES   , REQUIRED, STATIC  , OTHER, DeviceGeniuneSignatureResponse, mcuSignedMessage, seSignedMessage, 0),
    PB_FIELD(  3, BYTES   , REQUIRED, STATIC  , OTHER, DeviceGeniuneSignatureResponse, seUid, mcuSignedMessage, 0),
    PB_FIELD(  4, BYTES   , REQUIRED, STATIC  , OTHER, DeviceGeniuneSignatureResponse, mcuUid, seUid, 0),
    PB_LAST_FIELD
};

const pb_field_t PassphraseStateAck_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t HDNodeType_fields[7] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, HDNodeType, depth, depth, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, HDNodeType, fingerprint, depth, 0),
    PB_FIELD(  3, UINT32  , REQUIRED, STATIC  , OTHER, HDNodeType, child_num, fingerprint, 0),
    PB_FIELD(  4, BYTES   , REQUIRED, STATIC  , OTHER, HDNodeType, chain_code, child_num, 0),
    PB_FIELD(  5, BYTES   , OPTIONAL, STATIC  , OTHER, HDNodeType, private_key, chain_code, 0),
    PB_FIELD(  6, BYTES   , OPTIONAL, STATIC  , OTHER, HDNodeType, public_key, private_key, 0),
    PB_LAST_FIELD
};





/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
#error Field descriptor for ButtonRequest.data is too large. Define PB_FIELD_16BIT to fix this.
#endif


/* @@protoc_insertion_point(eof) */