#include "main.h"
/**
 * _puts - print full string
 * @str: target string
 * Return: void
 */
void _puts(char *str)
{
	int x;

	while (x=0; str[x] != '\0'; x++)
		{
			_putchar(str[x]);
		}
	_putchar('\n');
}
