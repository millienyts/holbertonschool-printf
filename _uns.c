#include "main.h"
#include <unistd.h>
#include <stdarg.h>

int print_unsigned(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);
	char buffer[20];
	int l = uns_int_l(value);

	uns_str(value, buffer);

	return write(1, buffer, l);
}
