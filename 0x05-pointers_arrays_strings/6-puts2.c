#include "main.h"
/**
 * puts2 - print first character then every other character
 * @str: target string
 * Return: void
 */
void puts2(char *str)
{
	int x = 0;
	int z;

	while (str[x] != '\0')
	{
		(x ++);
	}

	for (z = 0; z < x; z += 2)
	{
		_putchar(str[z]);
		str[z/2]=str[z];
	}
	_putchar (str[z]);
	_putchar('\n');
}
