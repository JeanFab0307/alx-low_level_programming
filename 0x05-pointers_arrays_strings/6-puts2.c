#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - print every even char in a string
 * @str: the string
 */
void puts2(char *str)
{
	int l;
	int j;

	j = 0;
	l = strlen(str) - 1;
	while (j <= l)
	{
		if (j % 2 == 0)
			_putchar(str[j++]);
		j++;
	}
	_putchar('\n');
}
