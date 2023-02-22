#include "main.h"
/**
 *jack_bauer - Print hours from 00:00 to 24:00
 *
 *Return: void
 */

/*@int: idk*/
void print_h(int, int, int, int);

void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	while (a != '2' || b != '3' || c != '5' || d != '9' + 1)
	{
		if (b != '9' + 1)
		{
			if (c != '5' + 1)
			{
				if (d != '9' + 1)
				{
					print_h(a, b, c, d);
					d++;
				}
				else
				{
					d = '0';
					c++;
				}
			}
			else
			{
				c = '0';
				b++;
			}
		}
		else
		{
			b = '0';
			a++;
		}
	}
}
/**
 *print_h - Print the hour format
 *@h1: First num of an hour
 *@h2: Second hour
 *@m1: First num of min
 *@m2: Second min
 *
 *Return: void
 */
void print_h(int h1, int h2, int m1, int m2)
{
	_putchar(h1);
	_putchar(h2);
	_putchar(':');
	_putchar(m1);
	_putchar(m2);
	_putchar('\n');
}
