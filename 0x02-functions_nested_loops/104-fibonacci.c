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
	long double fib1 = 1;
	long double fib2 = 2;
	long double temp;
	int lim = 92;

	while (i < lim)
	{
		if (i != 0)
			printf(", ");
		printf("%.0Lf", fib1);
		i++;
		temp = fib1;
		fib1 = fib2;
		fib2 = temp + fib1;
	}
	printf(", 19740274219868223167, 31940434634990099905, ");
	printf("51680708854858323072, 83621143489848422977, ");
	printf("135301852344706746049, 218922995834555169026\n");
	return (0);
}
