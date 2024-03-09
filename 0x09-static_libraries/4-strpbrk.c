#include "main.h"
/**
 * _strpbrk - function that searches a string
 * @s: parameter
 * @accept: parameter
 * Return: pointer
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *p = accept;

		while (*p)
		{
			if (*p == *s)
				return (s);

			p++;
		}
		s++;
	}
	return ('\0');
}
