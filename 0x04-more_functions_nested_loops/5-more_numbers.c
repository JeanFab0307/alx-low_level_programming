#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 */

void more_numbers(void)
{
	int i;
	int j;

	j = 0;
	while (j <= 9)
	{
		i = 0;
		while (i <= 14)
		{
			if ((i / 10) > 1)
				_putchar('1');
			_putchar((i % 10) + '0');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
