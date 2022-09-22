#include "main.h"
/**
 * print_numbers - print numbers
 * @x: variable
 * Return: 1 if character is a digit, 0 otherwise
 */
void print_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
