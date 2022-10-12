#include "main.h"

/**
  * rootfinder - finds the root of n 
  * @x: counter to help find root
  * @y: variable to find root of
  * Return: square root of n or -1
  */

int root_finder(int x, int y)
{
	if (x * x == y)
		return (x);

	if (x * x > y)
		return (-1);

	else
		return (root_finder(y, x + 1));
}

/**
 *_sqrt_recursion - return natural square root
 * @n: integer variable to find square root of
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	return (root_finder(n, 1));
}
