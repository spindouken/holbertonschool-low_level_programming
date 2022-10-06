#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print diagonal sum of an array
 * @a: source of array
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int x;
	int y = 0;
	int z = 0;

	for (x = 0; x < size; x++)
	{
		y = y + a[((size + 1) * x)];
		z = z + a[((size - 1) * (x + 1))];
	}
	printf("%d, %d\n", y, z);
}
