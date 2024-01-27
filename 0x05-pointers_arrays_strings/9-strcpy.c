#include "main.h"
/**
 * *_strcpy - function to copy
 * @dets: parameter
 * @src: parameter
 * Return: pointer to array
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i = i + 1;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i = i + 1;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
