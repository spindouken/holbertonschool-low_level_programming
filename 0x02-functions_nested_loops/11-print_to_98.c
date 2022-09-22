#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98 using variable
 * @x: variable as int
 */
void print_to_98(int x)
{
	while (x < 98)
	{
		printf("%d, ", x);
		x++;
	}

	while (x > 98)
	{
		printf("%d, ", x);
		x--;
	}

	if (x == 98)
		printf("%d", x);

	printf("\n");
}
