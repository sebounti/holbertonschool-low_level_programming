#include "hash_tables.h"
/**
*key_index - Calculates the index of a key in a hash table using djb2 hash.
* @key: The key to look up in the hash table.
* @size: The size of the hash table.
*  Return: The index of the key in the hash table.
* Description: Uses djb2 hash algorithm and modulo operator
* to ensure index is between 0 and size - 1.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);

}
