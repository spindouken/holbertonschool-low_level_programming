#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2 dimensional array of int
 * @width: width of grid
 * @height: height of grid
 * Return: double pointer on success, NULL on failure,
 * if width or height is 0 or negative return NULL
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int x, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(sizeof(int) * width);
		if (arr[x] == NULL)
		{
			while (x >= 0)
			{
				free(arr[x]);
				x--;
			}
			free(arr);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (z = 0; z < width; z++)
		{
			arr[x][z] = 0;
		}
	}
	return (arr);
}
