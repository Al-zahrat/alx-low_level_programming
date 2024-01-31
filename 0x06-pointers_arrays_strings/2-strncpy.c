#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: parameter
 * @src: parameter
 * @n:  parameter
 * Return: pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i >= n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
