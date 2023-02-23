#include "main.h"

/**
 * print_line - print a line
 * @n: indicate the number of _ to be printed
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n >= 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
