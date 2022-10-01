#include "main.h"

/**
 * _memset -  fill first n bytes of the memory area pointed to by s with the constant byte b
 * @s: memory area
 * @b: constant byte variable
 * @n: # of bytes variable
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++
	}

	return(s);
}
