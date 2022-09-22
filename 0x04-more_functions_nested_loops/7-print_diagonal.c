#include "main.h"
/**
 * print_diagonal - generate diagonal line extendable through variable
 *
 * @n: variable
 *
 * Return: \
 */
void print_diagonal(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar(92);
		_putchar('\n');
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
}
