#include "main.h"
#include <unistd.h>
#include <stdarg.h>
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	return write(1, &c, 1);
}

int print_string(va_list args)
{
	const char *s = va_arg(args, const char *);
	size_t len = (s != NULL) ? _strlen(s) : 6;

	return write(1, s, len);
}

int print_percent(va_list args)
{
	(void)args;

	return write(1, "%", 1);
}


