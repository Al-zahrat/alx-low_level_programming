#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers
*/
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 14)
		{
			if (j < 10)
				_putchar(j + '0');
			else
			{
				_putchar('1');
				_putchar((j % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
