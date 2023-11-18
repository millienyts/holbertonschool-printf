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
			switch (*++format)
			{
			case 'c':{
				char c = (char) va_arg(args, int);

				n += putchar(c);
			break;
				}
			case 's':
				{
				const char *s = va_arg(args, const char *);

				while (*s != '\0')
				n += putchar(*s++);
			break;
				}
			case '%':
				n += putchar('%');
			break;
			default:
			break;
			}
		} else
		{
			n += putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (n);
}
