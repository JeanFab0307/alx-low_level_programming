#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: a pointer to the listint_t list
 *
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (*head == NULL || head == NULL)
		return (0);
	i = (*(*head)).n;
	temp = (*(*head)).next;
	free(*head);
	*head = temp;
	return (i);
}
