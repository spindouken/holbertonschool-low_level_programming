#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array & initialize with a char
 * @size: array size
 * @c: char
 * Return: pointer to array or NULL
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
