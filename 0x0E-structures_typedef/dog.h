#ifndef DOG_H
#define DOG_H

/**
 *struct dog - used to create a new element of my_dog
 *@name: contains the dog's name
 *@age: details the dog's age
 *@owner: shows the owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog, *d;

#endif
