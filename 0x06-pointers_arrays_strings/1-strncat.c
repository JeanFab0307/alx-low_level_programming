#include <string.h>
#include "main.h"
/**
 * _strncat - concatenates two strings at n bytes of the 2nd string
 * @dest: the string where we concatenates
 * @src: the string concatenated
 * @n: the number of char concatenated
 *
 *Return: the concatenation of dest and src
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1;
	int len2;
	int i;

	len1 = strlen(dest);
	len2 = strlen(src) - 1;
	i = 0;
	if (n > len2)
		n = len2;
	while (i < len2)
	{
		dest[i + len1] = src[i];
		i++;
	}
	dest[len1 + n] = '\0';
	return (dest);
}
