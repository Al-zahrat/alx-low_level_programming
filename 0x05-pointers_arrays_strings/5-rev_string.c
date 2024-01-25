#include "main.h"
/**
 * rev_string - function to reverse string
 * @s: parameter
*/
void rev_string(char *s)
{
	char p[] = *s;
	int i = 0;
	int j = 0;

	while (p[i] != '\0')
	{
		i = i + 1;
	}

	for (; i > 0 ; i--)
	{
		*(s + j) = p[i - 1];
		j++;
	}
}
