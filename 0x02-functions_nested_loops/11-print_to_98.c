#include <stdio.h>
#include <stdlib.h>

/**
 *print_to_98 - print numbers from a given number to 98
 *@n: the number given
 */
void print_to_98(int n)
{
	int interval;

	if (n < 0)
		interval = 98 + (-n) + 1;
	else
		interval = abs(98 - n) + 1;
	while (interval > 0)
	{
		if (n > 98)
			printf("%d", 98 + --interval);
		else
			printf("%d", 98 - --interval);
		if (interval > 0)
			printf(", ");
		else
			printf("\n");
	}
}
