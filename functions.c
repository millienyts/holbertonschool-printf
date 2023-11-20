#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
int print_char(va_list args)
{
    char c = (char)va_arg(args, int);
    return write(1, &c, 1);
}

int print_string(va_list args)
{
    const char *s = va_arg(args, const char *);
    size_t len = (s != NULL) ? strlen(s) : 6;
    return write(1, s, len);
}

int print_percent(va_list args)
{
    (void)args;
    return write(1, "%", 1);
}

int print_int(va_list args)
{
    int value = va_arg(args, int);
    char buffer[20];
    int length = sprintf(buffer, "%d", value);
    return write(1, buffer, length);
}

int print_unsigned(va_list args)
{
    unsigned int value = va_arg(args, unsigned int);
    char buffer[20];
    int length = sprintf(buffer, "%u", value);
    return write(1, buffer, length);
}

int print_octal(va_list args)
{
    unsigned int value = va_arg(args, unsigned int);
    char buffer[20];
    int length = sprintf(buffer, "%o", value);
    return write(1, buffer, length);
}

int print_hexadecimal(va_list args, char specifier)
{
    unsigned int value = va_arg(args, unsigned int);
    char buffer[20];
    int length;

    if (specifier == 'x') {
        length = sprintf(buffer, "%x", value);
    } else {
        length = sprintf(buffer, "%X", value);
    }

    return write(1, buffer, length);
}

int print_pointer(va_list args)
{
    void *ptr = va_arg(args, void *);
    char buffer[20];
    int length = sprintf(buffer, "%p", ptr);
    return write(1, buffer, length);
}
