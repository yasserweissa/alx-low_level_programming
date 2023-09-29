#include "main.h"

/**
 * get_bit - Returns the value of the bit at a given index.
 * @n: the unsigned long int from which to get the bit value
 * @index: the index, starting from 0, of the bit to retrieve
 * Return: the value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
