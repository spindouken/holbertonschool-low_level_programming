#include "main.h"
/**
 * print_rev - print full string in reverse
 * @s: target string
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int x;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	s--;

	for (x = length; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
