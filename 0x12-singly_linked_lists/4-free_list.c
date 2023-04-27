#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a list_t list
 * @head: the list
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head)
	{
		while (head)
		{
			tmp = head->next;
			free(head->str);
			free(head);
			head = tmp;
		}
		head = NULL;
	}
}
