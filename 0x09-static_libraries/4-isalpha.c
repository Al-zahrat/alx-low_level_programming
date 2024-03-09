#include "main.h"
/**
 * _isalpha - function to check if c is alpha
 * @c: parameter
 * Return: 1 if success 0 Otherwise
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
