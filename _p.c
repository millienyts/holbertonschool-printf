#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * print_pointer - Handles the 'p' format specifier for _printf.
 * @args: A va_list of arguments containing the pointer to be printed.
 * Return: The number of characters printed.
 */
int print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	char buffer[20];
	int l = p_l(ptr);

	p_to_hex(ptr, buffer);

	return (write(1, buffer, l));
}
