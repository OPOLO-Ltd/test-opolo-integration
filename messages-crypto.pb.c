/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9 */

#include "messages-crypto.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

const uint32_t IdentityType_index_default = 0u;


const pb_field_t CipherKeyValue_fields[8] = {
    PB_FIELD(  1, UINT32  , REPEATED, STATIC  , FIRST, CipherKeyValue, address_n, address_n, 0),
    PB_FIELD(  2, STRING  , OPTIONAL, STATIC  , OTHER, CipherKeyValue, key, address_n, 0),
    PB_FIELD(  3, BYTES   , OPTIONAL, STATIC  , OTHER, CipherKeyValue, value, key, 0),
    PB_FIELD(  4, BOOL    , OPTIONAL, STATIC  , OTHER, CipherKeyValue, encrypt, value, 0),
    PB_FIELD(  5, BOOL    , OPTIONAL, STATIC  , OTHER, CipherKeyValue, ask_on_encrypt, encrypt, 0),
    PB_FIELD(  6, BOOL    , OPTIONAL, STATIC  , OTHER, CipherKeyValue, ask_on_decrypt, ask_on_encrypt, 0),
    PB_FIELD(  7, BYTES   , OPTIONAL, STATIC  , OTHER, CipherKeyValue, iv, ask_on_decrypt, 0),
    PB_LAST_FIELD
};

const pb_field_t CipheredKeyValue_fields[2] = {
    PB_FIELD(  1, BYTES   , OPTIONAL, STATIC  , FIRST, CipheredKeyValue, value, value, 0),
    PB_LAST_FIELD
};

const pb_field_t IdentityType_fields[7] = {
    PB_FIELD(  1, STRING  , OPTIONAL, STATIC  , FIRST, IdentityType, proto, proto, 0),
    PB_FIELD(  2, STRING  , OPTIONAL, STATIC  , OTHER, IdentityType, user, proto, 0),
    PB_FIELD(  3, STRING  , OPTIONAL, STATIC  , OTHER, IdentityType, host, user, 0),
    PB_FIELD(  4, STRING  , OPTIONAL, STATIC  , OTHER, IdentityType, port, host, 0),
    PB_FIELD(  5, STRING  , OPTIONAL, STATIC  , OTHER, IdentityType, path, port, 0),
    PB_FIELD(  6, UINT32  , OPTIONAL, STATIC  , OTHER, IdentityType, index, path, &IdentityType_index_default),
    PB_LAST_FIELD
};

const pb_field_t SignIdentity_fields[5] = {
    PB_FIELD(  1, MESSAGE , OPTIONAL, STATIC  , FIRST, SignIdentity, identity, identity, &IdentityType_fields),
    PB_FIELD(  2, BYTES   , OPTIONAL, STATIC  , OTHER, SignIdentity, challenge_hidden, identity, 0),
    PB_FIELD(  3, STRING  , OPTIONAL, STATIC  , OTHER, SignIdentity, challenge_visual, challenge_hidden, 0),
    PB_FIELD(  4, STRING  , OPTIONAL, STATIC  , OTHER, SignIdentity, ecdsa_curve_name, challenge_visual, 0),
    PB_LAST_FIELD
};

const pb_field_t SignedIdentity_fields[4] = {
    PB_FIELD(  1, STRING  , OPTIONAL, STATIC  , FIRST, SignedIdentity, address, address, 0),
    PB_FIELD(  2, BYTES   , OPTIONAL, STATIC  , OTHER, SignedIdentity, public_key, address, 0),
    PB_FIELD(  3, BYTES   , OPTIONAL, STATIC  , OTHER, SignedIdentity, signature, public_key, 0),
    PB_LAST_FIELD
};

const pb_field_t GetECDHSessionKey_fields[4] = {
    PB_FIELD(  1, MESSAGE , OPTIONAL, STATIC  , FIRST, GetECDHSessionKey, identity, identity, &IdentityType_fields),
    PB_FIELD(  2, BYTES   , OPTIONAL, STATIC  , OTHER, GetECDHSessionKey, peer_public_key, identity, 0),
    PB_FIELD(  3, STRING  , OPTIONAL, STATIC  , OTHER, GetECDHSessionKey, ecdsa_curve_name, peer_public_key, 0),
    PB_LAST_FIELD
};

const pb_field_t ECDHSessionKey_fields[2] = {
    PB_FIELD(  1, BYTES   , OPTIONAL, STATIC  , FIRST, ECDHSessionKey, session_key, session_key, 0),
    PB_LAST_FIELD
};

const pb_field_t CosiCommit_fields[3] = {
    PB_FIELD(  1, UINT32  , REPEATED, STATIC  , FIRST, CosiCommit, address_n, address_n, 0),
    PB_FIELD(  2, BYTES   , OPTIONAL, STATIC  , OTHER, CosiCommit, data, address_n, 0),
    PB_LAST_FIELD
};

const pb_field_t CosiCommitment_fields[3] = {
    PB_FIELD(  1, BYTES   , OPTIONAL, STATIC  , FIRST, CosiCommitment, commitment, commitment, 0),
    PB_FIELD(  2, BYTES   , OPTIONAL, STATIC  , OTHER, CosiCommitment, pubkey, commitment, 0),
    PB_LAST_FIELD
};

const pb_field_t CosiSign_fields[5] = {
    PB_FIELD(  1, UINT32  , REPEATED, STATIC  , FIRST, CosiSign, address_n, address_n, 0),
    PB_FIELD(  2, BYTES   , OPTIONAL, STATIC  , OTHER, CosiSign, data, address_n, 0),
    PB_FIELD(  3, BYTES   , OPTIONAL, STATIC  , OTHER, CosiSign, global_commitment, data, 0),
    PB_FIELD(  4, BYTES   , OPTIONAL, STATIC  , OTHER, CosiSign, global_pubkey, global_commitment, 0),
    PB_LAST_FIELD
};

const pb_field_t CosiSignature_fields[2] = {
    PB_FIELD(  1, BYTES   , OPTIONAL, STATIC  , FIRST, CosiSignature, signature, signature, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(CipherKeyValue, value) < 65536 && pb_membersize(CipheredKeyValue, value) < 65536 && pb_membersize(SignIdentity, identity) < 65536 && pb_membersize(SignIdentity, challenge_hidden) < 65536 && pb_membersize(GetECDHSessionKey, identity) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_CipherKeyValue_CipheredKeyValue_IdentityType_SignIdentity_SignedIdentity_GetECDHSessionKey_ECDHSessionKey_CosiCommit_CosiCommitment_CosiSign_CosiSignature)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
#error Field descriptor for CipheredKeyValue.value is too large. Define PB_FIELD_16BIT to fix this.
#endif


/* @@protoc_insertion_point(eof) */
