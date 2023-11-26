#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <stdint.h>

int _printf(const char *format, ...);

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

int print_int(va_list args);
int int_l(int value);
void _str(int value, char *buffer);

int print_uns(va_list args);
int uns_int_l(unsigned int value);
void uns_str(unsigned int value, char *buffer);

int print_octal(va_list args);
int octal_l(unsigned int value);
void _octal(unsigned int value, char *buffer);

int print_hexadecimal(va_list args, char specifier);
int hex_l(unsigned int value);
void _hex(unsigned int value, char *buffer, char specifier);
void custom_write(const char *str);

int print_pointer(va_list args);
int p_l(void *ptr __attribute__((unused)));
void p_to_hex(void *ptr, char *buffer);

int print_specifier(char specifier, va_list args);
size_t _strlen(const char *s);

int _putchar(char c);
#endif
