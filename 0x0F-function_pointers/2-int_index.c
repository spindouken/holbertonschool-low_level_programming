#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: target array
 * @size: size of the array
 * @cmp: pointer to compare function
 * Return: index of the first element for which the cmp function
 * does not return 0, if no element matches, return -1,
 * if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return(-1);
	
	for (x = 0; x < size; x++)
		if (cmp(array[x]) > 0)
			return (x);

	return (-1);
}
