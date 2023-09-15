#include "variadic_functions.h"

/**
 * sum_them_all - returns the sam of all its parameters
 * @n: number of parameters
 * @...: the paramaters
 * Return: sum of all parameters, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
