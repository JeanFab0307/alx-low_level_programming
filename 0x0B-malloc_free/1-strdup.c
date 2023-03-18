#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a new space in mem which a given string
 * @str: the string to return
 *
 *Return: a duplicate of str or NULL if str =null or insufficient in memory
 */
char *_strdup(char *str)
{
	char *buffer;
	unsigned int i;
	unsigned int len;

	len = 0;
	for (i = 0; !(str[i]); i++)
		len++;
	buffer = malloc(len + 1);
	if (buffer == NULL || str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		buffer[i] = str[i];
	return (buffer);
}
