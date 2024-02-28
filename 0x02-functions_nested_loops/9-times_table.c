#include "main.h"
/**
 * times_table - print 9 times table
*/
void times_table(void)
{
	int i, j, t;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			t = i * j;
			_putchar(t + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (j < 9 && t < 10)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
