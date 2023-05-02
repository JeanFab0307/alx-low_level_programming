#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum all the data n of a listint_t list
 * @head: the listint_t list
 *
 * Return: the sum of all data
 * Or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
