#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtow - splits a string into words
 * @str: the string to split but space char
 *
 * Return: an array of the strings splited
 * Or NULL if failed
 */

char **strtow(char *str)
{
	int i = 0, j = 0;
	int size = 0;
	int n = 0;
	char **buffer;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] != ' ' && i == 0) ||
		    (str[i] != ' ' && str[i - 1] == ' '))
			size++;
	}
	if (size == 0)
		return (NULL);
	buffer = malloc(sizeof(*buffer) * ++size);
	if (buffer == NULL)
		return (NULL);
	buffer[--size] = '\0';
	size = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			size++;
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			buffer[n] = malloc(sizeof(char) * size + 1);
			if (buffer[n] == NULL)
			{
				for (j = 0; j <= n; j++)
					free(buffer[j]);
			}
			while (j < size)
			{
				buffer[n][j] = str[i - size + 1 + j];
				j++;
			}
			buffer[n][size] = '\0';
			size = 0, j = 0, n++;
		}
	}
	return (buffer);
}
