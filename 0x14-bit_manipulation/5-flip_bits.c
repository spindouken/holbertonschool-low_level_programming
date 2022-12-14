#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number variable
 * @m: m variable
 * Return: see function description
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m;
	unsigned long int bitcount = 0;

	while (XOR)
	{
		bitcount += XOR & 1;
		XOR >>= 1;
	}
	return (bitcount);
}
