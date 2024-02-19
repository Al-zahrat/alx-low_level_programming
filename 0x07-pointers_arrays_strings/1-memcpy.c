#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *p = dest;

	for (i = 0; i < n; i++)
	{
		*p = src[i];
		p++;
	}
	return (dest);
}
