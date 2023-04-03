#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_strings - Task 2: prints strings, followed by newline
 *
 * @separator: separator to be printed between arguments
 * @n: number of arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ag;
	unsigned int i;
	char *str1;
	const char *str2;

	va_start(ag, n);

	if (separator == NULL)
		str2 = "";
	else
		str2 = separator;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			str1 = va_arg(ag, char *);
			if (str1 != NULL)
				printf("%s%s", str1, str2);
			else
				printf("(nil)%s", str2);
		}
			str1 = va_arg(ag, char *);
			if (str1 != NULL)
			printf("%s", str1);
		else
			printf("(nil)");
	}

printf("\n");
va_end(ag);
}
