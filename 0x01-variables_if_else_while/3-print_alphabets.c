#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase, and uppercase
 * Return: 0 succes
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n + '\0');
		n++;
	}
	n = 65;
	while (n <= 90)
	{
		putchar(n + '\0');
		n++;
	}
	putchar('\n');
	return (0);
}
