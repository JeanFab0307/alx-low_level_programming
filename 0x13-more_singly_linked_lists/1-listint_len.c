#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of element in alistint_t
 * @h: hte list_t list as a constant
 *
 * Return: the number of nodea
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
