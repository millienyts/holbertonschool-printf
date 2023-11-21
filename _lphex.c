#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int p_l(void *ptr __attribute__((unused)))
{
	const int p_size = sizeof(void *) * 2;
	int i;
	int l = 1;

	for (i = 0; i < p_size; ++i)
	{
	l *= 16;
	}
	
	return (l);
}

void p_to_hex(void *ptr, char *buffer)
{
	int l = p_l(ptr);
	int i;

	buffer[l] = '\0';

	for (i = l - 1; i >= 0; --i)
	{

	int nibble = ((uintptr_t)ptr) & 0xF;

	buffer[i] = (nibble < 10) ? ('0' + nibble) : ('a' + nibble - 10);
	ptr = (void *)((uintptr_t)ptr >> 4);
	}
}
