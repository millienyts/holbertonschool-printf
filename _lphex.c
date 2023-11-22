#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int p_l(void *ptr __attribute__((unused)))
{
	return sizeof(void *) * 2 + 2;
}

void p_to_hex(void *ptr, char *buffer) {
    const int p_size = sizeof(void *) * 2;
    int i;
    int lZ = 1;

    buffer[p_size + 1] = '\0';

    buffer[0] = '0';
    buffer[1] = 'x';

    for (i = 0; i < p_size; ++i) {
        int nibble = ((uintptr_t)ptr >> ((p_size - i - 1) * 4)) & 0xF;
        
        if (nibble != 0 || !lZ) {
            buffer[i + 2] = (nibble < 10) ? ('0' + nibble) : ('a' + nibble - 10);
            lZ = 0;
        } else {
            buffer[i + 2] = ' ';
        }
    }
}
