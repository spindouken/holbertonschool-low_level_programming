#include "main.h"
/**
 * int_strlen - return length of a string
 *
 * @s: variable
 *
 * Return: void
 */
int _strlen(char *s)
{
	x = 0;
	while(*(s + x))
		s++;
	return (s);
}
