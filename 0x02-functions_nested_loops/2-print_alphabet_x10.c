#include "main.h"
/**
 * print_alphabet_x10 - making function that prints the alphabet 10 times
 *
 * Description: print all of the lower case alphabet 19 times
 *
 * Return: On success 0.
 */
void print_alphabet_x10(void)
{
	char x;
	int i = 0;

	while (i <= 9)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
	i++;
	_putchar('\n');
	}
}
