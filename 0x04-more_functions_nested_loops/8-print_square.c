#include "main.h"
/**
 * print_square - function that prints a square
 * @size: parameter
*/
void print_square(int size)
{
	int i = size, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (size)
		{
			b = i;
			while (b)
			{
				_putchar('#');
				b--;
			}
			_putchar('\n');
			size--;
		}
	}
}
