#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * octal_l - Prints the octal representation of an
 * unsigned long integer to the standard output.
 * @value: The unsigned long integer to be printed in octal.
 * Return: This function does not return a value (void).
 */
int octal_l(unsigned int value)
{
	int l = 1;

	while (value /= 8)
	{
	l++;
	}

	return (l);
}
/**
 * _octal - Prints the octal representation of
 * an unsigned long integer to a buffer.
 * @value: The unsigned long integer to be printed in octal.
 * @buffer: The buffer to store the octal representation.
 * Return: The number of characters written to the buffer.
 */
void _octal(unsigned int value, char *buffer)
{
	int l = octal_l(value);

	buffer[l] = '\0';
	do {
	l--;
	buffer[l] = '0' + value % 8;
	value /= 8;
	}

	while (l > 0);
}
