#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * hex_l - Prints a long hexadecimal number to the standard output.
 * @value: The unsigned integer to be printed in hexadecimal.
 * Return: This function does not return a value (void).
 */
int hex_l(unsigned int value)
{
	int l = 1;

	while (value /= 16)
	{
	l++;
	}

	return (l);
}
/**
 * _hex - Prints a hexadecimal number to the standard output.
 * @value: The unsigned integer to be printed in hexadecimal.
 * @buffer: The buffer to store the hexadecimal representation.
 * @specifier: The specifier character ('x' or 'X')
 * indicating the case of the hexadecimal digits.
 */
void _hex(unsigned int value, char *buffer, char specifier)
{
	int l = hex_l(value);
	int r;

	buffer[l] = '\0';
	do {
	l--;
	r = value % 16;
	buffer[l] = (r < 10) ? ('0' + r)
	: (specifier == 'x' ? 'a' + r - 10 : 'A' + r - 10);
	value /= 16;
	}

	while (l > 0);
}
/**
 * custom_write - Custom implementation of write function.
 * @str: The string to be printed.
 * Return: The number of characters written.
 */
void custom_write(const char *str)
{
	while (*str != '\0')
	{
	write(1, str, 1);
	str++;
	}
}
