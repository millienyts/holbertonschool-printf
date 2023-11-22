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

void _str(int value, char *buffer) {
    int l = int_l(value);

    buffer[l] = '\0';
    if (value < 0) {
        buffer[0] = '-';
        value = -value;
	write(1, "-", 1);
    }

    do {
        l--;
        buffer[l] = '0' + value % 10;
        value /= 10;
    } while (l >= (value < 0 ? 1 : 0));
} 
