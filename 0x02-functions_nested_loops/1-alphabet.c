#include "main.h"

/**
 *print_alphabet - Print the letters a to z
 *
 *Description: Print all letter from a to z with _putchar
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
