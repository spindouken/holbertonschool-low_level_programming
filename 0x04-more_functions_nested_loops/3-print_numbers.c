#include "main.h"
/**
 * print_numbers - print numbers
 * @a: variable
 * Return: 1 if character is a digit, 0 otherwise
 */
void print_numbers(void)
{
	char x;

	for (x = 48; x <= 57; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
