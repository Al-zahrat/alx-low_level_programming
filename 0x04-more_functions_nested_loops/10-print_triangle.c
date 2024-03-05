#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: parameter
*/
void print_triangle(int size)
{
	int i = size, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (size)
		{
			j = 1;
			while (j <= i)
			{
				if (j < size)
					_putchar(' ');
				else
					_putchar('#');
				j++;
			}
			_putchar('\n');
			size--;
		}
	}
}
