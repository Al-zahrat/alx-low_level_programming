#include "main.h"

/**
 * leet - function that encodes a string
 * @s: parameter
 * Return: string
*/
char *leet(char *s)
{
	char *str = s;
	char p[6][4] = {{'a', 'A', '4'},
		{'e', 'E', '3'},
		{'o', 'O', '0'},
		{'t', 'T', '7'},
		{'l', 'L', '1'}};
	int i;

	while (*str)
	{
		i = 0;
		for (; i <= 4; i++)
		{
			if (*str == p[i][0] || *str == p[i][1])
				*str = p[i][2];
		}
		str++;
	}
	return (s);
}
