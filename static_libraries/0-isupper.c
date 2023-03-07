#include <stdio.h>
/**
 * _isupper - function that checks for uppercase character.
 * @c: input
 * Return: 1 if C is found, else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
