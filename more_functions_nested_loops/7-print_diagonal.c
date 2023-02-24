#include  "main.h"
#include <stdio.h>
/**
 * print_diagonal - a function that inserts a diagonal line in the terminal
 * @n: input number of time print character '\'
 * Return: If n is 0 or less, the function should only print \n
 */
void print_diagonal(int n)

{
int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
