#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the dogetown (dog struct)
 * @d: variable pointer to doge struct
 */

void free_dog(dog_t *d)
{
    if (d == NULL)
    {
        free (dogetown->owner);
        free (dogetown->age);
        free (dogetown->name);
    }
}
