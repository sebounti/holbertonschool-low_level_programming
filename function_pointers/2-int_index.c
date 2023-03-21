#include "function_pointers.h"

/**
 * int_index - Task 2: Write a function that searches for an integer
 * returns the index of the first element for which cmp doesn't return 0
 *
 * @array: pointer to array being checked for integers
 * @size: number of elements of the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

	if (!array || !cmp)
		return (-1);

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			return (i);
		}
	}
	return (-1);

}
