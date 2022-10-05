#include "main.h"

/**
 * cap_string - capitalize first letter of each word of a string
 * @s: string to be capitalized
 * Return: the string post capitalization 
 */

char *cap_string(char *s)
{
	int x = 0;
	int y;
	nspcchar = 13;
	char spcchar[] = " \t\n,;.!?\"(){}";

	while (s[x])
	{
		y = 0;

		while (y < nspcchar)
		{
			if ((x == 0 || s[x - 1] == spc[x]) && (s[x] >= 97 && s[x] <= 122))
				s[x] -= 32;
			y++;
		}
		x++;
	}
	return (s);
}
