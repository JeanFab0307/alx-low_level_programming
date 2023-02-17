#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: always 0
*/

int main(void)
{
	char letter;

	letter = 'z';
	while (letter != 'a' - 1)
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');
	return (0);
}
