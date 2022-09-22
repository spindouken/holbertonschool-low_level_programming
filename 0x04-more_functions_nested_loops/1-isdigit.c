#include "main.h"
/**
 * _isdigit - used to check if variable is digit
 * @c: variable
 * Return: 1 if character is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
		else
		return (0);
}
