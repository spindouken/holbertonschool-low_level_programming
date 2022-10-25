#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by newline
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: next parameter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list strings;

	va_start(strings, n);

	if (separator == NULL)
		return;

	for (x = 0; x < n; x++)
	{
		if (strings != NULL)
			printf("%s", strings)
		else
			printf("(nil)");
		if (x < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
