#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0
 */

int main(void)
{
	char letter;

	letter = 'a';
	while (letter != 'z' + 1)
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';
	while (letter != 'Z' + 1)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
