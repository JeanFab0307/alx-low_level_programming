#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a dlistint_t list
 * @head: the list
 * @n: the value of the new element
 *
 * Return: The address of the new element
 * Or Null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
