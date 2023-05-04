#include "main.h"

/**
 * print_binary - print the binary representation of a number
 * @n: the number
 * Description: no arrays allowed, nor % and /
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp = n;
	int i = 0;

	if (n)
	{
		while (tmp)
		{
			i++;
			tmp >>= 1;
		}
		while (i)
		{
			tmp = n >> --i;
			_putchar((tmp & 1) + '0');
		}
	}
	else
	{
		_putchar('0');
	}
}
