#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_int - Handles the 'd' and 'i' format specifiers for _printf.
 * @args: A va_list of arguments containing the integer to be printed.
 * Return: The number of characters printed.
 */
int print_int(va_list args)
{
    int value = va_arg(args, int);
    char buffer[20];
    int l = int_l(value);

    _str(value, buffer);

    return write(1, buffer, l);
}

/**
 * int_l - Calculates the length of the integer.
 * @value: The integer to be printed.
 * Return: The length of the integer.
 */
int int_l(int value)
{
    int l = 1;

    while (value /= 10)
    {
        l++;
    }

    return l;
}

/**
 * _str - Converts an integer to its string representation.
 * @value: The integer to be converted to a string.
 * @buffer: The buffer to store the string representation.
 */
void _str(int value, char *buffer)
{
    int l = int_l(value);

    buffer[l] = '\0';
    if (value < 0)
    {
        buffer[0] = '-';
        value = -value;
    }

    do
    {
        l--;
        buffer[l] = '0' + value % 10;
        value /= 10;
    } while (l >= (value < 0 ? 1 : 0));
}
