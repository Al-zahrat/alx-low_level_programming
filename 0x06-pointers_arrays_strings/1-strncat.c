#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j <= n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (n >= j)
	{
		dest[i] = '\0';
	}
	return (dest);
}
