#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int octal_l(unsigned int value)
{
	int l = 1;
	while (value /= 8)
	{
	l++;
	
	}
	return l;
}

void _octal(unsigned int value, char *buffer)
{
	int l = octal_l(value);

	buffer[l] = '\0';
	do
	{
	l--;
	buffer[l] = '0' + value % 8;
	value /= 8;
	}
	while (l > 0);
}
