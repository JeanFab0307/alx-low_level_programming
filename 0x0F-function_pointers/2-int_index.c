#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches an int in an array
 * @array: the array where th int is searched
 * @size: size of the array
 * @cmp :a ptr to a function to compare value
 *
 * Return: the index of the element compared in the array
 * or -1 if no match or if size <=0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp && array && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
