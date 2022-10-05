#include "main.h"

/**
 * leet - make 1337
 * @s: string to become 1337
 * Return: tip toe 4
 */

char *leet(char *s)
{
	int x[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int y[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int a, b;

	for (b = 0; s[b] != '\0'; b++)
	{
		for (a = 0; x[a] != '\0'; a++)
		{
			if (s[b] == x[a])
				s[b] = y[a];
		}
	}
	return (s);
}
