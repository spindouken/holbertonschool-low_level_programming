#include "main.h"
/**
 * puts2 - print first character then every other character
 * @str: target string
 * Return: void
 */
void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		(x ++);
	}

	if (x % 2 == 0)
	{
		_putchar(str[x]);
	}	
	_putchar('\n');
}
