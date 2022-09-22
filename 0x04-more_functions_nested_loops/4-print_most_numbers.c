#include "main.h"
/**
 * print_numbers - print numbers
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char x;

	for (x = 0; x <= 9; x++)
	{
		if (!(x == 2 && x == 4))
		{
			_putchar(x + 48);
		}
	_putchar('\n');
	}
}
