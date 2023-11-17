#include <stdio.h>
#include "main.h"
#include "string.h"
#include <unistd.h>
#include "stdarg.h"

int _printf(const char *format, ...)
{
	int case_count = 0;
	int i = 0;

		va_start(ap, format);

	if (format != NULL)
	{
		while (format[i])
		{
		
		if (format[i] == '%')
		{
		i++;
			
		while (format[i] == ' ')
				{
			i++;
			wht_spc++;
				}
		switch (format[i])

			{
		case 'c':
		count += int _char(char c)
		break;

		case 's':
		count += int p_char(char c)
		break;

		case '%':
		write(1, &format[i], 1);
		count++;
		break;

		case 'i':
		write(1, "int_char", 8);
		case_count++;
		break;

		case 'd':
		count += char_int(char *s)
		break;

		default:			
	
 		i--;
		}

		}
			if (case_count == 0) 
		write(1, &format[i], 1);
		i++;
		count += p_default(format[i]);
		i++;

			break;
		}

		}
			else
		{
		write(1, &format[i], 1);
		count++;
			}
		i++;
		}
		va_end(ap);
			return (count);
		}
			else
		va_end(ap);
			return (-1);
	}
