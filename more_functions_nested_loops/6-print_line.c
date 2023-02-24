#include "main.h"
#include <stdio.h>

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: input number of time to print '_'
 * Return: If n is 0 or less, the function should only print \n
 */

void print_line(int n)
{
	int co;

	for (co = 0; co <= n; co++)
	{
		_putchar('_');
	}
	_putchar('\n');

}
