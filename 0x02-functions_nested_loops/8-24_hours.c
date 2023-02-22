#include "main.h"
/**
 *jack_bauer - Print hours from 00:00 to 24:00
 *
 *Return: void
 */
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
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d++);
					_putchar('\n');
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
