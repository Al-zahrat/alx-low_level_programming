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
	int i = 0;

	for (; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
