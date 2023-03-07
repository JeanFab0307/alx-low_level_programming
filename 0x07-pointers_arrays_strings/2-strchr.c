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

	ret = 0;
	for (i = 0; !s[i]; i++)
	{
		if (s[i] == c)
		{
			for (j = 0; !s[i]; j++)
			{
				ret[j] = s[i];
				i++;
			}
			ret[j] = '\0';
			break;
		}
	}
	ret = "IDK";
		return (ret);
}
