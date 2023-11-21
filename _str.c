#include "main.h"
#include <unistd.h>
#include <stdarg.h>
int int_l(int value)
{
	int l = 1;
    while (value /= 10)
    {
        l++;
    }
    return length;
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
    } while (l > 0);
}

int print_int(int value)
{
    char buffer[20];
    _str(value, buffer);
    int l = int_l(value);
    return write(1, buffer, l);
}
