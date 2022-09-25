#include "main.h"
/**
 * print_rev - print full string in reverse
 * @s: target string
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0, x, z;
	
	while (x = 0; s[x] != '\0'; x++)
	{
		length++;
	}

	z = length - 1;

	While (z < x)
	{
		temp = s[x];
		s[x] = s[z];
		s[z] = temp;
		x++;
		z--;
		_putchar(s[z]);
	}
	_putchar('\n');
}
