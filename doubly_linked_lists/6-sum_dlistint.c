#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a linked list
 * @head: of the list
 *
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	if (head == NULL)/*Si le *P vers la tête de liste est NULL*/
	{
		return (0);
	}
	else
	{
		current = head;/*init le *P vers un élém de la list avc la tête de liste*/
		while (current != NULL)/*Tant que le *p vers l'élém courant est pas NULL*/
		{
			sum += current->n;/*ajoute la valeur de l'élément courant à la var sum*/
			current = current->next;/*On met à jour le *p vers l'élément suiv*/
		}
	}
	return (sum);
}
