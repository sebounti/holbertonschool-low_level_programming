#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at a given position
 *
 * @h: Double pointer to the head of the list
 * @idx: Index of the list where the new node should be
 * @n: Data to assign to the new node
 *
 * Return: A pointer to the new node on SUCCESS, otherwise NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *tmp2 = NULL;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
/* Vérifier que l'allocation de mémoire a réussi */
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
/* Si la liste est vide et que l'indice n'est pas 0, retourner NULL */
	if (*h == NULL && idx != 0)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));
/* Parcourir la liste jusqu'à l'indice précédent le point d'insertion */
	for (; idx != 1; idx--)
	{
		if (tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
	}
/* Si le *p d'ins est à la fin de la liste, util la fonctadd_dnodeint_end() */
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	tmp2 = tmp->next;

	tmp->next = newNode;
	tmp2->prev = newNode;
/* Mettre à jour les pointeurs pour insérer le nouveau nœud */
	newNode->n = n;
	newNode->prev = tmp;
	newNode->next = tmp2;
/* Retourner le nouveau nœud inséré */
	return (newNode);
}
