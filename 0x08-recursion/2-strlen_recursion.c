#include "main.h"

/**
 * _strlen_recursion - print length of string using recursion
 * @s: pointer to string to counted
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (1 + _strlen_recursion(s));
}
