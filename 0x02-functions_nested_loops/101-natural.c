#include <stdio.h>
#include "main.h"

/**
 * main - computes and prints the sum of all multiples of 3 or 5 below 1024
 *
 *Return: Always 0
 */
int main(void)
{
	int i = 0;
	int sum = 0;
	int lim = 1024;

	while (i < lim)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
