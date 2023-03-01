#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _atoi - convert a string to an int
 *@s: the string to convert
 *
 *Return: the int in the string and 0 if any
 */
int _atoi(char *s)
{
	int i;
	int j;
	int res;
	int len;

	i = 0;
	j = 0;
	res = 0;
	len = strlen(s);
	while (i < len)
	{
		if (s[i] == '-')
			j++;
		if (s[i] <= '9' && s[i] >= '0')
		{
			do {
				if (j % 2 == 0)
					res = res * 10 + (s[i] - '0');
				else
					res = res * 10 - (s[i] - '0');
				i++;
			} while (s[i] <= '9' && s[i] >= '0');
			break;
		}
		i++;
	}
	return (res);
}
