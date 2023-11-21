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
int print_specifier(char specifier, va_list args)
{
    switch (specifier)
    {
    case 'c':
        return print_char(args);
    case 's':
        return print_string(args);
    case '%':
        return print_percent(args);
    case 'd':
    case 'i':
        return print_int(args);
    case 'u':
        return print_unsigned(args);
    case 'o':
        return print_octal(args);
    case 'x':
    case 'X':
        return print_hexadecimal(args, specifier);
    case 'p':
        return print_pointer(args);
    default:
	write(1, "%", 1);
	write(1, &specifier, 1);
	return (2);
    }
}
