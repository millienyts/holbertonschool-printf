#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	char buffer[20];

	p_to_hex(ptr, buffer);
	write(1, buffer, _strlen(buffer));

	return _strlen(buffer);
}
