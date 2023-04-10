#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: of a list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL) /*boucle qui parcoure la liste*/
	{
		current = head;
		head = head->next;
		free(current);/*libérer la mémoire allouée pour chaque élément */
	}
}


