#include "main.h"
/**
 * _strcpy - copy string indicted by pointer src
 * @dest: destination
 * @src: source
 * Return: destination for future reference
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
