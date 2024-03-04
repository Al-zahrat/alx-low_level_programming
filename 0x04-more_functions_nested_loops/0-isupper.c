#include "main.h"
/**
 * _isupper - function that checks for uppercase
 * @c: parameter
 * Return: integer
*/
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);

	else
		return (0);
}
