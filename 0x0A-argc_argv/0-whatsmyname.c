#include "main.h"
#define UNUSED(x) void(x)
/**
 * main - Entry point
 * Description: program to print  the file name
 * @argc: parameter
 * @argv: parameter
 * Return: 0 success
*/
int main(int argc, char **argv)
{
	UNUSED(argc);
	printf("%s\n", argv[0])
	return (0);
}
