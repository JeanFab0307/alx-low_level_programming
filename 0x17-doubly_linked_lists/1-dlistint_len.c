#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t
 * @h: the list
 *
 * Return: the number of element printed
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
