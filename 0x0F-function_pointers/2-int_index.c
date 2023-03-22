#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an int in an array
 * @array: the given array
 * @size: the size of the array
 * @cmp: a ponter to a function used to compare values
 *
 *Return: the index of the match in the array or -1 if size<=0 and no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int res;

	res = 0;
	if (size <= 0)
		return (-1);
	for (i = 0; i < size && array[i] != '\0'; i++)
	{
		res = (*cmp)(array[i]);
		if (res != 0)
			return (i);
	}
	return (-1);
}
