#include <stdio.h>

/**
 * main - putchar lower case all alphabet
 *
 * Description: Betty bois
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' || x != 'e')
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
