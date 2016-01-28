#ifndef UBIGINT_H
#define UBIGINT_H

#include <stdint.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#else
struct ubigint_t;
typedef struct ubigint_t ubigint_t;
#endif

typedef ubigint_t* ubigint_handle_t;

int new_ubigint(
    ubigint_handle_t* handle_ptr
);

int new_ubigint_from_num(
    ubigint_handle_t* handle_ptr,
    unsigned long num
);

int new_ubigint_from_string(
    ubigint_handle_t* handle_ptr,
    const char* str
);

int new_ubigint_from_binary(
    ubigint_handle_t* handle_ptr,
    uint8_t* binary,
    size_t num_bytes
);

int free_ubigint(
    ubigint_handle_t* handle_ptr
);

int print_ubigint(
    ubigint_handle_t num
);

// No checks for overflow
int ubigint_to_ulong(
    ubigint_handle_t num_in,
    uint64_t* num_out
);

int ubigint_add(
    ubigint_handle_t num1,
    ubigint_handle_t num2,
    ubigint_handle_t result
);

int ubigint_subtract(
    ubigint_handle_t num1,
    ubigint_handle_t num2,
    ubigint_handle_t result
);

int ubigint_multiply(
    ubigint_handle_t num1,
    ubigint_handle_t num2,
    ubigint_handle_t result
);

int ubigint_divide(
    ubigint_handle_t num1,
    ubigint_handle_t num2,
    ubigint_handle_t result
);

int ubigint_modulus(
    ubigint_handle_t num1,
    ubigint_handle_t num2,
    ubigint_handle_t result
);

int ubigint_pow(
    ubigint_handle_t num1,
    ubigint_handle_t num2,
    ubigint_handle_t result
);

#ifdef __cplusplus
}
#endif

#endif /* UBIGINT_H */