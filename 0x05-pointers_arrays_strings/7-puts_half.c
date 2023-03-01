#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int l;
	int j;

	j = strlen(str) / 2;
	if (strlen(str) % 2 == 1)
		j++;
	l = strlen(str) - 1;
	while (j <= l)
		_putchar(str[j++]);
	_putchar('\n');
}
