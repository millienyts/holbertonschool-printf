#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * p_l - Prints the hexadecimal representation of
 * a pointer to the standard output.
 * @ptr: The pointer to be printed in hexadecimal.
 * Return: This function does not return a value (void).
 */
int p_l(void *ptr __attribute__((unused)))
{
	return (sizeof(void *) * 2 + 2);
}
/**
 * p_to_hex - Converts a pointer to its hexadecimal
 * representation and stores it in a buffer.
 * @ptr: The pointer to be converted to hexadecimal.
 * @buffer: The buffer to store the hexadecimal representation.
 */
void p_to_hex(void *ptr, char *buffer)
{
	const int p_size = sizeof(void *) * 2;
	int firstNonZeroNibble = -1;
	int i;

	buffer[0] = '0';
	buffer[1] = 'x';

	for (i = 0; i < p_size; ++i)
	{

	int nibble = ((uintptr_t)ptr >> ((p_size - i - 1) * 4)) & 0xF;

	if (nibble != 0 && firstNonZeroNibble == -1)
	{
	firstNonZeroNibble = i;
	}

	if (firstNonZeroNibble != -1)
	{
	buffer[i + 2 - firstNonZeroNibble] = (nibble < 10)
	? ('0' + nibble) : ('a' + nibble - 10);
	}
	}
	buffer[p_size - firstNonZeroNibble + 2] = '\0';
}
