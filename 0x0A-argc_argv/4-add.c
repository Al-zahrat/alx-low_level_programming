#include "main.h"
#include <ctype.h>
/**
 * checknum - check string
 * @s: parameter string
 * Return: 0 or 1
*/
int checknum(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}
/**
 * main - Entry point
 * Description: program that check adds args
 * @argc: count
 * @argv: vectors
 * Return: 0 if success
*/
int main(int argc, char **argv)
{
	int i = 0;
	int sum = 0;

	while (argc > 1)
	{
		if (checknum(*argv))
			sum += atoi(*argv);
		else
		{
			printf("Error\n");
			return (1);
		}
		argc--;
		argv++;
	}
	printf("%d\n", sum);
	return (0);
}
