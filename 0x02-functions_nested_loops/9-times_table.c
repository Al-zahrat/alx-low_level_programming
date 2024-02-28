#include "main.h"
/**
 * times_table - print 9 times table
*/
void times_table(void)
{
	int i, j, t, p, x = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			t = i * j;
			if (t < 10)
			{
				_putchar(t + '0');
				x = 2;
			}
			else
			{
				p = t / 10;
				_putchar(p + '0');
				p = t % 10;
				_putchar(p + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (j < 9 && x == 2)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
