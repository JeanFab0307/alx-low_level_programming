#include <string.h>
#include "main.h"
/**
 * _strcpy - copy a string from a pointer to a dest
 * @dest: the array to copy the string
 * @src: the string copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len;
	int i;
	char *c;

	i = 0;
	c = src;
	len = strlen(c);
	while (i < len)
	{
		dest[i] = c[i];
		i++;
	}
	return (dest);
}
