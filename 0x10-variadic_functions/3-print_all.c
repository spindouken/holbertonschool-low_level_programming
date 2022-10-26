#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: array of possible data types passed to function
 */

void print_all(const char * const format, ...)
{
	va_list betty;
	char *delimiter = "";
	unsigned int x = 0;

	va_start(betty, format);
	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%s%c", delimiter, va_arg(betty, int));
				break;
			case 'i':
				printf("%s%d", delimiter, va_arg(betty, int));
				break;
			case 'f':
				printf("%s%f", delimiter, va_arg(betty, double));
				break;
			case 's':
				if (betty == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s%s", delimiter, va_arg(betty, char *));
				break;
		}
		delimiter = ", ";
		x++;
	}
}
