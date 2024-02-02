#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: parameter
 * @n: parameter
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int m = 0;

	for (; i < n / 2; i++)
	{
		m = a[i];
		a[i] = a[n - (i + 1)];
		a[n - (i + 1)] = m;
	}
}
