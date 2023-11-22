#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int hex_l(unsigned int value)
{
	int l = 1;

	while (value /= 16)
	{
	l++;
	}

	return (l);
}

void _hex(unsigned int value, char *buffer, char specifier)
{
	int l = hex_l(value);
	int r = value % 16;

	buffer[l] = '\0';
	do
	{
	l--;
	buffer[l] = (r < 10) ? ('0' + r)
	: (specifier == 'x' ? 'a' + r - 10 : 'A' + r - 10);
	value /= 16;
	}
	while (l > 0);
}
