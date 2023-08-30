#include "main.h"

/**
 * findsqrt - local helper function, tries to find sqrt starting from 1
 * @n: integer, main number
 * @x: integer, to be checked if it is sqrt
 * Return: sqrt, or 01 if doesn't exist
 */
int findsqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	return (findsqrt(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square room of a number
 * @n: an integer, the number
 * Return: the natural square root, or -1 if doesn't exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (findsqrt(n, 1));
}
