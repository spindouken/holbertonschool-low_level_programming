#include "main.h"

/**
 * reverse_array - reverse array of n length
 * @a: variable with pointer to array
 * @n: length of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x = 0;
	int y = n - 1;
	int tmp;

	while (x < y)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
		x++;
		y--;
	}
}
