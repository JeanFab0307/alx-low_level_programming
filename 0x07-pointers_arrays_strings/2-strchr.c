#include <string.h>
#include "main.h"
/**
 * _strchr - locates a char in a string
 * @s: the string wher we search
 * @c: the char being searched
 *
 *Return: a pointer to the first match or NULL if any
 */
char *_strchr(char *s, char c)
{
	int i;
	int j;
	char *ret;

	i = 0;
	j = 0;
	ret = '\0';
	while (!s[i])
	{
		if (s[i] == c)
		{
			while (!s[i])
			{
				ret[j] = s[i];
				j++;
				i++;
			}
			ret[j] = '\0';
			break;
		}
		i++;
	}
	if (ret)
		return ("NULL");
	else
		return (ret);
}
