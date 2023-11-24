#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * print_int - Handles the 'd' and 'i' format specifiers for _printf.
 * @args: A va_list of arguments containing the integer to be printed.
 * Return: The number of characters printed.
 */
int print_int(va_list args)
{
	int value = va_arg(args, int);
	char buffer[20];
	int l = int_l(value);

	_str(value, buffer);

	return (write(1, buffer, l));
}
