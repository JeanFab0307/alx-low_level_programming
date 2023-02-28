#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *print_rev -  prints a string, in reverse, followed by a new line.
 *@s: the string
 *
 *Return: nothing
 */
void print_rev(char *s)
{
	int l;

	l = strlen(s) - ;
	while (l >= 0)
		_putchar(s[l--]);
	_putchar("\n");
}
