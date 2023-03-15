#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2 to concatenates
 *
 * Return: On succes a pointer, on failiure NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	if (n >= len2)
		n = len2;
	a = (char *) malloc(sizeof(char) * (len1 + n + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		a[i] = s1[i];
	for (j = 0; j < n; j++)
		a[j + len1] = s2[j];
	a[len1 + n] = '\0';
	return (a);
}
