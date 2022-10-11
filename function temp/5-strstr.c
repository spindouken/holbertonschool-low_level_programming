#include "main.h"
#define NULL 0

/**
 * _strstr - locate a substring
 * @haystack: haystack (string) to search
 * @needle: substring
 * Return: pointer to beg of located substring
 * or NULL if substring not found
 */

char *_strstr(char *haystack, char *needle)
{
int x;

	for (; *haystack; haystack++)
	{
		for (x = 0; needle[x]; x++)
		{
			if (!(*(haystack + x)))
			{
				haystack = NULL;
				return (haystack);
			}
			if (*(haystack + x) != needle[x])
				break;
		}
		if (needle[x] == '\0')
			return (haystack);
	}
	haystack = NULL;
	return (haystack);
}
