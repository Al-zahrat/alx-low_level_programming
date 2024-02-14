#include "main.h"

/**
 * cap_string - function that capitalizes all words
 * @s: parameter
 * Return: string
*/
char *cap_string(char *s)
{
	char *p = s;
	int x = 1;

	while (*p != '\0')
	{
		if (*p == ' ' || *p == '\t' ||
			*p == '\n' || *p == ',' ||
			*p == ';' || *p == '.' ||
			*p == '!' || *p == '?' ||
			*p == '"' || *p == '(' ||
			*p == ')' || *p == '{' ||
			*p == '}')
		{
			x = 1;
		}
		else if (x == 1 && (*p >= 'a' && *p <= 'z'))
		{
			*p -= 32;
			x = 0;
		}
		else
		{
			x = 0;
		}
		++p;
	}
	return (s);
}
