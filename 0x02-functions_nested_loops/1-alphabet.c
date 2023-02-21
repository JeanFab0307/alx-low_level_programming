#include "main.h"

/**
 *print_alpahbet - Print the letters a to z
 *
 *Return: Void
 */

void print_alphabet(void)
{
	char l;

	l = 'a';
	while (l != 'z' + 1)
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
