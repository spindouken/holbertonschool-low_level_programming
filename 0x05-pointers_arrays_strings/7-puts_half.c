#include "main.h"
/**
 * puts_half - print the second half of a string
 * @str: target string
 * Return: void
 */
void puts_half(char *str)
{
	int x, z, n;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
		{
			z = (x / 2);
			_putchar(str[z]);
		}
		if (x % 2 == 1 || x == 1)
		{
			n = (x - 1) / 2;
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
