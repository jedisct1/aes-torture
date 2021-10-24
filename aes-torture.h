#ifndef aes_torture_H
#define aes_torture_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void aesenc(uint32_t out[4], const uint32_t in[4], const uint32_t rk[4]);

#ifdef __cplusplus
}
#endif

#endif
