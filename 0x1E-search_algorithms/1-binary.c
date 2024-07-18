#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 * @array: parameter
 * @size: parameter
 * @value: parameter
 * Return: integer
*/
int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = size - 1;
	int mid;

	while (l != r)
	{
		mid = (r - l) / 2;
		if (mid > value)
		{
			r = mid - 1;
		}
		else
		{
			l = mid;
		}
		printf("Searching in array:");
		for (; l < r; l++)
			printf(" %d,", array[l]);
		printf(" %d\n", array[r]);
		if (mid == value)
			return (mid);
	}
	return (-1);
}
