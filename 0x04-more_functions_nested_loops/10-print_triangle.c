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
	int x, z;

	for (x = 1; x <= size; x++)
	{
		for (z = size; z >= 1; z--)
		{
			if (x >= z)
				_putchar(35);
			else
				_putchar(32);
		}
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
