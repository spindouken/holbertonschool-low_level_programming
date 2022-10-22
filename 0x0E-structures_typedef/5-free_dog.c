#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the dogetown (dog struct)
 * @d: variable pointer to doge struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
