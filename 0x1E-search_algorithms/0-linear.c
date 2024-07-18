#include "search_algos.h"
/**
 * linear_search - function for searching
 * @array: parameter
 * @size: parameter
 * @value: parameter
 * Return: integer
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
