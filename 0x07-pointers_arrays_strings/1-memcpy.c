#include "main.h"

/**
 * _memcpy - copy n bytes from memory area src to memory area dest
 * @dest: memory area destination
 * @src: memory area source
 * @n: # of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}

	return (dest);
}
