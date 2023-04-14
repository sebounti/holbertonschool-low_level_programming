#include "hash_tables.h"
/**
 *hash_table_print - Print the contents of a hash table.
 *
 *@ht: Pointer to the hash table to print
 *
 *Description:
 *This function traverses each element of the hash table and prints
 *all key-value pairs associated with the nodes it contains.
 *The pairs are printed in the format '{'key': 'value', 'key': 'value', ...}'
 *with a comma between each pair. Elements of the table that contain
 *no nodes are not printed. If the table is NULL, the function does nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
