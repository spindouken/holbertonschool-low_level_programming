#include "main.h"

/**
 * _puts_rev_recursion - print string in reverse using recursion
 * @s: pointer to target string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
