#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * print_hexadecimal - Prints a hexadecimal number to the standard output.
 * @args: A va_list of arguments containing
 * the hexadecimal number to be printed.
 * @specifier: The specifier character ('x' or 'X')
 * indicating the case of the hexadecimal digits.
 * Return: The number of characters printed.
 */
int print_hexadecimal(va_list args, char specifier)
{
	unsigned int value = va_arg(args, unsigned int);
	char buffer[20];
	int l = hex_l(value);

	_hex(value, buffer, specifier);

	custom_write(buffer);

	return (l);
}
