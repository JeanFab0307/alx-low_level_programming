#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - print every even char in a string
 * @str: the string
 */
void puts2(char *str)
{
	unsigned long int l;
	unsigned long int i;

	l = 0;
	i = 0;
	while (l <= strlen(str) + 1)
	{
		if (l % 2 == 0)
			str[i++] = str[l];
		l++;
		_putchar(98);
	}
		puts(str);
}
