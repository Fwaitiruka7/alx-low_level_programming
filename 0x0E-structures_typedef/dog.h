#ifndef DOG_H
#define DOG_H

/**
 * struct dog_t - new name for struct dog
 * struct dog - used to create a elements for dog
 *@name: contains the dog's name
 *@age: details the dog's age
 *@owner: shows the owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

struct dog_t
{
	char *name;
	float age;
	char *owner;
} my_dog;

/* funtion prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
