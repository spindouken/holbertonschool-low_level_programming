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
	va_list strings;
	unsigned int x;
	char *vaptr;

	va_start(strings, n);

	if (separator == NULL)
		separator = "";

	for (x = 0; x < n; x++)
	{
		vaptr = va_arg(strings, char *);
		if (vaptr != NULL)
			printf("%s", vaptr);
		else
			printf("(nil)");
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
