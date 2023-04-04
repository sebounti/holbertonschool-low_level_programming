#include "lists.h"

/**
 * print_dlistint - prints all the elements of a linked list
 * @h: pointer to the dlistint_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h!= NULL)
	{
		printf("[%d]\n", h->n);
		h = h->next;
		n_nodes++;

	}
	return (n_nodes);
}
