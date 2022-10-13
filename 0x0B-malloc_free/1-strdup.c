#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy string to allocated space
 * @str: string
 * Return: pointer to allocated space, NULL if error
 */

char *_strdup(char *str)
{
	char *mem;
	int x = 0;
	int y = 0;

	if (str == NULL)
		return (NULL);
	while (str[x] != '\0')
	{
		y++;
		x++;
	}

	mem = malloc((y + 1) * sizeof(char));

	if (mem == NULL)
		return (NULL);

	x = 0;

	while (str[x] != '\0')
	{
		mem[x] = str[x];
		x++;
	}

	return (mem);
}
