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
		else if (x == 1 && alphaL(*p) == 1)
		{
			*p -= 32;
			x = 0;
		}
		++p;
	}
	return (s);
}
/**
 * alphaL - function that check if char is lowercase
 * @i: parameter
 * Return: integer
*/
int alphaL(char i)
{
	if (i <= 'z' && i >= 'a')
		return (1);
	else
		return (0);
}
