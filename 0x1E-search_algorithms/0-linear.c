#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * linear_search - search for a value in an array using linear search
 * @array: the array of int
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index of the value in the array
 * Or -1 if not found or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n",
		       i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
