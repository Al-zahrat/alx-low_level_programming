#include "main.h"
/**
 * _isdigit - function that checks for a digit
 * @c: parameter
 * Return: integer
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
