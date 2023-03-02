#include <string.h>
#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: the string where we concatenates
 * @src: the string concatenated
 *
 *Return: the concatenation of dest and src
 */
char *_strcat(char *dest, char *src)
{
	int len1;
	int len2;
	int i;

	len1 = strlen(dest);
	len2 = strlen(src);
	i = 0;
	while (i < len2)
		dest[i + len1] = src[i++];
	return (dest);
}
