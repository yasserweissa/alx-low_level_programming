#include <stdio.h>

/**
 * main - print possible two 2-digit combinations
 * a number can appear only once
 * Return: 0
 */

int main(void) 
{
	int i = 0;

	while (i < 10000)
	{
		/* Extract the two two-digit numbers */
		int n1 = (i / 100);
		int n2 = (i % 100);

		/* Print the two two-digit numbers */
		putchar((n1 / 10) + 48);
		putchar((n1 % 10) + 48);
		putchar(' ');
		putchar((n2 / 10) + 48);
		putchar((n2 % 10) + 48);

		i++;

		/* Comma and space addition */
		if (i < 10000)
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
