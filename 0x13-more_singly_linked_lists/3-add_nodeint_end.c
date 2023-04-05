#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a lisint_t
 * @head: a pointer to list where the node is added
 * @n: the int added in the node
 *
 * Return: the address of the element or NULL if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h, *temp;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	h->next = NULL;
	if (*head == NULL)
	{
	*head = h;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = h;
	}
	return (*head);
}
