#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: the linked list
 *
 * Return: the head's node's data
 * Or 0 if head is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i = 0;

	if (!head || !*head)
		return (i);

	tmp = (*(*head)).next;
	i = (*(*head)).n;
	free(*head);
	*head = tmp;
	return (i);
	
}
