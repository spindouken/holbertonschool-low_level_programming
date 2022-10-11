#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 * Return: ascii integer difference of first diff letter of the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int difference;

	while (*(s1 + x) != '\0' || *(s2 + x) != '\0')
	{
		if (*(s1 + x) != *(s2 + x))
		{
			difference = *(s1 + x) - *(s2 + x);
			break;
		}
		else
			difference = 0;
		x++;
	}
	return (difference);
}
