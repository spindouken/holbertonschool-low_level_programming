#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create new array in heap
 * @c: character variable
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

 char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		array[x] = c;

	return (array);
}