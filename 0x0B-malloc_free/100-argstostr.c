#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments of the program
 * @ac: the number of arg
 * @av: an array of sting storing the args
 *
 * Return: a pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int size;
	char *buffer;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		size = size + j + 1;
	}
	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
		return (NULL);
	size = 0;
	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
			buffer[size++] = av[i][j++];
		buffer[size++] = '\n';
	}
	buffer[size] = '\0';
	return (buffer);
}
