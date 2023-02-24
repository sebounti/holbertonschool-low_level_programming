#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - a function that inserts a diagonal line in the terminal
 * @n: input number of time print character '\'
 * Return: If n is 0 or less, the function should only print \n
 */
void print_diagonal(int n)

{
int i;
int x;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		for (x = 0; x < i; x++)
		{
			 _putchar(32);
		}
		 _putchar('\\');
		 _putchar('\n');
		
	}
	else
	{		
	_putchar('\n');
	}	
}
