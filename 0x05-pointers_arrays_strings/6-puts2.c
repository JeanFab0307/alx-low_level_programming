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
	int i;
	int j;
	char a;

	j = 0;
	i = 0;
	l = strlen(str);
	while (j <= l)
	{
		if (j % 2 == 0)
		{
			if (j != 0)
			{
				a = str[j++];
				str[i++] = a;
			}
			_putchar(98);
		}
		a++;
	}
		puts(str);
}
