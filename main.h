#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

int print_int(va_list args);
int int_l(int value);
void _str(int value, char *buffer);

int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hexadecimal(va_list args, char specifier);
int print_pointer(va_list args);
int print_specifier(char specifier, va_list args);
int _strlen(const char *s);

#endif
