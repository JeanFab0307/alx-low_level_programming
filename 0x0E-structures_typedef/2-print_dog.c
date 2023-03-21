#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - print a struct dog: name, agew, owner
 * @d: name of the struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	else
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
