#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to add or update the key/value pair to
 * @key: a string of the key
 * @value: The value associated to the key
 *
 * Return: 1 if succeeded , 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || ht->size == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	if (ht->array[index] != NULL)
		tmp = ht->array[index];
	else
		tmp = NULL;
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = tmp;
	ht->array[index] = new_node;
	return (1);
}
