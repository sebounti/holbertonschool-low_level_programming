#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: pointer to the square matrix of integers
 * @size: size of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int x, diag1 = 0, diag2 = 0;

	for (x = 0; x < size; x++)
	{
		diag1 += *(a + x * size + x);
		diag2 += *(a + x * size + size - 1 - x);
	}
	printf("%d, %d\n", diag1, diag2);
}
