#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - gets the number of elements of a list_t list
 * @h: the list
 *
 * Return: the number of node
 * or 0 if str is NULL
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
