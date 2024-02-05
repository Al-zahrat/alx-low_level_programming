#include "main.h"
/**
 * string_toupper - function that changes a string to uppercase
 * @s: parameter
 * Return: string
*/
char *string_toupper(char *s)
{
	while (*s)
	{
		if (*s <= 122 && *s >= 97)
			*s -= 32;
		s++;
	}
	return (s);
}
