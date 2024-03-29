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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
