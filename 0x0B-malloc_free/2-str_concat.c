#include "main.h"
/**
 * str_concat - concats strings
 * @s1: parameter
 * @s2: parameter
 * Return: returns concated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int count1 = 0, count2 = 0;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 != NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		count1 += 1;

	for (i = 0; s2[i] != '\0'; i++)
		count2 += 1;

	s = malloc(sizeof(char) * (count1 + count2 + 1));
	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s[i + count1] = s2[i];
		i++;
	}
	s[count1 + count2] = '\0';
	return (s);
}
