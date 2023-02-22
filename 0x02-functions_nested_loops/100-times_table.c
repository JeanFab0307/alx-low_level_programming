#include "main.h"
/**
 *print_times_table - print the n times table starting with 0
 *@n: The limit of hte times table
 */
void print_times_table(int n)
{
	int i;
	int j;
	int res;

	i = '0';
	if (n > 15 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n + '1')
		{
			j = '0';
			res = 0;
			while (j < n + '1')
			{
				if ((res / 100) != 0)
				{
					_putchar(res / 100 + '0');
					_putchar(res / 10 + '0');
				}
				else if((res / 10) != 0)
				{
					_putchar(' ');
					_putchar((res / 10) %10 + '0');
				}
				else
				{
					if (j != '0')
					{
						_putchar(' ');
						_putchar(' ');
					}
				}
				_putchar(res % 10 + '0');
				if (j != n + '0')
				{
					_putchar(',');
					_putchar(' ');
				}
				j++;
				res = res + (i - '0');
			}
			_putchar('\n');
			i++;
		}
	}
}
