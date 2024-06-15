#include "main.h"
/**
 * infinite_add - function to add numbers
 * @n1: parameter
 * @n2: parameter
 * @r: parameter
 * @size_r: parameter
 * Return: characters
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, sum = 0, rest = 0;
	int d, temp, max;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	max = i + 1;
	if (j > i)
		max = j + 1;
	if (size_r <= max)
		return (0);
	i = i - 1;
	j = j - 1;
	while (i >= 0 || j >= 0 || rest)
	{
		sum = rest;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';
		if ((size_r - 1) <= k)
			return (0);
		r[k++] = (sum % 10) + '0';
		rest = sum / 10;
	}
	r[k] = '\0';
	for (d = 0; d < k / 2; d++)
	{
		temp = r[k - 1 - d];
		r[k - 1 - d] = r[d];
		r[d] = temp;
	}
	return (r);
}
