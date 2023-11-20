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
			case 'c':
				n += print_char(args);
			break;
			case 's':
				n += print_string(args);
			break;
			case '%':
				n += print_percent(args);
			break;
			case 'd':
			case 'i':
				n += print_int(args);
			break;
			case 'u':
				n += print_unsigned(args);
			break;
			case 'o':
				n += print_octal(args);
			break;
			case 'x':
			case 'X':
				n += print_hexadecimal(args, *format);
			break;
			case 'p':
				n += print_pointer(args);
			break;
			default:
				n += write(1, "%", 1);
				n += write(1, format, 1);
			break; }
		}
		else
			n += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (n);
}
