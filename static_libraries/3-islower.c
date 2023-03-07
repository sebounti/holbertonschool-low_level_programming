#include "main.h"
#include <stdio.h>

/**
 * _islower - function that checks for lowercase character.
 *
 * @c: The input character to check
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i < 'z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}

