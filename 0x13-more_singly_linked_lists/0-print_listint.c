#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - prints all elements of listint_t list
 * @h: the listint_t
 *
 * Return: the number of elements in the listint_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
