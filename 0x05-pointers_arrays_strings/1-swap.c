#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: no return, values are swapped at their addresses
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
