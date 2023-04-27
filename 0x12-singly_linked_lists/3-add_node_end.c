#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of the list
 * @head: the list_t list where we add the node
 * @str: the string added to the node
 *
 * Return: the address of the new element
 * or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *h;

	tmp = malloc(sizeof(list_t));
	if (!tmp)
		return (NULL);

	tmp->str = strdup(str);
	tmp->len = strlen(str);
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
	}
	else
	{
		h = *head;
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = tmp;
	}
	return (*head);
}
