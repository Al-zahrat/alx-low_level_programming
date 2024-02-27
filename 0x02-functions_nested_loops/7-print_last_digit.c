#include "main.h"
#include <limits.h>
/**
 * print_last_digit - prints the last digit
 * @c: parameter
 * Return: integer
*/
int print_last_digit(int c)
{
	int r;

	if (c >= 0)
	{
		r = c % 10;
		_putchar(r + '0');
		return (r);
	}
	else
	{
		if (c > INT_MIN)
			r = (c * (-1)) % 10;
		else if (c == INT_MIN)
			r = 8;

		_putchar(r + '0');
		return (r);
	}
}
