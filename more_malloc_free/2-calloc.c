#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elemnts in the array
 * @size: of the elements
 *
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);
	mem = (char *) a;
	for (i = 0; i < size * nmemb; i++)
		*mem++ = 0;
	return (a);
}
