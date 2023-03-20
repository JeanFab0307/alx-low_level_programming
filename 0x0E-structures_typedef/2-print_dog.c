#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print a struct dog: name, agew, owner
 * @d: name of the struct dog
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
