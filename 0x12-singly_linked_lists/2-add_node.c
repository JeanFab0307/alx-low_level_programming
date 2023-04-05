#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list_t list
 * @head: a pointer to list where the node is added
 * @str: the string added in the node
 *
 * Return: the address of the element or NULL if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *buffer;
	list_t *h;
	unsigned int lenght = strlen(str);

	h = malloc(sizeof(list_t));
	if (h == NULL)
		return (NULL);
	buffer = malloc(sizeof(char) * lenght);
	if (buffer == NULL)
	{
		free(h);
		return (NULL);
	}
	buffer = strdup(str);
	h->str = buffer;
	h->len = lenght;
	h->next = *head;
	*head = h;
	return (h);
}
