#include "main.h"
/**
 * _strlen - returns the length of string
 * @s: parameter
 * Return: integer
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i += 1;
	}
	return (i);
}
