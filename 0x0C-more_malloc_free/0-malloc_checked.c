#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: amount of memory (bytes) to allocate
 * Return: pointer to location of mem, on fail terminate with status value 98
 */

void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b);

	if (x == NULL)
		exit(98);

	return (x);
}
