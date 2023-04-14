#include "hash_tables.h"
/**
 * hash_table_get - Get the value associated with a key in a hash table.
 * @ht: Pointer to the hash table to search.
 * @key: Pointer to the key to search for.
 *
 * Return: If successful, returns a pointer to the value associated with the
 * given key. If not found, returns NULL.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{/* Déclaration des variables locales */
	hash_node_t *node;
	unsigned long int index;
/* Vérifier si la table de hachage et la clé existent */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
/* Calculer l'index de la clé dans la table de hachage */
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
/* Recherche de la clé dans la liste chainée correspondante */
	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;
/* Si la clé est trouvée, retourner la valeur correspondante */
	if (node == NULL)
	return (NULL);
else
	return (node->value);

}
