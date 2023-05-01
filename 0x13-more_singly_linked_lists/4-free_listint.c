#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a listint_t list
 * @head: the listint_t list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	head = NULL;
}
