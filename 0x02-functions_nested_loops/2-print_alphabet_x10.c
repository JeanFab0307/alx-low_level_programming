#include "main.h"

/**
 *print_alphabet_x10 - Print 10 times a to z
 *
 *Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char l;

	l = 'a';
	for (i = 0; i < 10; i++)
	{
		while (l != 'z' + 1)
			_putchar(++l);
		_putchar('\n');
	}
}
