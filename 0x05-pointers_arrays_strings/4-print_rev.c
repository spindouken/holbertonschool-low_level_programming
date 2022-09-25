#include "main.h"
/**
 * print_rev - print full string in reverse
 * @s: target string
 * Return: void
 */
void print_rev(char *s)
{
	char temp;
	int x = 0, z;

	while (s[x] != '\0')
	{
		x++;
	}

	z = x - 1;

	while (x < z)
	{
		temp = s[x];
		s[x] = s[z];
		s[z] = temp;
		x++;
		z--;
		_putchar(s[x]);
	}
	_putchar('\n');
}
