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


	while (dest[i])
	{
		i++;
	}

	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i = i + 1;
	}

	return (dest);
}
