#include "main.h"

/**
 * more_numbers - a function that prints 0-14 on a new line 10 times
 * _putchar is used only 3 times
 * Return: 0-14 10 separate times on new lines
 */

void more_numbers(void)
{
	int i, ro;

	for (ro = 0; ro < 10; ro++)
	{
		for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
	{
		_putchar((i / 10) + '0');
	}
		_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
