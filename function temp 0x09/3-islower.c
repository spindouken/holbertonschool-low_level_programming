#include "main.h"
/**
 * _islower - checking if variable prints lowercase character
 * @c: variable
 * Description: return 1 if variable is lowercase
 *
 * Return: 1 if c is lowercase elsewise 0
 */
int _islower(int c)
{

	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
