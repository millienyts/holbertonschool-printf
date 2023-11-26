#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * print_char - Prints a character to the standard output.
 * @args: A va_list of arguments containing the character to be printed.
 * Return: The number of characters printed (1 in this case).
 */
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	return (write(1, &c, 1));
}
/**
 * print_string - Prints a string to the standard output.
 * @args: A va_list of arguments containing the string to be printed.
 * Return: The number of characters printed.
 */
int print_string(va_list args)
{
	const char *s = va_arg(args, const char *);
	size_t l;
	if (s == NULL)
	{
	s = "(null)";
	}

	l = _strlen(s);

	return write(1, s, l);
}
/**
 * print_percent - Prints a percent sign to the standard output.
 * @args: Unused (no additional arguments needed).
 * Return: The number of characters printed (1 in this case).
 */
int print_percent(va_list args)
{
	(void)args;

	return (write(1, "%", 1));
}
