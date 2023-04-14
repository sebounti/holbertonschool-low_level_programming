#include "hash_tables.h"
/**
 *hash_table_set - adds a new key-value pair to a hash table.
 *@ht: A pointer to th ht.
 *@key: the key to add - cannot be an empty string.
 *@value: the value associated with key.
 *
 *Return: 1 on success, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index, i;
/*Vérifie si les paramètres sont valides*/
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	return (0);
/*Duplique la chaîne de caract "value" pour éviter de modif la chaîne orig*/
	value_copy = strdup(value);
	if (value_copy == NULL)
	return (0);
/*Calcule l'indice de la clé dans la table de hachage*/
	index = key_index((const unsigned char *)key, ht->size);
/*Parcourt le tabl à partir de l'indice de la clé jusqu'à la fin du tabl*/
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{/*La clé existe déjà, on remplace la valeur associée*/
		free(ht->array[i]->value);
		ht->array[i]->value = value_copy;
		return (1);
		}
	}
/*La clé n'existe pas encore, on crée une nouvelle node*/
new = malloc(sizeof(hash_node_t));
if (new == NULL)
{
	free(value_copy);
	return (0);
}
	new->key = strdup(key);/*Initialise la nouvelle node*/
	if (new->key == NULL)
	{
	free(new);
	return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
