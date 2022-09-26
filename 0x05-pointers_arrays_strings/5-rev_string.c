#include "main.h"
/**
 * rev_string - print full string in reverse
 * @s: target string
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int x;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	s--;

	for (x = length; x > 0; x--)
	{
		s--;
	}
}
