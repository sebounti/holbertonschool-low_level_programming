#include "main.h"
#include <stdio.h>

/**
 * _isalpha - function that checks for alphabetic character.
 *
 * @c: The input character to check
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

