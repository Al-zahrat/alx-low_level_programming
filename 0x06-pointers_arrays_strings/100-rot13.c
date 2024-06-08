#include "main.h"
/**
 * rot13 - function that encodes a string
 * @str: parameter
 * Return: string
*/
char *rot13(char *str)
{
	int i, j;
	char *x = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *y = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (str[i] == x[j])
			{
				str[i] = y[j];
				break;
			}

		}
	}
	return (str);
}
