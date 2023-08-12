#include <stdio.h>

/**
 * main - print spaced numbers
 * Return: 0
 */

int main(void)
{
	for (int n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
