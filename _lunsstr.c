#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * uns_int_l - Converts an unsigned integer to its string representation.
 * @value: The unsigned integer to be converted to a string.
 * Return: The string representation of the unsigned integer.
 */
int uns_int_l(unsigned int value)
{
	int l = 1;

	while (value /= 10)
	{
	l++;
	}

	return (l);
}
/**
 * uns_str - Concatenates two strings and returns the result.
 * @value: The first string.
 * @buffer: The second string.
 * Return: The concatenated string.
 */
void uns_str(unsigned int value, char *buffer)
{
	int l = uns_int_l(value);

	buffer[l] = '\0';
	do {
	l--;
	buffer[l] = '0' + value % 10;
	value /= 10;
	}

	while (l > 0);
}
