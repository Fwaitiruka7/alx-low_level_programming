#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @dog_t - struct for dog
 * @d: pointer for dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
	}
	free(d);
}
