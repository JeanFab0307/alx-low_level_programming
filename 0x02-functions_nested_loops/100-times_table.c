#include "main.h"
/**
 *print_times_table - print the n times table starting with 0
 *@n: The limit of hte times table
 *@r: result
 */
void one_digit(int r);
void two_digit(int r);
void three_digit(int r);

void print_times_table(int n)
{
	int i;
	int j;
	int res;

	i = '0';
	if (!(n > 15 || n < 0))
	{
		while (i < n + '1')
		{
			j = '0';
			res = 0;
			while (j < n + '1')
			{
				if ((res / 100) != 0)
					three_digit(res);
				else if((res / 10) != 0)
					two_digit(res);
				else
					if (j != '0')
					{
						one_digit(res);
					}
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
/**
 *one_digit - print number of 1 char
 *@r: the number with one or multiple digit
 */
void one_digit(int r)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(r % 10 + '0');
}
/**
 *two_digit - print number of 2 char
 *@r: the number with one or multiple digit
 */
void two_digit(int r)
{
	_putchar(' ');
	_putchar((r / 10) + '0');
	_putchar(r % 10 + '0');
}
/**
 *three_digit - print number of 3 char
 *@r: the number with one or multiple digit
 */
void three_digit(int r)
{
	_putchar(r / 100 + '0');
	_putchar((r / 10) % 10 + '0');
	_putchar(r % 10 + '0');
}
