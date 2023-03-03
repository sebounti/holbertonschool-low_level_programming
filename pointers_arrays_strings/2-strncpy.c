#include "main.h"

/**
 * _strncpy - copy seccond string n characters into first
 *
 * Return: dest.
 * @dest: string
 * @src: seccond string
 * @n: integer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
