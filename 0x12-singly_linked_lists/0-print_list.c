#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list- prints all elements of a list_t list
 * @h: hte list_t list as a constant
 *
 * Return: the number of nodea
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%i] %s\n", 0, "(nil)");
		else
			printf("[%i] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
