#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function to sum numbers
 * @a: parameter
 * @size: size
*/
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
	}
	for (; i >= 0; i--)
	{
		sum2 += a[(size * i) - 1];
	}
	printf("%d, %d\n", sum1, sum2);
}
