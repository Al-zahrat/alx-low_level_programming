#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: parameter
 * @c: parameter
 * Return: pointer
*/
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s = s + 1;
	}
	return ('\0');
}
