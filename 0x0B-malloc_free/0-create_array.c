#include "main.h"
/**
 * create_array - function to create array
 * @size - size of array
 * @c: char parameter
 * Return: array of char
*/
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	if (size == 0)
		return (NULL);
	else
	{
		x = malloc(size * sizeof(char));
		if (x == NULL)
			return (NULL);
		else
		{
			i = 0;
			while (i < size)
			{
				x[i] = c;
				i++;
			}
			return (x);
		}
	}
}
