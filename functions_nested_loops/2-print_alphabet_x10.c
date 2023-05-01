#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char alpha;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);

		_putchar('\n');
	}
}
