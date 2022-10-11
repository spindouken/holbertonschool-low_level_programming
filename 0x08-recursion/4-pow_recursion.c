#include "main.h"

/**
 * _pow_recursion - raise x to power of y
 * @x: variable for integer
 * @y: power to raise int x to
 * Return: power of the number, -1 if power is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
