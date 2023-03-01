#include "main.h"
#include "stdio.h"

/**
 * rev_string - prints a string in reverse order
 *
 * @s: the string to print
 *
 */

void rev_string(char *s)
{
	char *d = s;
	char *b = s;

	while (*b != '\0')
	{
		b++;
	}
		b--;
	for (; d < b; d++, b--)
	{
		char tmp = *d;
		*d = *b;
		*b = tmp;
	}
}

