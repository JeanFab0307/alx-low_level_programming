#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9
 */

void print_most_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		if ( i != '2' || i != '4')
			_putchar(i++);
		else
			i++;
	}
	_putchar('\n');
}
