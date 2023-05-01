#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: the listint_t list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while (*head)
		{
			tmp = (*(*head)).next;
			free(*head);
			*head = tmp;
		}
	*head = NULL;
	}
}
