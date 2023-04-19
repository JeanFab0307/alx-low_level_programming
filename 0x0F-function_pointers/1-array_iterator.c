#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - execute an action on th elements of an array
 * @array: the array
 * @size: the size of the array
 * @action: what to do with the elements of the array
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action && array)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
