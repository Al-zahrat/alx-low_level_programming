#include "main.h"
/**
 * main - Entry point
 * Description: program to print number of args
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 if success
*/
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
