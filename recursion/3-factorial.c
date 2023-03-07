#include "main.h"
#include <stdio.h>

/**
 *factorial - fonction
 *
 *@n: character
 *
 *Return: 0 or 1
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
