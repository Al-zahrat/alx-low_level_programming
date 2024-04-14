#include "main.h"
/**
 * main - Entry point
 * Description: program to print  the file name
 * @argc: parameter
 * @argv: parameter
 * Return: 0 success
*/
int main(int argc, char **argv)
{
	int i = 0;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	return (0);
}
