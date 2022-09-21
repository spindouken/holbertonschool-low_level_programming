#include "main.h"
/**
 * print_last_digit - print the last digit
 * @r: variable
 * Description: print the last digit of the variable (integer)
 *
 * Return: i
 *
 */
int print_last_digit(int r)
{
	int i = r % 10;

	if (r < 0)
	{
		i = (i * -1);
	}

	_putchar(i + 48);

	return (i);
}
