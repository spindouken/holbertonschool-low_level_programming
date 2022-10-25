#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that exectues a function from array
 * @array: target array of elements
 * @size: size of the array
 * @action: pointer to the function to utilize
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && action != NULL)
		for (x = 0; x < size; x++)
			action(array[x]);
}
