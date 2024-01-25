#include "main.h"
/**
 * rev_string - function to reverse string
 * @s: parameter
*/
void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i = i + 1;
	}

	for (; i > j ; i--)
	{
		char t = s[i - 1];

		s[i - 1] = s[j];
		s[j] = t;
		j++;
	}
}
