#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: the string to print
 */
void _puts_recursion(char *s)
{
	_putchar(*(s));
	if (*(s) != '\0')
		_puts_recursion(s + 1);
	_putchar('\n');
}
