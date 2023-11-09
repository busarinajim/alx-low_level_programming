#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes variable of type struct dog
 * struct dog - variable type
 * @d: variable to be initialized
 * @name: parameter 1
 * @age: parameter 2
 * @owner: parameter 3
 * Return: 0
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
