#include "search_algos.h"
/**
 * printarray - function to print array
 * @array: parameter
 * @start: parameter
 * @end: parameter
*/
void printarray(int *array, int start, int end)
{
	int i;

	for (i = start; i < end; i++)
	{
		printf(" %d,", array[i]);
	}
	printf(" %d\n", array[end]);
}
/**
 * binary_search - searches for a value in a sorted array
 * @array: parameter
 * @size: parameter
 * @value: parameter
 * Return: integer
*/
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t mid;

	while (l <= r)
	{
		printf("Searching in array:");
		printarray(array, l, r);
		mid = l + (r - l) / 2;
		if (array[mid] > value)
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
		if (array[mid] == value)
		{
			return (mid);
		}
	}
	return (-1);
}
