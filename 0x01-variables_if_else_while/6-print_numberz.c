#include <stdio.h>

/**
 * main - print numbers as ascii
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	putchar(10);
	return (0);
}
