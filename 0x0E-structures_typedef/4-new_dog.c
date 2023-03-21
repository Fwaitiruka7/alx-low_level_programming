#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner's name
 *Return: NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_2;
	char *owner_2;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog != NULL)
	{
		name_2 = malloc(strlen(name) + 1);

		if (name_2 == NULL)
		{
			return (NULL);
		}

		owner_2 = malloc(strlen(owner) + 1);

		if (owner_2 == NULL)
		{
			return (NULL);
		}

		strcpy(name_2, name);
		strcpy(owner_2, owner);

		new_dog->name = name_2;
		new_dog->age = age;
		new_dog->owner = owner_2;
	}
	else
	{
		return (NULL);
	}
	return (new_dog);
}


