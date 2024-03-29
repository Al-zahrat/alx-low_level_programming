#include "main.h"
/**
 * _pow_recursion - calcul the power
 * @x: parameter
 * @y: parameter
 * Return: integer
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
