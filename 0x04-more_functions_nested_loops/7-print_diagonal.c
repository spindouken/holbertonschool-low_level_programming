#include "main.h"
/**
 * print_diagonal - generate diagonal line extendable through variable
 *
 * @n: variable
 *
 * Return: void
 */
void print_diagonal(int n)
{
int x, z;

	if (n > 0)
		for (x = 1; n >= x; x++)
		{
			for (z = 1; x > z; z++)
				_putchar(32);
			_putchar('\\');
			_putchar('\n');
		}

	if (n < 1)
		_putchar('\n');
}
