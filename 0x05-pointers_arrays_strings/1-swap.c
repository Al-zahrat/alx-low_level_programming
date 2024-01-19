#include "main.h"
/**
 * swap_int - function that swaps values
 * @a: parameter one
 * @b: parameter two
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
