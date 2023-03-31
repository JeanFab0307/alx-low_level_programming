#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a list_t list
 * @head: the list to free
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		head = head->next;
	}
}
