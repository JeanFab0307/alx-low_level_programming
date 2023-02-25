#include <studio.h>
#include "main.h"
/**
 * main - find and print the biggest prime number of a number
 * Return: 0
 */
int main(void)
{
	long int n;
	int i;
	int j;

	n = 612852475143;
	for (i = 2; i <= n; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if (j % i == 0)
			{
				if (j == i)
					n = n / j;
				else
					break;
			}
		}
	}
	printf("%d", i);
	return (0);
}
