#include "main.h"

int _10_power(int i);
/**
 * print_number - prints a number
 * @n: the number to print
 *
 *Return: nothing
 */

void print_number(int n)
{
	int i = 0;
	int res = n;

	while (1)
	{
		if (n < 0 && i == 0)
			_putchar('-');
		if (res == 0)
		{
			if (i == 0)
				_putchar(n + '0');
			while(i > 0)
			{
				res = (n / _10_power(--i)) % 10;
				if (n < 0)
					res = -res + '0';
				else
					res = res + '0';
			_putchar(res);
			}
			break;
		}
		res = res / 10;
		i++;
	}
}
/**
 * _10_power - gives 10 at the power of a number
 * @i: the power given to 10
 *
 *Return: the result of 10 at the power of i or 0 if fail
 */
int _10_power(int i)
{
	int result = 1;

	if (i < 0)
		return (0);
	while (i > 0)
	{
		result = result * 10;
		i--;
	}
	return (result);
}
