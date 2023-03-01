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
	len = strlen(s) - 1;
	while (i < len)
	{
		if (s[i] == '-')
			j++;
		if (s[i] <= '9' && s[i] >= '0')
		{
			if (j % 2 == 0)
				j = 1;
			else
				j = -1;
			do {
				res =(abs(res * 10 + (s[i] - '0'))) * j;
				i++;
			} while (s[i] <= '9' && s[i] >= '0');
			break;
		}
		i++;
	}
	return (res);
}
