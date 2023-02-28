#include "main.h"

/**
 * print_rev - prints a string in reverse order
 *
 * @s: the string to print
 *
 */

void print_string(char *s)
{
        char *p = s;
        while (*p)
	[	
		_putchar(*p);
                p++;
	]
        while (p >= s)
        {
                _putchar(*p);
                p--;
        }
        _putchar ('\n');
}

