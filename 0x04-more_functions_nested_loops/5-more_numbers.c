#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers
*/
void more_numbers(void)
{
	int i, j, k;

	i = 0;
	k = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 14)
		{
			k = j % 10;
			if (j > 9)
			{
				_putchar(1 + '0');
			}
			_putchar(k + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
