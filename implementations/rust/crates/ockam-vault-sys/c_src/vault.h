#include "ockam/vault.h"
#include "vault/default/default.h"

typedef enum {
    OCKAM_VAULT_FEATURE_RANDOM = OCKAM_VAULT_RANDOM,
    OCKAM_VAULT_FEATURE_SHA256 = OCKAM_VAULT_SHA256,
    OCKAM_VAULT_FEATURE_KEY_ECDH = OCKAM_VAULT_KEY_ECDH,
    OCKAM_VAULT_FEATURE_HKDF = OCKAM_VAULT_HKDF,
    OCKAM_VAULT_FEATURE_AES_GCM = OCKAM_VAULT_AES_GCM,
    OCKAM_VAULT_FEATURE_ALL = OCKAM_VAULT_ALL,
} OckamFeatures;
