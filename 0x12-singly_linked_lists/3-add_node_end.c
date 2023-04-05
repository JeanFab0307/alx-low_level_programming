#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node at the end of a list_t list
 * @head: a pointer to list where the node is added
 * @str: the string added in the node
 *
 * Return: the address of the element or NULL if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *buffer;
	list_t *h, *temp;
	unsigned int lenght = strlen(str);

	h = malloc(sizeof(list_t));
	temp = malloc(sizeof(list_t));
	if (h == NULL || temp == NULL)
		return (NULL);
	buffer = malloc(sizeof(char) * lenght);
	if (buffer == NULL)
	{
		free(h);
		free(temp);
		return (NULL);
	}
	buffer = strdup(str);
	h->str = buffer;
	h->len = lenght;
	h->next = NULL;
	if (*head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = h;
	}
	else
	{
		*head = h;
	}
	return (*head);
}
