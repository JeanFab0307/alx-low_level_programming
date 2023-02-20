#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry Point
 *
 *Return: Always 0
 */

int main(void)
{
	int n;
	int last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_num = n % 10;
	printf("Last digit of %d", n);
	if (last_num < 6 && last_num != 0)
		printf(" is %d and is less than 6 and not 0\n", last_num);
	else if (last_num > 5)
		printf(" is %dand is greater than 5\n", last_num);
	else
		printf(" is %d and is 0\n", last_num);
	return (0);
}
