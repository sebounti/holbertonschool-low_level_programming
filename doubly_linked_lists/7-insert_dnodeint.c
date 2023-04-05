#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head
 * @idx: index where the new node should be added.
 * @n: data of the new node
 *
 * Return: The address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int count = 0;

/*Vérifie si la liste n'est pas vide*/
	if (*h == NULL)
		return (NULL);
/*Alloue l'espace mémoire pour le nouveau noeud*/
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
/*Initialise la valeur du nouveau noeud*/
	new->n = n;
/*Déplace le pointeur courant au début de la liste*/
	current = *h;
/*Parcourt la liste jusqu'à l'index précédent l'index d'insertion*/
	while (count < idx - 1)
	{
/*Vérifie si le noeud suivant existe*/
		if (current->next != NULL)
		{
		current = current->next;
		count++;
		}
		else
		{
		return (NULL);
		}
	}
/* Lie les pointeurs du nouveau nœud au nœud précédent et suivant */
	new->prev = current;
	new->next = current->next;
	current->next = new;
	current = new->next;
	current->prev = new;
	return (new);
}
