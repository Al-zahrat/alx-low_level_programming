#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: parameter
 * @c: parameter
 * Return: pointer
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
