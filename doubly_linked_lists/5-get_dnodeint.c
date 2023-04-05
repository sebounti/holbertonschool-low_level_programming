#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: of the list
 * @index: of the node
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int count = 0;

	if (head == NULL) /*Vérification si la liste est vide*/
	{
		return (NULL);/*Si oui, on retourne NULL*/
	}
	else
	{
		current_node = head;/*Sinon, on pointe le pointeur courant sur le premier nœud*/
		while (count < index)/*Boucle pour parcourir la liste jusqu'à l'index voulu*/
		{

			if (current_node->next != NULL)/*Si le nœud courant a un nœud suivant dans la liste*/
			{
			current_node = current_node->next;/*On pointe le pointeur courant sur le nœud suivant*/
			count++;/*On incrémente le compteur de nœuds parcourus*/
			}
			else/*Si le nœud courant n'a pas de nœud suivant dans la liste*/
			{
			return (NULL);/*On retourne NULL car l'index n'existe pas dans la liste*/
			}
		}
	}
	return (current_node);/*On retourne le pointeur courant, qui pointe sur le nœud à l'index voulu*/
}
