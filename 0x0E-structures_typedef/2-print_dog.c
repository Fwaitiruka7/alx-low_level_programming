#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * struct dog: global struct for dog
 * @d: the pointer for the dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}

	else
	{
		if (d->name == NULL || d->age == 0 || d->owner == NULL)
		{
			printf("Name: (nil)");
			printf("Age: (nil)");
			printf("Owner: (nil)");
		}
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %1f\n", d->age);
			printf("Owner: %s\n", d->owner);

		}
	}
}
