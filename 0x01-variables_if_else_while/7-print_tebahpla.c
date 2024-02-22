#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the lowercase alphabet in reverse
 * Return: 0 success
*/
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n + '\0');
		n--;
	}
	putchar('\n');
	return (0);
}
