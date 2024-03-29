#include "main.h"
/**
 * _atoi - function to convert string to int
 * @s: parameter
 * Return: int
*/
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int x = 0;

	while (s[i] != '\0' && (s[i] > '9' || s[i] < '0'))
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		if ((2147483647 - (s[i] - '0')) >= x * 10)
		{
			x = (x * 10) + (s[i] - '0');
		}
		else
		{
			return (-2147483648);
		}

		i++;
	}
	x = sign * x;
	return (x);
}
