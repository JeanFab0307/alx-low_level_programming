#include <stdio.h>

/**
 *main - Emtry Point
 *
 *Return: 0
 */

int main(void)
{
	int num;

	num = '0';
	while (num != '9' +1)
	{
		putchar(num);
		if (num == '9')
			break;
		putchar(',');
		putchar('\ ');
		num++;
	}
	putchar('\n');
	return (0);
}
