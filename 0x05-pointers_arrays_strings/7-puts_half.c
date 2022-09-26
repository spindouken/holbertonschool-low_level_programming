#include "main.h"
/**
 * puts_half - print the second half of a string
 * @str: target string
 * Return: void
 */
void puts_half(char *str)
{
	int x = 0;
	int z, n;

	while (str[x] != '\0')
	{
		x++;
	}

	if (x % 2 == 0)
	{
		z = (x / 2);

		while (str[z] != '\0')
		{
			_putchar(str[z]);
			z++;
		}
	}
	else if (x % 2 == 1)
	{
		n = (((x - 1) / 2) + 1);

		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
