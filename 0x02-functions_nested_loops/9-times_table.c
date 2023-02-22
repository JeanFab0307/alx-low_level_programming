#include "main.h"
/**
 *times_table - print times table fro; 0 to 9
 */
void times_table(void)
{
	int i;
	int j;
	int res;

	i = '0';
	while (i < '9')
	{
		j = '0';
		while (j < '9')
		{
			res = (i - '0') * (j - '0');
			if ((res / 10) == 0)
				_putchar(res / 10 + '0');
			else
				_putchar(' ');
			_putchar((res % 10 + '0');
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
