#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - operator addition
 * @a: first int to be summed
 * @b: second int to be summed
 * Return: sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - operator subtraction
 * @a: int to be subtracted from
 * @b: int to be removed from a
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operator
 * @a: first int for mul
 * @b: second int for mul
 * Return: prodcut of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operator
 * @a: The numerator
 * @b: The denominator
 * Return: the quotient of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modular operator
 * @a: numerator
 * @b: denominator
 * Return: the remainder of a / b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
