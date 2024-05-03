#include "main.h"
/**
 * _strdup - function to newly allocate space
 * @str: string
 * Return:pointer to a new string
*/
char *_strdup(char *str)
{
	char *st;
	int count;

	if (str == NULL)
		return (NULL);
	for (count = 0; str[count] != '\0'; count++)
		count++;
	count++;

	st = malloc(sizeof(char) * count);
	count = 0;
	if (st == NULL)
		return (NULL);

	while (str[count] != '\0')
	{
		st[count] = str[count];
		count++;
	}
	return (st);
}
