#include "main.h"
/**
 * _abs -  computes the absolute value of an int
 * @c: parameter
 * Return: integer
*/
int _abs(int c)
{
	if (c < 0)
		return (-1 * c);
	else
		return (c);
}
