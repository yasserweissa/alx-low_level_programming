#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to array of integers (destination of its 1st integer)
 * @n: number of elements to swap
 * Return: no return, array integers are reversed from their addresses
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i <= n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
