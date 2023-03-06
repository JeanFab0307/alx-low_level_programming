#include <string.h>
#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: the string where the copy occurs
 * @src: the string being copied
 * @n: the number of bytes from src copied
 *
 *Return: A pointer to s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}
