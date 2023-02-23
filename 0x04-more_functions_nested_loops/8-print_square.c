#include "main.h"

/**
 * print_square - draw a square with #
 * @size: indicate the number of # by side
 */

void print_square(int size)
{
	int i;
	int j;

	j = size;
	if (size > 0)
	{
		while (size >= 0)
		{
			i = j;
			while (i >= 0)
			{
				_putchar('#');
				i--;
				_putchar('\n');
			}
			size--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
