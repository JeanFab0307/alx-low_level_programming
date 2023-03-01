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
		if (s[i] == '+')
			j++;
		else if (s[i] == '-')
			j--;
		if (s[i] <= '9' && s[i] >= '0')
		{
			do{
				res = res * 10 + (s[i] - '0');
				i++;
			}while (s[i] <= '9' && s[i] >= '0')
			len = i;
			break;
		}
		i++;
	}
	if (j >= 0)
		return (res);
	if (res < 0)
		return (0);
	else
		return (-res);
}
