#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of the list
 * @head: the list_t list where we add the node
 * @str: the string added to the node
 *
 * Return: the addreaa of the new element
 * or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (!tmp)
		return (NULL);
	tmp->str = strdup(str);
	tmp->len = strlen(str);
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
