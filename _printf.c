#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - creating de function of printf
 * @format: a character string
 *
 * Return: the number of character printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int n = 0;
	const char *p = format;

	va_start(args, format);

	while (*p != '\0')
	{
		if (*p == '%')
		{
			p++;
			switch (*p)
			{
		case 'c':
			n += putchar(va_arg(args, int));
			break;
		case 's':
			n += puts(va_arg(args, char *));
			break;
		case '%':
			n += putchar('%');
			break;
		default:
			n += _printf("%%");
			break;
			}
			p++;
		} else
		{
			n += putchar(*p);
			p++;
		}
	}
	va_end(args);
	return (n);
}
