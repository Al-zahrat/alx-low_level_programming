#include "main.h"
/**
 * print_rev - function to reverse string
 * @s: parameter
*/
void print_rev(char *s)
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
