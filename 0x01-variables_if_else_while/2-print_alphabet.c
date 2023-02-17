#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: always 0
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

	putchar('\n');
	return (0);
}
