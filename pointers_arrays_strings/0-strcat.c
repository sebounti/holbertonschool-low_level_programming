#include "main.h"
/**
 * _strcat - callout function
 *
 * @dest: file to be appended into
 * @src: file to be appended from
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != 0)
		ptr++;
	while (*src != 0)
		*ptr++ = *src++;
	*ptr = 0;

	return (dest);
}
