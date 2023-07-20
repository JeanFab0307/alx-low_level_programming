#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Return the sum of all the data in a dlistint_t list
 * @head: the list
 *
 * Return: the sum of all data n
 * Or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while(head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
