#include "main.h"
/**
 * rev_string - print full string in reverse
 * @s: target string
 * Return: void
 */
void rev_string(char *s)
{
	int x = 0;
	int z = 0;
	int tmp;

	while (s[x] != '\0')
	{
		x++;
	}

	x--;

	while (z < x)
	{
		tmp = s[x];
		s[x] = s[z];
		s[z] = tmp;
		z++;
		x--;
	}
}
