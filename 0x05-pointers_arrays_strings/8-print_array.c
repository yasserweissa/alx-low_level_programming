#include "main.h"

/**
 * print_array - prints n elements of an array, then a new line
 * @a: array (address of first element)
 * @n: number of elements
 * Return: no return
 */
void print_array(int *a, int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < (n - 1); i++)
			printf("%d, ", a[i]);
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
