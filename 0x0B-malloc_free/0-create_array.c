#include <stdlib.h>
#include "main.h"
/**
 * create_array - create an array of chars, and initializes it woth a char
 * @size: the size of the array
 * @c: the char put
 *
 *Return:a pointer to the array or Null if size 0 or failure
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL || size <= 0)
		return (NULL);
	for (i = 0; i < size; i++)
		buffer[i] = c;
	return (buffer);
}
