#include "main.h"
/**
 * _isupper - used for checking for uppercase character
 * @c: variable
 * Description: check for uppercase character
 * Return: 1 if character is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
		else
		return (0);
}
