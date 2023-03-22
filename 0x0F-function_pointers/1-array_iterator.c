#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - execute a function given on an array
 * @array: the given array
 * @size: size of the array
 * @action: the function executed on the array
 *
 *Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size && array[i] != '\0'; i++)
		(*action)(array[i]);
}
