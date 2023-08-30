#include "main.h"

/**
 * primecheck - local helper function, checks if a number is prime
 * @n: integer, main number
 * @x: integer, to iterate
 * Return: 1 if the number is prime, 0 if otherwise
 */
int primecheck(int n, int x)
{
	if (x == 1)
		return (x);
	else if ((n % x) == 0 && x > 0)
		return (0);
	return (primecheck(n, x - 1));
}

/**
 * is_prime_number - returns 1 if a number is a prime number
 * @n: an integer, the target number
 * Return: 1 if the number is prime,, 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primecheck(n, n - 1));
}
