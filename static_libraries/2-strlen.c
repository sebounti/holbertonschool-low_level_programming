#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 *
 * @s: variable
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int lg = 0;

	for (; *s != '\0'; s++)
	{
		lg++;
	}
		return (lg);
}
