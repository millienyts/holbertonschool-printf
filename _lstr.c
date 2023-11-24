#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * int_l - Converts an integer to its string representation.
 * @value: The integer to be converted to a string.
 * Return: The string representation of the integer.
 */
int int_l(int value)
{
	int l = 1;

	while (value /= 10)
	{
	l++;
	}

	return (l);
}
/**
 * _str - Concatenates two strings and returns the result.
 * @value: The first string.
 * @buffer: The second string.
 */
void _str(int value, char *buffer)
{
	int l = int_l(value);

	buffer[l] = '\0';
	if (value < 0)
	{
	buffer[0] = '-';
	value = -value;
	write(1, "-", 1);
	}

	do {
	l--;
	buffer[l] = '0' + value % 10;
	value /= 10;
	}

	while (l >= (value < 0 ? 1 : 0));
}
