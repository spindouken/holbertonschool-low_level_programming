#include "main.h"

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @
 * Return: 
 */

char *string_toupper(char *)
{
	int x;
	for (x = 0; str[x] != '\0'; x++)
	{
			if (str[x] >= 'a' && str[x] <= 'z')
				str[x] = str[x] - 32;
	}
	return (str);
}
