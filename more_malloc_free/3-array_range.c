#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * array_range - creates an array of intergers
 * @min: start
 * @max: end
 *
 * Return: on succes a pointer, else NULL
 *
 */
int *array_range(int min, int max)
{
int *arr;
int leng = (max - min + 1);
int i = 0;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (leng));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < leng ; i++)
	arr[i] = min++;

return (arr);
}
