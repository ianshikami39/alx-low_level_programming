#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs.
 * @d: The dog tp be feeed.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
