#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Intialize a variable of type struct dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog's owner
 * @d: Variable to be intialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
