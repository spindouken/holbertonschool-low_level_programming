#include "main.h"
/**
 * puts2 - print first character then every other character
 * @str: target string
 * Return: void
 */
void puts2(char *str)
{
	int x = 1;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		(x += 2);
	}
	_putchar('\n');
}
