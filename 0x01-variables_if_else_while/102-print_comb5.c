#include <stdio.h>
/**
 * main - Entry point
 * Descrition: combinations of two two-digit numbers
 * Return: 0 success
*/
int main(void)
{
	int i, j, k, l, s1, s2;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					s1 = (i * 10) + j;
					s2 = (k * 10) + l;
					if (s2 > s1)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');
						if (i != 9 || j != 8)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
