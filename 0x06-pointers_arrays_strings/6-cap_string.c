#include "main.h"
/**
 * alphaL - function that check if char is lowercase
 * @i: parameter
 * Return: integer
*/
int alphaL(char i)
{
	if (i <= 'z' && i >= 'a')
		return (1);
	else if (i >= 'A' && i <= 'Z')
		return (2);
	else
		return (0);
}
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
		else if (x == 1 && alphaL(*p) == 1)
		{
			*p -= 32;
			x = 0;
		}
		else if (x && alphaL(*p) == 2)
		{
			x = 0;
		}
		else if (x == 0 && alphaL(*p) == 2)
		{
			*p += 32;
		}
		++p;
	}
	return (s);
}
