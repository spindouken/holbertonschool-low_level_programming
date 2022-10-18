#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create array of integers containing all values
 * from min to max
 * @min: minimum
 * @max: maximum
 * Return: pointer to array, NULL on fail
 */

int *array_range(int min, int max)
{
	int x, y;
	int *arr;

	if (min > max)
		return (NULL);

	y = max - min + 1;

	arr = malloc(sizeof(int) * y);

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < y; x++, min++)
		arr[x] = min;

	return (arr);
}
