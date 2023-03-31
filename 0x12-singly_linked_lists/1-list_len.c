#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return the number of elements in a linked list_t
 * @h: hte list_t list as a constant
 *
 * Return: the number of nodea
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = (h->next);
	}
	return (i);
}
