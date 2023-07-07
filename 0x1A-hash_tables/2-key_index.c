#include "hash_tables.h"

/**
 * key_index - The the index of a key
 * @key: A str that represent the key
 * @size: The size of the hash_table
 *
 * Return: The index at which the key/value should be stored in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
