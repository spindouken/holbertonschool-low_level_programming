#include "main.h"

/**
 * _strspn - find length of prefix substring
 * @s: string to be checked
 * @accept: substring with bytes to be matched
 * Return: number of bytes matched 
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y;
	int z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
				if (s[x] == accept[y])
				{
					z++;
					break;
				}
				if (accept[y + 1] == '\0')
					return (z);
		}
	}
	return (z);
}
