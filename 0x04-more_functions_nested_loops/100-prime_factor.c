#include <stdio.h>

/**
 * main - finds& prints largest prime factor of the number 612852475143
 * then starts a new line
 * Return: 0
 */
int main(void)
{
	long int n, max, i;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; (i * i) <= n; i += 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	if (n > 2)
		max = n;

	printf("%ld\n", max);

	return (0);
}
