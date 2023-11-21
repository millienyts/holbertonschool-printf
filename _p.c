#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	char buffer[20];
	int l = p_l(ptr);

	p_to_hex(ptr, buffer);

	return write(1, buffer, l);
}
