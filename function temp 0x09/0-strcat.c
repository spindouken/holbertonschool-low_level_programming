#include "main.h"

/**
 * _strcat - concatenate strings
 * @src: source string
 * @dest: destination string
 * Return: resulting concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(dest + x))
		x++;

	while (*(src + y))
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}

	*(dest + x) = '\0';

	return (dest);
}
