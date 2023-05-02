#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given position
 * @head: the listint_t list where we insert the new node
 * @idx: the index in the list we insert the new node
 * @n: the value of the node
 *
 * Return: the address of the new node
 * Or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp, *tmp1, *tmp2;

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (NULL);

	tmp1 = *head;
	while (i < (idx - 1) && tmp1)
	{
		tmp1 = tmp1->next;
		i++;
	}
	tmp2 = tmp1->next;
	tmp->n = n;
	tmp->next = tmp2;
	tmp1->next = tmp;
	return (tmp);
}
