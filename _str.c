#include "main.h"
#include <unistd.h>
#include <stdarg.h>

int print_int(va_list args)
{
	int value = va_arg(args, int);
	char buffer[12];
	int l = int_l(value, buffer);

	write(1, buffer, l);

	return (l);
}
