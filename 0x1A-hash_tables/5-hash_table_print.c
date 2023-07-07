#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	int first = 0;
	unsigned long int i = 0;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		if (tmp != NULL)
		{
			if (first != 0)
				printf(", ");
			while (tmp != NULL)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
			first++;
		}
		i++;
	}
	printf("}\n");
}
