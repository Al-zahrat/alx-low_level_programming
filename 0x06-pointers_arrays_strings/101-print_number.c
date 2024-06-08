#include "main.h"

/**
 * print_number - functionto print integer
 * @n: parameter
*/

void print_number(int n)
{
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
		_putchar((d % 10) + '0');
		d = d / 10;
	}
}

/**
 * rev - function that reverse the number
 * @x: parameter
 * Return: integer
*/

int rev(int x)
{
	int y = 0;

	while (x != 0)
	{
		y = (y * 10) + (x % 10);
		x = x / 10;
	}
	return (y);
}
