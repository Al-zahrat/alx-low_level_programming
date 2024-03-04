#include "main.h"
/**
 * _isupper - function that checks for uppercase
 * @c: parameter
 * Return: integer
*/
int _isupper(int c)
{
	if (c <= 65 && c >= 90)
		return (1);
	else
		return (0);
}
