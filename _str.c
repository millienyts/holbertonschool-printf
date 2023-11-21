#include "main.h"
#include <unistd.h>
#include <stdarg.h>

int print_int(va_list args)
{
	int value = va_arg(args, int);
	char buffer[20];
	int l = int_l(value);

	_str(value, buffer);

	return write(1, buffer, l);
}
