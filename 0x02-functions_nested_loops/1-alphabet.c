#include "main.h"
/**
 * print_alphabet - making function that prints the alphabet
 *
 * Description: print all of the lower case alphabet
 *
 * Return: On success 0.
 */
void print_alphabet(void);
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	return (0);
}
