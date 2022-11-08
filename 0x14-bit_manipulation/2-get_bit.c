#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to be printed in binary
 * @index: index variable
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((1 << index) & n)
		return (1);
	else
		return (0);
}
