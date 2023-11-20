#include "main.h"
#include "functions.c"
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
			switch (*++format)
			{
			case 'c':
				n += print_char(args);
			break;
			case 's':
				n += print_string(args);
			break;
			case '%':
				n += print_percent(args);
			break;
			default:
			break; }
		}
		else
			n += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (n);
}
