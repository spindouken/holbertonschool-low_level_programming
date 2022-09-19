#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Description: Betty bois
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int asciiarray[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
						'a', 'b', 'c', 'd', 'e', 'f'};
	int x;

	for (x = 0; x < 16; x++)
	{
		putchar(asciiarray[x]);
	}
	putchar('\n');
	return (0);
}
