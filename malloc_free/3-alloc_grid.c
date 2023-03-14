#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: width of array
 * @height: height of array
 *
 * Return: a double pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **pointer;

	i = j = 0;
	if (height < 1)
		return (NULL);
	pointer = (int **)malloc(height * sizeof(pointer));

	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		pointer[i] = malloc(width * sizeof(int));
		if (!(pointer))
			return (NULL);
		if (!(pointer[i]))
		{
			for (j = 0; j < i; j++)
				free(pointer[j]);
			free(pointer);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			pointer[i][j] = 0;
	}

	return (pointer);
}
