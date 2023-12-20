#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
*/
void print_alphabet_x10(void)
{
	int i = 97;
	int j = 0;

	while (j < 10)
	{
		for (; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
