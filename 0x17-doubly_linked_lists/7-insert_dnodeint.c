#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position in list
 * @h: The dlistint_t list
 * @idx: the idx of the node to get starting from 0
 * @n: The data
 *
 * Return:  THe address of the new node
 * Or Null if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *new, *tmp, *tmp1;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = *h;
	while (tmp->next != NULL)
	{
		if (i == idx)
		{
			tmp1 = tmp->next;
			new->prev = tmp;
			new->next = tmp->next;
			tmp->next = new;
			tmp1->prev = new;
			return (new);
		}
		tmp = tmp->next;
		i++;
	}

	if (i == idx)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
