#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Task 0: returns the sum of all it's parameters
 * @n: number of arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
	sum += va_arg(ap, unsigned int);

	va_end(ap);
	return (sum);

}
