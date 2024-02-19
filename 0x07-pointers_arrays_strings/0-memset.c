#include "main.h"
/**
 * _memset - function that fills memory with a constant
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *p = s;

	for (i = 0; i < n; i++)
	{
		*p = b;
		p++;
	}
	return (s);
}
