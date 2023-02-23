#include <stdio.h>

/**
 * main - print Fizz for 3 multiples and Buzz for 5 multiples
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3) || (i % 5))
		{
			if (!(i % 3))
				printf("Fizz");
			if (!(i % 5))
				printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
}
