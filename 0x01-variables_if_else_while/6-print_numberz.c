#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0
 */

int main(void)
{
	int num;

	num = '0';
	while (num != '9' + 1 )
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
