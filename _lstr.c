#include "main.h"
#include <stdarg.h>
#include <unistd.h>
int int_l(int value)
{
	int l = 1;

	while (value /= 10)
	{
	l++;
	}
	
	return l;
}

void _str(int value, char *buffer)
{
	int l = int_l(value);

	buffer[l] = '\0';
	do
	{
	l--;
	buffer[l] = '0' + value % 10;
	value /= 10;
	}
	while (l > 0);
} 
