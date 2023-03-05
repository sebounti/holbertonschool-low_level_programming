#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: the string to print
 */

void puts2(char *str)
{
	int l = 0;
	int x = 0;

	for (; str[l] != '\0'; l++)
	{
		;
	}
	l--;
	while (x <= l)
	{
		_putchar(str[x]);
		x = x + 2;
	}
	_putchar('\n');
}
