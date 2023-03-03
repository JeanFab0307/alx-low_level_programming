#include "main.h"
/**
 * _strncpy - copies a defined number of char of a string to another
 * @dest: where the string is copied
 * @src: the string copied
 * @n: the number of char copied
 *
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
	}
	return (dest);
}
