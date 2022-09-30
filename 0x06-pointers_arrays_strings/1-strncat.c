#include "main.h"

/**
 * main - check the code
 * @src: source string
 * @dest: string to be concanated against 1st string
 * @n: variable
 * Return: concantenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != src[n])
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';

	return (dest);
}
