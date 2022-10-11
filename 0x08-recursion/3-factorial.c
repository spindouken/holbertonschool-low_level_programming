#include "main.h"

/**
 * factorial - print factorial of n
 * @n: variable
 * Return: factorial, -1 if less than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
