#include "main.h"

/**
 * print_diagsums - prints the sum of 2 diagonals of a square matrix
 * @a: pointer to an integer
 * @size: integer, size of a diagonal
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	for (i = 0, sum1 = 0; i < size; i++)
		sum1 += a[i * size + i];
	for (i = size - 1, sum2 = 0; i >= 0; i--)
		sum2 += a[i * size + size - i - 1];
	printf("%d, %d\n", sum1, sum2);
}
