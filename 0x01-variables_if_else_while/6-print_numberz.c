#include <stdio.h>
/**
 * main - Entry point
 * Description - prints all single digit numbers of base 10
 * Return: 0 success
*/
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i + '\0');
		i++;
	}
	putchar('\n');
	return (0);
}
