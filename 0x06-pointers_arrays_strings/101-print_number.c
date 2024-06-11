#include "main.h"

/**
 * rev - function that reverse the number
 * @x: parameter
 * Return: integer
*/
int rev(int x)
{
	int y = 0;
	int sign = -1;

	if (x == 0)
	{
		return (x);
	}
	if (x < 0)
	{
		x = -x;
	}
	else
	{
		sign = 1;
	}
	while (x != 0)
	{
		y = (y * 10) + (x % 10);
		x = x / 10;
	}
	return (y * sign);
}
/**
 * print_number - function to print integer
 * @n: parameter
*/
void print_number(int n)
{
	unsigned int m;
	int d = rev(n);

	if (d < 0)
	{
		_putchar('-');
		d = d * (-1);
	}
	if (d == 0)
		_putchar('0');

	while (d != 0)
	{
		m = d % 10;
		_putchar(m + '0');
		d = d / 10;
	}
}
