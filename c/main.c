#include "cmps112-rsa.h"
#include "ubigint/ubigint.h"

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;

    //buffer_t encrypt_buffer, decrypt_buffer;
    ubigint_handle_t key_d, key_e, key_n;
    new_ubigint_from_num(&key_d, 7);
    new_ubigint_from_num(&key_e, 103);
    new_ubigint_from_num(&key_n, 143);


    //free(encrypt_buffer);
    //free(decrypt_buffer);
    free_ubigint(&key_d);
    free_ubigint(&key_e);
    free_ubigint(&key_n);

    return 0;
}
