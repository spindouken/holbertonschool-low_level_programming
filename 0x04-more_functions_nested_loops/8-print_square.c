#include "main.h"
/**
 * print_square - generate square extendable through variable
 *
 * @size: variable
 *
 * Return: # if making square, newline if 0 or less
 */
void print_square(int size)
{
	int size;
// two variables, but they are equal (as square would be) (ex. 2x2 square)
	
	for (size <= 0)
	{
		_putchar('\n');
	}
	for (size > 0)
	{
		(_putchar('#') * 2);
	}
}
