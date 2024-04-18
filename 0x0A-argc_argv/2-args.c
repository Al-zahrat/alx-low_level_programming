#include "main.h"
/**
 * main - Entry point
 * Description: program to print all args
 * @argc: number of args
 * @argv: arguments
 * Return: 0 if success
*/
int main(int argc, char **argv)
{
	while (--argc)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
