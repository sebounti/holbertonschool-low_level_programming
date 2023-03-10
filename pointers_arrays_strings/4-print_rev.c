#include "main.h"

/**
 * print_rev - prints a string in reverse order
 *
 * @s: the string to print
 *
 */

void print_rev(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		p++;
	}
		p = p - 1;
	while (p >= s)
	{
		_putchar(*p);
		p--;
	}
	_putchar ('\n');
}
