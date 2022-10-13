#include "main.h"

/**
 * prime_search - recursively check for prime number
 * @x: number to be checked
 * @y: divising factor
 * Return: 1 if prime number elsewise 0
 */

int prime_search(int x, int y)
{
	if (x <= 1)
		return (0);
	if (x % y == 0)
		return (0);
	if (y == x / 2)
		return (1);
	else
		return (prime_search(x, y + 1));
}

/**
 * is_prime_number - check if number is prime
 * @n: number to be checked
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	return (prime_search(n, 2));
}
