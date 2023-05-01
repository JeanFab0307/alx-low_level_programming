#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of a listint_t list
 * @head: the listint_t list
 * @n: the value of n in the listint_t list
 *
 * Return: the address of the new element
 * Or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
