#include "main.h"

/**
 *print_alpahbet - print the letters a to z
 *Return: void
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
