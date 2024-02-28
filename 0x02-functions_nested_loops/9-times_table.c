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
			if (j >= 0 && j < 9)
			{
				if (j == 0)
				{
					putchar(s + '0');
				}
				if (s < 10)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar(s + '0');
				}
				else
				{
					putchar(',');
					putchar(' ');
					putchar((s / 10) + '0');
					putchar((s % 10) + '0');
				}
			}
		}
		putchar('\n');
	}
}
