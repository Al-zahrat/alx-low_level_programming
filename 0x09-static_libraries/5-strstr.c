#include "main.h"
/**
 * _strstr - function to find string in string
 * @haystack: parameter
 * @needle: parameter
 * Return: pointer
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
					break;

				j++;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
		i++;
	}
	return ('\0');
}
