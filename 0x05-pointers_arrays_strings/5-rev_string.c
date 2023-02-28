#include <string.h>
#include "main.h"
/**
 *rev_string - reverses a string
 *@s: the string
 *
 *Return: nothing
 */
void rev_string(char *s)
{
	int l;
	int i;

	i = 0;
	l = strlen(s) - 1;
	while (l >= 0)
	{
		s[i++] = s[l--];
	}

}
