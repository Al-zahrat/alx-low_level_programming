#include <stdio.h>
/**
 * main - Entry point
 * Description: program to print 16 base numbers
 * Return: 0 if success
*/
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i + '\0');
		i++;
	}
	i = 48;
	while (i <= 57)
	{
		putchar(i + '\0');
		i++;
	}
	putchar('\n');
	return (0);
}
