#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to allocated space in mem, NULL on fail
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int x, y, z, n;
	char *str;

	if (s1 == NULL)
		x = 0;

	else
	{
		x = 0;
		while (s1[x])
			x++;
	}

	if (s2 == NULL)
		y = 0;

	else
	{
		y = 0;
		while (s2[y])
			y++;
	}

	z = x + y + 1;

	str = malloc(sizeof(char) * z);

	if (str == NULL)
		return (NULL);

	for (n = 0; n < x; n++)
		str[n] = s1[n];

	for (n = 0; n < y; n++)
		str[n + x] = s2[n];

	str[x + y] = '\0';

	return (str);
}
