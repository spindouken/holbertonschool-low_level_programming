#include "main.h"
/**
 * _isalpha - checking if variable is an alphabetic character
 * @c: variable
 * Description: return 1 if variable is alphabetic character
 *
 * Return: 1 if c is an alphabetic character elsewise 0
 */
int _isalpha(int c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
