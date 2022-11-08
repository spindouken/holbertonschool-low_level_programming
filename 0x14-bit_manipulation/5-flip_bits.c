#include "main.h"

/*
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n:
 * @m: 
 * Return: see function description
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int long bitcount = 0;

	bitcount += ((n ^ m) & 1);

	return (bitcount);
}
