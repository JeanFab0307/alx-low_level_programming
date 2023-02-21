#include "main.h"
int _putchar(char c);
/**
 *print_alpahbet - print the letters a to z
 *
 *Return: nothing
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
}
