#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: bytes to copy from s2
 * Return: pointer to allocated space in mem
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z;
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
	if (y > n)
		y = n;

	str = malloc(sizeof(char) * (x + y + 1));
	if (str == NULL)
		return (NULL);

	for (z = 0; z < x; z++)
		str[z] = s1[z];

	for (z = 0; z < y; z++)
		str[z + x] = s2[z];

	str[x + y] = '\0';
	return (str);
}
