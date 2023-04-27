#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: the list
 *
 * Return: the number of node
 * or 0 if str is NULL
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] ", h->len);
		if (h->str)
			printf("%s\n", h->str);
		else
			printf("(nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}
