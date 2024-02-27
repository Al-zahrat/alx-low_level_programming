#include <stdio.h>
/**
 * sumL - function to get the sum
 * @x: parameter
 * @y: parameter
 * @z: parameter
 * @w: parameter
*/
void sumL(int x, int y, int z, int w)
{
	int s1, s2;

	s1 = (x * 10) + y;
	s2 = (z * 10) + w;
	if (s2 > s1)
	{
		putchar(x + '0');
		putchar(y + '0');
		putchar(' ');
		putchar(z + '0');
		putchar(w + '0');
		if (x != 9 || y != 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
/**
 * main - Entry point
 * Descrition: combinations of two two-digit numbers
 * Return: 0 success
*/
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					sumL(i, j, k, l);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
