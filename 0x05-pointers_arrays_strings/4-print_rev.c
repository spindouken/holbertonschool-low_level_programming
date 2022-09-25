#include "main.h"
/**
 * print_rev - print full string in reverse
 * @s: target string
 * Return: void
 */
void print_rev(char *s)
{
	char s[100] = {0}, Temp = 0;
	int x = 0, z = 0;

	while (s[z++] != '\0')

	z--;

	z--;

	while (x < z)
	{
		Temp = s[x];
		s[x] = s[z];
		s[z] = Temp;
		x++;
		z--;
		_putchar(s[z]);
	}
	_putchar("\n");
	return (0);
}
