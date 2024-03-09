#include "main.h"
/**
 * _isupper - function that checks for uppercase
 * @c: parameter
 * Return: integer
*/
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
