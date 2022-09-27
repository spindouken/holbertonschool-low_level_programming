#include "main.h"
/**
 * rev_string - print full string in reverse
 * @s: target string
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int x = 0;
	int tmp;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	length--;

	while (x < length)
	{
		tmp = s[length];
		s[length] = s[x];
		s[x] = tmp;
		length++;
		x--;
	}
}
