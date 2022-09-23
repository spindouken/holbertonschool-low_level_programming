#include "main.h"
/**
 * _puts - print string to stdout
 *
 * Return: void
 */
void _puts(char *str)
{
	int x;

	while ((*(str + x)) || ((*(str + x)) != '\0'))
		{
			_putchar(*(str + x));
			x++;
		}
	_putchar('\n');
}
