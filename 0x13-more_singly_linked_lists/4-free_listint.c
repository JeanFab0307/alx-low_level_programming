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
	while(head)
	{
		free(head);
		head = head->next;
	}
}
