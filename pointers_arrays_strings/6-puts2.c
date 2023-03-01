#include "main.h"
#include "stdio.h"

/**
 * puts2- prints a string in reverse order
 *
 * @str: the string to print
 *
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
	_putchar (*str);
	str += 2;
	}

	_putchar ('\n');
}
