#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 * Description: program that multiply 2 numbers
 * @argc: parameter
 * @argv: parameter
 * Return: (0) if success (1) if error
*/
int main(int argc, char **argv)
{
	int x = 1;

	if (argc == 3)
	{
		argv++;
		while (--argc)
		{
			x *= atoi(*argv);
			argv++;
		}
		printf("%d\n", x);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
