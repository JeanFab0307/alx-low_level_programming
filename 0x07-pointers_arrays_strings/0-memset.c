#include <string.h>
#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: the string filled
 * @b: the string that fills s
 * @n: the number of bytes changed
 *
 *Return: A pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
		s[i] = b;
	return (s);
}
