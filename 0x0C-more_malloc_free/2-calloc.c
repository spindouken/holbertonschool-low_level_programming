#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate memory for array
 * @nmemb: number of elements
 * @size: byte size of each element
 * Return: NULL if nmemb or size equal zero,
 * elsewise void pointer to allocated mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < (nmemb * size); x++)
		arr[x] = 0;

	return (arr);
}
