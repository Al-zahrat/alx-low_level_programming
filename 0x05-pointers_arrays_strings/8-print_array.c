#include "main.h"
/**
 * print_array - function that print n number of array
 * @a: parameter
 * @n: parameter
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (; i <= n; i++)
	{
		if (i == n)
		{
			_putchar(a[i]);
		}
		else
			printf("%d, ", a[i]);
	}
	_putchar('\n');
}
