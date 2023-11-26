#include "main.h"
/**
* _strlen - Returns the length of a string
* @s: String to count
* Return: String length
*/
size_t _strlen(const char *s)
{
	size_t l = 0;

	while (s[l] != '\0')
	{
	l++;
	}

	return (l);
}
