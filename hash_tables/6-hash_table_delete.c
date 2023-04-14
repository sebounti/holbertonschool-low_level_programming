#include "hash_tables.h"
/**
 *hash_table_delete - Delete a hash table and its contents.
 *
 *@ht: Pointer to the hash table to delete.
 *
 *Description:
 *This function deletes a hash tabl and all nodes and their contents within it.
 *It frees the memory allocated for each node's key and value, then frees
 *the node itself. Finally, it frees the memory allocated for the hash table.
 *If the table is NULL, the function does nothing.
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
