#include "main.h"

/*
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @index: index variable
 * @n:
 * Return: 1 if it worked or -1 if an error occured
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
