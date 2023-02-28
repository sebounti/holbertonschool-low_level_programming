#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the values of two integers.
 *
 * @a: int a
 *
 * @b: int b
 *
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;

}
