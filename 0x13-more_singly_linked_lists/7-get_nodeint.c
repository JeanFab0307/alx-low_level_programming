#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
unsigned int listint_l(const listint_t *h);
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: a pointer to the listint_t list
 * @index: the index
 *
 * Return: returns the nth node of a listint_t linked list.
 * Or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	i = listint_l(head);
	if (i < index || head == NULL)
		return (NULL);
	i = 0;
	while (i < index)
	{
		temp = head->next;
		head = temp;
		i++;
	}
	temp->next = NULL;
	return (temp);
}
/**
 * listint_l - returns the number of element in alistint_t
 * @h: hte list_t list as a constant
 *
 * Return: the number of nodea
 */
unsigned int listint_l(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
