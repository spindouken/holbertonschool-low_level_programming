#include "main.h"

/**
  * root_finder - finds the root of n
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
		return (root_finder(x + 1, y));
}

/**
 *_sqrt_recursion - return natural square root
 * @n: integer variable to find square root of
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (root_finder(1, n));
}
