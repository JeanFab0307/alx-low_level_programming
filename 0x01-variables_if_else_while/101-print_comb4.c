#include <stdio.h>

/**
 *main - Emtry Point
 *
 *Return: 0
 */

int main(void)
{
	int num0;
	int num1;
	int num2;

	num0 = '0';
	num1 = '0';
	num2 = '0';
	while (num0 != '9' + 1)
	{
		while (num1 != '9' + 1)
		{
			if (num1 > num0)
			{
				while (num2 != '9' + 1)
				{
					if (num2 > num1)
					{
						putchar(num0);
						putchar(num1);
						putchar(num2);
						if (num0 == '7')
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
			}
			else
			{
				num1++;
			}
			num2 = '0';
		}
		num1 = '0';
		num0++;
	}
	putchar('\n');
	return (0);
}
