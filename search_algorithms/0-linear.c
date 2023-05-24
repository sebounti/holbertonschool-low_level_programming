#include "search_algos.h"
/**
 * linear_search - Search for a value in an array using the Linear search algo.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located,
 *         -1 if value is not present in the array or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		{
		return (-1); /* si tableau invalide */
		}

	for (i = 0; i < size; i++)
	{
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	if (array[i] == value)
	return (i); /* valeur trouvee a l'index*/
	}

	return (-1); /* si valeur non trouver dans le tableau */
}
