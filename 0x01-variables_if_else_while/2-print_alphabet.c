#include <stdio.h>
/**
 * main - Entry point
 * Description: program that prints the alphabet in lowercase
 * Return: 0 if success
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n + '\0');
		n++;
	}
	putchar('\n');
	return (0);
}
