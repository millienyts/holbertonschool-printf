#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int print_hexadecimal(va_list args, char specifier)
{
	unsigned int value = va_arg(args, unsigned int);
	char buffer[20];
	int l = hex_l(value);

	_hex(value, buffer, specifier);

	return write(1, buffer, l);
}
