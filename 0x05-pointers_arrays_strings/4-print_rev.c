#include "main.h"
/**
 * print_rev - function to reverse string
 * @s: parameter
*/
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c += 1;
	}
	for (; c > 0; c--)
		_putchar(s[c - 1]);

	_putchar('\n');
}
