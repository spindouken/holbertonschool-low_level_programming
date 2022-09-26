#include "main.h"
/**
 * print_array - print n elements of array from first to last
 * @n: indicates amount of array elements to be printed from first to  last
 * @a: array placeholder
 * @x: variable for place in array
 * Return: void
 */
void print_array(int *a, int n)
{
	int x = 0;

	while (x <= n)
	{
		_putchar((a[x]) + 48);
		x++;
	}
	_putchar('\n');
}
