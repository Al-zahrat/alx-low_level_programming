#include "main.h"
/**
 * *_strcpy - function to copy
 * @dest: parameter
 * @src: parameter
 * Return: pointer to array
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i = i + 1;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
