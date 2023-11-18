#include <stdio.h>
#include "main.h"
#include "stdarg.h"
int _printf(const char *format, ...) 
{
	int i;
	int num_written = 0;
	va_list args;
	va_start(args, format);

	while (*format) 
	{
		if (*format == '%')
		{
			switch (*++format) 
			{
				case 'c':
			i += _putchar((int)va_arg(args, int));
				break;
				case 's':
			i += _puts(va_arg(args, char *));
				break;
				case '%':
			i += _putchar('%');
				break;
				default:
			i += _printf("%%");
				break;
			}
		}
		else
		{
			i += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (num_written);
}
