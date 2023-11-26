#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * print_uns - Handles the 'u' format specifier for _printf.
 * @args: A va_list of arguments containing the unsigned integer to be printed.
 * Return: The number of characters printed.
 */
int print_uns(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);
	char buffer[20];
	int l = uns_int_l(value);

	uns_str(value, buffer);

	return (write(1, buffer, l));
}
