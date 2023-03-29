#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	double fib1 = 1;
	double fib2 = 2;
	double temp;
	int lim = 50;

	while (i < lim)
	{
		if (i != 0)
			printf(", ");
		printf("%.0f", fib1);
		i++;
		temp = fib1;
		fib1 = fib2;
		fib2 = temp + fib1;
	}
	printf("\n");
	return (0);
}
