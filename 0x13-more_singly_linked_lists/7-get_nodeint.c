#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the node of the listint_t list at a specified ind
 * @head: the listint_t list
 * @index: the index of the node starting at 0
 *
 * Return: the nth node of the listint_t list
 * Or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (i < index && head)
	{
		head = head->next;
		i++;
	}
	return (head);
}
