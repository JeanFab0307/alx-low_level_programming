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

	ret = '\0';
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			for (j = 0; s[i] != '\0'; j++)
			{
				ret[j] = s[i];
				i++;
			}
			ret[j + 1] = '\0';
			break;
		}
		i++;
	}
	if (ret)
		return ("NULL");
	else
		return (ret);
}
