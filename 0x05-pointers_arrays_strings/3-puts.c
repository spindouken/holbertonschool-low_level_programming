#include "main.h"
/**
 * _puts - print full string
 * @str: target string
 * Return: void
 */
void _puts(char *str)
{
	int x;

	x = 0;

	while (str[x] != '\0')
		{
			_putchar(str[x]);
			x++;
		}
	_putchar('\n');
}
