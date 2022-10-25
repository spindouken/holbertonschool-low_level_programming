#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by newline
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: next parameter
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list numbers;

	va_start(numbers, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(numbers, int));

		if (x < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
}
