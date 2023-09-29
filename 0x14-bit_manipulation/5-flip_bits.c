#include "main.h"

/**
 * flip_bits - Returns the no. of bits to flip to get from a number to another
 * @n: the first unsigned long int
 * @m: the second unsigned long int
 * Return: the number of bits to flip or 0 if both numbers are the same
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count;

	xor_result = n ^ m;
	count = 0;
	while (xor_result > 0)
	{
		count += (xor_result & 1);
		xor_result >>= 1;
	}
	return (count);
}
