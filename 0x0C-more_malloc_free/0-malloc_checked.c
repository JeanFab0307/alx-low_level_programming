#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of the memory to allocate
 *
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *buffer;

	buffer = malloc(b);
	if (!buffer && b != 0)
		exit(98);

	return(buffer);
}
