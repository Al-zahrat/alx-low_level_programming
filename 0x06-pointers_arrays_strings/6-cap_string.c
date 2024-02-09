#include "main.h"
/**
 * cap_string - function that capitalizes all words
 * @s: parameter
 * Return: string
*/

char *cap_string(char *s)
{
	char *p = s;
	int x;

	while (*p != '\0')
	{
		if (*p == ' ' || *p == 9 ||
			*p == 10 || *p == ',' ||
			*p == ';' || *p == '.' ||
			*p == '!' || *p == '?' ||
			*p == '"' || *p == '(' ||
			*p == ')' || *p == '{' ||
			*p == '}')
		{
			x = alphaL(*(++p));
			if (x == 1)
			{
				*p -= 32;
			}

		}
		else
			p++;
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
