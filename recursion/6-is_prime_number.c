#include "main.h"

/**
 * is_prime_number - function that returns prime number.
 * @n: number input.
 * Return: returns 1 if the input integer is a prime number, else 0.
 */

int is_prime_number(int n)
{
	if (n <= 1 || n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
	{
		return (0);
	}

	return (1);
}
