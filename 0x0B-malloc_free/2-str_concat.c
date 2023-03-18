#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 *Return: the concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *buffer;
	unsigned int i;
	unsigned int len1;
	unsigned int len2;

	len1 = 0;
	len2 = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1 == NULL)
			break;
		len1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		if (len2 == NULL)
			break;
		len2++;
	}
	buffer = malloc(len1 + len2 + 1);
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		buffer[i] = s1[i];
	for (i = 0; i < len2; i++)
		buffer[len1 + i] = s2[i];
	buffer[len1 + len2 + 1] = '\0';
	return (buffer);
}
