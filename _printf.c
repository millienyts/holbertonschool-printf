#include <stdio.h>
#include "main.h"
#include "string.h"
#include <unistd.h>
#include "stdarg.h"

int _printf(const char *format, ...)
{
	int case_count = 0;
	int i = 0;

	while (format != NULL && format[i] != '\0')
	{
		case_count = 0;
		if (format[i] == '%')
		{
			i++;
		switch (format[i])

			{
		case 'c':
		write(1, "-PRINTC-", 8);
		case_count++;
		break;

		case 's':
		write(1, "-PRINTS-", 8);
		case_count++;
		break;

		case 'd':
		write(1, "-PRINTD-", 8);
		case_count++;
		break;

		case 'i':
		write(1, "-PRINTI-", 8);
		case_count++;
		break;

		case 'u':
		write(1, "-PRINTU-", 8);
		case_count++;
		break;

		case 'p':
		write(1, "-PRINTP-", 8);
		case_count++;
		break;

		case 'r':
		write(1, "-PRINTR-", 8);
		case_count++;
		break;

		case '%':
		write(1, &format[i], 1);
		case_count++;
		break;

		default:			
	
 		i--;
		}

		}
		if (case_count == 0) 
		write(1, &format[i], 1);
		i++;
	}
	return (0);
}
