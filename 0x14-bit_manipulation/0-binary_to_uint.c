#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if:
 * there is one or more chars in the string b that is not 0 or 1
 * or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	int x = 0;
		
	if (b == NULL)
		return 0;

	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		
		while (b[x] == '0' || b[x] == '1')
		{
			conv <<= 1;
			conv += (b[x]-('0'));
			x++;
		}
	}
	return (conv);
}
