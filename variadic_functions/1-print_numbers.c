#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Task 1: prints numbers, followed by newline
 *
 * @separator: given separator to be printed between arguments
 * @n: number of arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (n > 0)
	{
		if (separator != NULL)
		{
			for (i = 0; i < n - 1; i++)
			printf("%d%s", va_arg(ap, unsigned int), separator);

				printf("%d", va_arg(ap, unsigned int));
		}
		else
		{
			for (i = 0; i < n; i++)
			printf("%d", va_arg(ap, unsigned int));
		}
	}
	printf("\n");
	va_end(ap);
}
