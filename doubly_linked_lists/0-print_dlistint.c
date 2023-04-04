#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{

	size_t s = 0;

	while (h)
	{
		if(!h->n)
			printf("[0] (nil)\n");
		else
			printf("[%d]\n", h->n);
		h = h->next;
		s++;
	}

	return (s);
}
