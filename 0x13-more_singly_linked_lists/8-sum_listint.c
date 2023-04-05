#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * sum_listint - make the sum of the elements of listint_t
 * @head: the list
 *
 * Return: the sum or 0 if empty;
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		temp = head->next;
		head = temp;
	}
	return (sum);
}
