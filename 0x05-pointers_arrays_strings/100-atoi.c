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
	int sign = 1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
		if (x > (2147483647 - (s[i] - '0')) / 10)
			return (0);
		else
			x = (x * 10) + (s[i] - '0');
			i++;
	}
	return (x * sign);
}
