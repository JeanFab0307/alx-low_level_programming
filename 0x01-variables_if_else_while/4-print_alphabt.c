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
		if (letter == 'e' || letter == 'q')
			continue;
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
