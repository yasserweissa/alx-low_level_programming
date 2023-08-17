#include <stdio.h>

/**
 * main - finds & prints the sum of the even-valued Fibonacci terms
 * not exceeding 4,000,000
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long int n1, n2, n3, sum;

	for (i = 1, n1 = 1, n2 = 2, sum = 0; i <= 33; ++i)
	{
		if (n1 < 4000000 && (n1 % 2) == 0)
		sum = sum + n1;
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	printf("%lu\n", sum);

	return (0);
}
