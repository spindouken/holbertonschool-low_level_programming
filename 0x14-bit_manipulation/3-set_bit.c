#include "main.h"

/* set_bit - function that sets a value of a bit to 1 at a given index
 * @n:
 * @index: index variable
 * Return: 1 if it worked, or 01 if an error occured
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
