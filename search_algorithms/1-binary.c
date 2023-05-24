#include "search_algos.h"

/**
 *binary_search - Searches for a value in a sorted array in ascending order
 *@array: Pointer to the first element of the array
 *@size: Number of elements in the array
 *@value: Value to search for
 *
 * Return: Index of the first occurrence of the value in the array,
 *         -1 if the value is not present or if the array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	int i, mid, low, high;

	if (array == NULL)
		return (-1);/*Tableau invalide*/

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);

			if (i != high)
			{
				printf(", ");
			}
		}

	printf("\n");

	mid = (low + high) / 2;

	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] < value)
	{
		low = mid + 1;
	}
	else
	{
		high = mid - 1;
	}

	}
	return (-1);  /* Value not found */
}
