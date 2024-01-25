#include "main.h"
/**
 * puts2 - function to print char
 * @str: parameter
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		if ( str[i + 1] != '\0')
		{
			i = i + 2;
		}
		else break;
	}
	_putchar('\n');
}
