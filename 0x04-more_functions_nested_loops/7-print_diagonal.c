#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: indicate the number of \ diagonal
 */

void print_diagonal(int n)
{
	int i;
	int j;

	j = 0;
	if (n > 0)
	{
		while (n > 0)
		{
			i = 0;
			while (i < j)
			{
				_putchar(' ');
				i++;
			}
			_putchar('\\');
			_putchar('\n');
			n--;
			j++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
