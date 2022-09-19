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
	char z;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
    for (z = 'A'; z <= 'Z'; z++)
    {
        putchar(z);
    }
	putchar('\n');
	return (0);
}
