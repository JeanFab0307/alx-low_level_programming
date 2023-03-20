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
			printf("(nil)");
		else
			printf("Name: %s\n", d->name);
		if (!(d->age))
			printf("(nil)");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("(nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
