#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free the malloc of new dogs
 * @d: the struct dog
 */
void free_dog(dog_t *d)
{
	free(d);
}
