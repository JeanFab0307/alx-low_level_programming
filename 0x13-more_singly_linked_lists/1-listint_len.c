#include <stddef.h>
#include "lists.h"

/**
 * listint_len -  elements of listint_t list
 * @h: the listint_t
 *
 * Return: the number of elements in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
