/*
 * Google Cloud Certificates
 * Copyright (c) 2019-2020, Arm Limited and affiliates.
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef GOOGLE_CLOUD_CREDENTIALS_H
#define GOOGLE_CLOUD_CREDENTIALS_H

namespace google_cloud {
namespace credentials {
/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer,
 * and every line of the body needs to be quoted and end with \n:
 * "-----BEGIN EC PRIVATE KEY-----\n"
 * "...base64 data...\n"
 * "-----END EC PRIVATE KEY-----";
 */
char clientKey[] = "-----BEGIN EC PRIVATE KEY-----\n"
"MHcCAQEEIHW7gJQZNgkXqpPZpbkfDAGj50iBfZrHPJ0+W1gWC4ZboAoGCCqGSM49\n"
"AwEHoUQDQgAEDiBPNpAENgDPbT7Tt0q5mcAEZzYkPZAVtqa+htLd21mPGex4WS9S\n"
"bv/xs6mERnzzaNJL438Wrr/evN5DD7X/hA==\n"
"-----END EC PRIVATE KEY-----\n";

}
}
#endif
