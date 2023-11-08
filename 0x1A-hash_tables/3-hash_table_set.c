#include "hash_tables.h"
/**
 * hash_table_set - sets a key to a value in the hash table
 * @ht: hash table including the added elements
 * @key: key value
 * @value: data stored
 *
 * Return: 1 if successful, 0 if unsuccessful
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node, *tmp;
	char *new_value;

	if(ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
	}
}
