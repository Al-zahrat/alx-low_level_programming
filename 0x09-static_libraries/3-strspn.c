#include "main.h"
/**
 * _strspn - function that gets the length of a prefix
 * @s: parameter
 * @accept: parameter
 * Return: integer
*/
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, exis = 0;

	while (*s)
	{
		char *p = accept;

		while (*p)
		{
			if (*s == *p)
			{
				exis = 1;
			}
			p++;
		}
		if (exis == 1)
		{
			count += 1;
			exis = 0;
		}
		else
		{
			return (count);
		}
		s++;
	}
	return (count);
}
