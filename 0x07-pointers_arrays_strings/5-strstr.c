#include "main.h"
/**
 *
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	char *t;

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			*t = haystack;
			while (*needle)
			{
				if (*haystack != *needle)
					break;
				else
				{
					haystack++;
					needle++;
				}
			}
			return (t);
		}
		else
			haystack++;
	}
}
