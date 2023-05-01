#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of a listint_t list
 * @head: the listint_t list
 * @n: the value of n in the listint_t list
 *
 * Return: the address of the new element
 * Or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *tmp2;

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;
	if (*head)
	{
		tmp2 = *head;
		while (tmp2->next)
			tmp2 = tmp2->next;
		tmp2->next = tmp;
	}
	else
	{
		*head = tmp;
	}
	return (*head);
}
