#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: an integer, the number
 * Return: integer, the factorial of n. -1 indicates error, 1 if n = 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
