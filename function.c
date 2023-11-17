#include "main.h"
/**
 * _char - prints a char
 * @c: char to print
 * Return: length of char or zero
 */
int _char(char c)
{
	if (c != '\0')
	{
		write(1, &c, 1);
		return (1);
	}
	else
	return (0);
}

#include "main.h"
/**
 * p_char- print porcent and pointer to char
 * c: char to print
 * Return: num of char printed
 */
int p_char(char c)
{
	write(1, "%", 1);
	write(1, &c, 1);
	return (2);
}

#include "main.h"
/**
 * int_char - prints a integer
 * @num: integer to print
 * Return: length of int print
 */
int int_char(int num)
{
	char p_num[10];
	int i;
	int count = 0;
	int negative = 0;

	if (num < 0)
	{
		write (1, "-", 1);
		negative++;
		num = (-1) * num;
	}

	for (i = 9; num != 0; i--)
	{
		p_num[i] = '0' + (num % 10);
		num = num / 10;
	}
		i++;
		count = 10 - i;
		write (1, &p_num[i], count);
		return (negative + count);
}

#include "main.h"
/**
 * char_int - prints string
 * @s: parameter
 * Return: length of string printed
 */
int char_int(char *s)
{
	int len;

	if (s != NULL)
	{
		len = _strlen(s);
		write(1, s, len);
		return (len);
	}
	else if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
		return (0);
}
