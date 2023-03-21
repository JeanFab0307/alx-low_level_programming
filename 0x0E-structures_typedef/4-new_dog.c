#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new struct dog
 * @name: string for the name of the dog
 * @age: float for the age of the dog
 * @owner: string for the name of the owner
 *
 * Return: a structure made of the arguments name, age and owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
