#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes variables in struct dog
 * @d: pointer to structure
 * @name: of dog
 * @age: dogs age
 * @owner: owners name
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
