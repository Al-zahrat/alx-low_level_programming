#include <stdio.h>
/**
 * main - Entry point
 * description: program to print numbers
 * Return: 0 success
*/
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i <= 56)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
