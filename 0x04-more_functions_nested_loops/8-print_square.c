#include "main.h"
/**
 * print_square - generate square extendable through variable
 *
 * @size: variable
 * @x: variable
 * @y: variable
 *
 * Return: # if making square, newline if 0 or less
 */
void print_square(int size)
{
	int x;
	int y;

	for (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 0; size > x; x++)
	{
		_putchar('#');
		for (y = 0; size > y; y++)
		{
			_putchar('#');
		}
	}
}
 