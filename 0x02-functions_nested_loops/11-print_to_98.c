#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all numbers from n to 98
 * @n: parameter
*/
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		else if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("%d\n", n);
}
