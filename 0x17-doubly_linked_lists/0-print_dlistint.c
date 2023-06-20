#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_dlistint - print the elements of a dlistint_t
 * @h: the list
 *
 * Return: the number of element printed
 */
size_t print_dlistint(const dlistint_t *h)
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
