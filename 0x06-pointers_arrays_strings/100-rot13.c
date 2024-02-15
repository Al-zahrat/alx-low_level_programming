#include "main.h"
/**
 * rot13 - function that encodes a string
 * @str: parameter
 * Return: string
*/
char *rot13(char *str)
{
	char *s = str;
	char *d = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*s)
	{
		while (*d)
		{
			if (*s == *d)
				*s = *b;

			d++;
			b++;
		}
		s++;
	}
	return (str);
}
