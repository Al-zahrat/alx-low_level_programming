#include "main.h"
/**
 * _strstr - function that locate a substring
 * @haystack: parameter
 * @needle: parameter
 * Return: pointer
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k, located, count;

	if (needle[i] == '\0')
		return (haystack);
	while (haystack[j] != '\0')
		j++;
	while (needle[i])
		i++;
	if ((j < i) || i == 0 || j == 0)
		return (NULL);
	for (count = 0; count <= (j - i); count++)
	{
		located = 1;
		for (k = 0; k < i; k++)
		{
			if (haystack[count + k] != needle[k])
			{
				located = 0;
				break;
			}
		}
		if (located == 1)
			return (&haystack[count]);
	}
	return (NULL);
}
