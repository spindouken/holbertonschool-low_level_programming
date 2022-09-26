#include "main.h"
/**
 * print_array - print n elements of array from first to last
 * @n: indicates amount of array elements to be printed from first to  last
 * @a: variable for place in array
 * Return: void
 */
void print_array(int *a, int n)
{
	int array[1000];
	int a = 0;

	while (a <= n)
	{
		_putchar(array[*a]);
		a++;
	}
	_putchar('\n');
}
