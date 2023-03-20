#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes variable struct dog
 * @struct dog - global struct for the elements of dog
 * @d: is the pointer
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
