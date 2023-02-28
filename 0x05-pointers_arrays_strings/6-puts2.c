#include <string.h>
#include "main.h"
/**
 * puts2 - print every even char in a string
 * @str: the string
 */
void puts2(char *str)
{
	long unsigned int l;
	int i;

	l = 0;
	i = 0;
	while (l <= strlen(str))
	{
		if (l % 2 == 0)
			str[i++] = str[l];
		l++;
	}
	l = strlen(str) - 1;
	while (l > i--)
		str[l--] = '\0';
}
