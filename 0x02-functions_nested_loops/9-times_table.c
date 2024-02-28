#include "main.h"
/**
 * times_table - print 9 times table
*/
void times_table(void)
{
	int i, j, s;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			s = i * j;
			if (j >= 0 && j <= 9)
			{
				if (j == 0)
				{
					_putchar(s + '0');
				}
				if (s < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(s + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((s / 10) + '0');
					_putchar((s % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
