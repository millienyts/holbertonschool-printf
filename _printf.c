#include "main.h"
<<<<<<< HEAD

int _printf(const char *format, ...)
{
	int case_count = 0;
	int i = 0;

	va_start(ap, format);
=======
/**
 * _printf - creating de function of printf
 * @format: a character string
 * Return: the number of character printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int n = 0;
>>>>>>> 13becb2fa2b8d9bd235674543ccb949c6c0dd3c2

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*++format)
			{
			case 'c':{
				char c = (char) va_arg(args, int);

				n += write(1, &c, 1);
			break; }
			case 's':{
				const char *s = va_arg(args, const char *);

				while (*s != '\0')
				n += write(1, s++, 1);
			break; }
			case '%':
				n += write(1, "%", 1);
			break;
			default:
			break; }
		} else
			n += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (n);
}
