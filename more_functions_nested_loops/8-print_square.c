#include "main.h"
#include <stdio.h>

/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: is a size of square
 * Return:
 */

void print_square(int size)
{
	int i;
	int x;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
					 _putchar(35);
				_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
