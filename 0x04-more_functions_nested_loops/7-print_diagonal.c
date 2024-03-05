#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line
 * @n: parameter
*/
void print_diagonal(int n)
{
	int i = 1, j;

	while (i <= n)
	{
		j = 1;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}
