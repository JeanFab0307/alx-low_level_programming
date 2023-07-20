#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: the list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
