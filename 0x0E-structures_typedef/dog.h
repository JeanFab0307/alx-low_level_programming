#ifndef DOG_H

#define DOG_H
/**
 * struct dog - gives a name, age and owner of a dog
 * @name:name of the dog
 * @age: his age
 * @owner: Who owns him
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
