#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 * Return: 0 on success
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else if ((*s1 == '\0' && *s2 != '\0')
				|| (*s1 != '\0' && *s2 == '\0')
				|| (*s1 != *s2))
	}
	return (0);
}
