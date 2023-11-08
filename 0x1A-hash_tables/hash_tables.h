#ifndef _HASH_TABLES_H_
#define _HASH_TABLES_H_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * struct shash_node_s - node of a hash table
 *
 * @key: value of the key
 * @value: the value corresponding to a key
 * @next: a pointer to the next node of the list
 * @sprev: a pointer to the previous element of the sorted linked list
 * @snet: a pointer to the next element of the soorted linked list
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;
/**
 * struct hash_table_s - sorted hash table data structure
 *
 * @size: the size of the array
 * @array: an array of size
 * Each cell of this array is a pointer to the first node of a linked list
 * @shead: a pointer to the first element of the sorted linked list
 * @stail: a pointer to the last element of the sorted linked list
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
	hash_node_t *shead;
	hash_node_t *stail;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

#endif
