#include "main.h"
/**
 * print_sign - print if the variable is negative positive or zero
 * @n: variable
 * Description: return the sign of the variable
 *
 * Return: 1 if n is greater than zero, 0 if zero, and -1 if less than zero
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
