#include <string.h>
#include "main.h"
/**
 *rev_string - reverses a string
 *@s: the string
 *
 *Return: nothing
 */
void rev_print(char *s)
{
	int l;
	int i;
	char *c;

	c = s;
	i = 0;
	l = strlen(s) - 1;
	while (l >= 0)
		*(s + i++) = c[l];

}