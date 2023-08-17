#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 & 2
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long int n1, n2, n3;

	printf("1, 2");

	for (n1 = 1, n2 = 2, i = 2; i < 98; i++)
	{
		n3 = n1 + n2;
		printf(", %lu", n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return (0);
}
