#include "main.h"
/**
 * print_number - function to print integer
 * @n: parameter
*/
void print_number(int n)
{
	unsigned int d;

	d = n;
	if (n < 0)
	{
		_putchar('-');
		d = -n;
	}
	if (d == 0)
	{
		_putchar(d + '0');
		return;
	}
	if ((d / 10) != 0)
	{
		print_number(d / 10);
	}
	_putchar((d % 10) + '0');
}
