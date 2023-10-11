#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * binary_search - search for a value in a sorted array using binary search
 * @array: the array of int
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index of the value in the array
 * Or -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	size_t i;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != left)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		mid = (right + left) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
