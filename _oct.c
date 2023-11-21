#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int print_octal(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);
	char buffer[20];
	int l = octal_l(value);

	_octal(value, buffer);

	return write(1, buffer, l);
}
