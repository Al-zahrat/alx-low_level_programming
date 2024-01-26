#include "main.h"
/**
 * puts_half - function to print half of string
 * @str: parameter
*/
void puts_half(char *str)
{
	int i = 0;
	int n = 0;

	while ( str[i] != '\0')
	{
		i = i + 1;
	}
	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i - 1) / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
}
