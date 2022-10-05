#include "main.h"

/**
 * _strchr - locate a character in string at pointer s
 * @s: variable for pointer location
 * @c: target character in the string
 * Return: pointer to where the character is first found
 * in the string s and every character after or NULL
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] == c)
			return (s + x);
		x++;
	}
	if (s[x] == c)
		return (s + x);
	else
		return ('\0');
}
