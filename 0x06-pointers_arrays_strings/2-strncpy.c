#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: destination string
 * @src: source string
 * @n: variable
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; src[x] != '\0' && x < n; x++)
		dest[x] = src[x];

	while (x < n)
		dest[x] = '\0';
		x++;

	return (dest);
}
