#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dog_t structure
 * @d: pointer to structure
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		d = NULL;
	}
}
