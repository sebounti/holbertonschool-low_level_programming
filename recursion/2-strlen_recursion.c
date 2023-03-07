#include "main.h"
/**
 * _strlen_recursion - prints every other character of a string
 * @char s: the string to print
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return(0);
	s++;
	return( 1 + _strlen_recursion (s));
}
