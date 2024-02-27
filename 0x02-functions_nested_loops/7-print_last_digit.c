#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @c: parameter
 * Return: integer
*/
int print_last_digit(int c)
{
	if (c >= 0)
		return (c % 10);
	else
		return ((c * (-1)) % 10);
}
