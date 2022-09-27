#include "main.h"
/**
 * print_triangle - generate triangle extendable through variable
 *
 * @size: variable
 *
 * Return: void
 */
void print_triangle(int size)
{
	int x, y, z;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y < size; y++)
		{
			_putchar(32);
		}
		for (z = 1; z <= x; z++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
