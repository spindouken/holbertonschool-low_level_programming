#include <stdio.h>
#include "main.h"
/**
 * print_array - print n elements of array from first to last
 * @n: indicates amount of array elements to be printed from first to  last
 * @a: array placeholder
 * Return: void
 */
void print_array(int *a, int n)
{
	int x = 0;

	while (x <= n || x != 0)
	{
		printf(", %d", a[x]);
		x++;
	}
	_putchar('\n');
}
