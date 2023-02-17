#include <stdio.h>

/**
 *main - Emtry Point
 *
 *Return: 0
 */

int main(void)
{
	int num1;
	int num2;

	num1 = '0';
	while (num1 != '9' + 1)
	{
		while (num2 != '9' + 1)
		{
			if (num2 > num1)
			{
				putchar(num1);
				putchar(num2);
				if (num1 == '8')
					break;
				putchar(',');
				putchar(' ');
				num2++;
			}
			else
			{
				num2++;
			}
		}
		num2 = '0';
		num1++;
	}
	putchar('\n');
	return (0);
}
