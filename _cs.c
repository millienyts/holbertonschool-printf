#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int print_specifier(char specifier, va_list args)
{
	switch (specifier)
	{
	case 'c':
		return print_char(args);
	case 's':
		return print_string(args);
	case '%':
		return print_percent(args);
	case 'd':
	case 'i':
		return print_int(args);
	case 'u':
		return print_unsigned(args);
	case 'o':
		return print_octal(args);
	case 'x':
	case 'X':
		return print_hexadecimal(args, specifier);
	case 'p':
		return print_pointer(args);
	default:
		write(1, "%", 1);
		write(1, &specifier, 1);
		return (2);
	}
}