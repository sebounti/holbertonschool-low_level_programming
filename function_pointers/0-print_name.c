#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the person to print
 * @f: pointer to the function that does the printing
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
