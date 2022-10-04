#include "main.h"

/**
 * _strpbrk - search string for any set of bytes
 * @s: string to be searched
 * @accept: bytes that are within search tearms
 * Return: pointer to first byte occurence in s or NULL if none
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				s = &s[x];
				return (s);
			}
		}
	}
	return (NULL);
}
