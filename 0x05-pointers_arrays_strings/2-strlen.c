#include "main.h"
/**
 * _strlen - returns the length of string
 * @s: parameter
 * Return: integer
*/

int _strlen(char *s)
{
	char x[] = *s;
	int i = 0;

	while (x[i] != '\0')
	{
		i += 1;
	}
	return (i);
}
