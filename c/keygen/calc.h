#ifndef __KEYGEN_CALC_H__
#define __KEYGEN_CALC_H__

#include <gmp.h>

#include <stdint.h>

void get_prime(mpz_t out);

// n = p * q
static inline void get_n(mpz_t out, mpz_t p, mpz_t q) {
    mpz_mul(out, p, q);
}

void get_totient(mpz_t out, mpz_t p, mpz_t q);

void get_e(mpz_t out, mpz_t totient);

static inline void get_d(mpz_t out, mpz_t e, mpz_t totient) {
    mpz_invert(out, totient, e);
}

#endif /* __KEYGEN_CALC_H__ */
