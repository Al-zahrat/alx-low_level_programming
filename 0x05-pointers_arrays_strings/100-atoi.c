#include "main.h"
/**
 * _atoi - function to convert string to int
 * @s: parameter
 * Return: int
*/
int _atoi(char *s)
{
	int x = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			x = (x * 10) + s[i];
			if (s[i - 1] == 45)
			{
				x = -x;
			}
		}
	}
	return (x);
}
