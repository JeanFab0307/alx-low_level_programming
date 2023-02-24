#include <stdio.h>
#include "main.h"

/**
 * main - print Fizz for 3 multiples and Buzz for 5 multiples
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			if ((i % 3) == 0)
				printf("Fizz");
			if ((i % 5) == 0)
				printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
	}
	_putchar('\n');
	return (0);
}
