#include "main.h"

/**
 * print_triangle - draw a square with #
 * @size: indicate the number of # by side
 */

void print_triangle(int size)
{
	int i;
	int j;

	j = size;
	if (size > 0)
	{
		while (j > 0)
		{
			i = size;
			while (i > 0)
			{
				if (i <= j - size)
					_putchar('#');
				else
					_putchar(' ');
				i--;
			}
			j--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
