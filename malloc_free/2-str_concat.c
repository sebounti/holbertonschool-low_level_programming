
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: On success, a pointer to the concatenated string.
 *         On failure, NULL.
*/
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	char *result;
	int i;
	int j = 0;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	result = malloc((len1 + len2) * sizeof(char));

	if (result == 0)
	return (0);

	for (i = 0; i < len1; i++)
	{
		result[j++] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		result[j++] = s2[i];
	}
	return (result);
}
