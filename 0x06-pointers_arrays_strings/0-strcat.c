#include "main.h"
/**
 * *_strcat - function to concatenate
 * @dest: parameter
 * @src: parameter
 * Return: pointer to string
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

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
