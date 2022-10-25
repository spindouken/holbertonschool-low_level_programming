#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * @...: next parameter
 * Return: if n == 0 return 0, otherwise return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	unsigned int sum = 0;
	va_list numbers;

	va_start(numbers, n);

	if (n == 0)
		return (0);

	for (x = 0; x < n; x++)
		sum = sum + va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}
