#include "main.h"
/**
 * print_square - function that prints a square
 * @size: parameter
*/
void print_square(int size)
{
	int i = size;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (size)
		{
			while (i)
			{
				_putchar('#');
				i--;
			}
			_putchar('\n');
			size--;
		}
	}
}
