#include <stdio.h>
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
	list_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
	head = NULL;
}
