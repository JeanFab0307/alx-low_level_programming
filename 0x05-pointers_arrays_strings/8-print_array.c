#include <stdio.h>
#include"main.h"
/**
 * print_array - print n elements of an array of int
 * @a: the array of int
 * @n: the number of int displayed
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i++]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
