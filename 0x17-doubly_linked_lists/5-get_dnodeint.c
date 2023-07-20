#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t
 * @head: The list
 * @index: the index of the node to get starting from 0
 * Return:  The nth node of a dlistint_t
 * Or Null if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
