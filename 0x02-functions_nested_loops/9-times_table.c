#include "main.h"
/**
 *times_table - print times table fro; 0 to 9
 */
void times_table(void)
{
	int i;
	int j;

	i = '0';
	j = '0';
	while (i < '9')
	{
		while (j < '9')
		{
			if (((i * j) / 10) == 0)
				_putchar((i * j) / 10 + '0');
			else
				_putchar(' ');
			_putchar((i * j) % 10 + '0');
			if (j != '9')
			{
			_putchar(',');
			_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
