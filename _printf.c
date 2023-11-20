#include "main.h"
/**
 * _printf - creating de function of printf
 * @format: a character string
 * Return: the number of character printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int n = 0;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			n += print_specifier(*++format, args);
		}
		else
		{
			n += write(1, format, 1);
		}
		format++;
	}
	va_end(args);
	return (n);
}
