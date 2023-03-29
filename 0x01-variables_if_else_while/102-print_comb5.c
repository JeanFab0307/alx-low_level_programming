#include <stdio.h>

/**
 *main - prints all possible combinations of two digit numbers
 *
 *Return: Always 0
 */
int main(void)
{
	int a = '0', b = '0', c = '0', d = '1';

	while (a != '9' || b != '8' || c != '9' || d != '9' + 1)
	{
		if (b <= '9')
		{
			if (c <= '9')
			{
				if (a == c && d <= b)
				{
					c = a, d++;
				}
				else if (d <= '9')
				{
					if (!(a == '0' && b == '0'
					      && c == '0' && d == '1'))
						putchar(','), putchar(' ');
					putchar(a), putchar(b), putchar(' ');
					putchar(c), putchar(d), d++;
				}
				else
				{
					d = '0', c++;
				}
			}
			else
			{
				c = a, b++;
			}
		}
		else
		{
			b = '0', a++;
		}
	}
	putchar('\n');
	return (0);
}
