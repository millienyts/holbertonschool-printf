#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * print_octal - Handles the 'o' format specifier for _printf.
 * @args: A va_list of arguments containing the
 * unsigned integer to be printed in octal.
 * Return: The number of characters printed.
 */
int print_octal(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);
	char buffer[20];
	int l = octal_l(value);

	_octal(value, buffer);

	return (write(1, buffer, l));
}
