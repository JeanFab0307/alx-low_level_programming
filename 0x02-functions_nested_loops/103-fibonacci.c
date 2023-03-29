#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int fib1 = 1;
	int fib2 = 2;
	int temp;
	int sum = 0;
	int lim = 4000000;

	while (fib1 < lim)
	{
		if (fib1 % 2 == 0)
			sum = sum + fib1;
		temp = fib1;
		fib1 = fib2;
		fib2 = temp + fib1;
	}
	printf("%d\n", sum);
	return (0);
}
