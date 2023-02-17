#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0
 */

int main(void)
{
	char letter;

	letter = '0';
	while (letter != '9' + 1)
	{
		putchar(letter);
		letter++;
	}

	letter = 'a';
	while (letter != 'f' + 1)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
