#include <stdio.h>

/**
 * main - print hexadecimal numbers using putchar
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (n = 97; n < 103; n++)
		putchar(n);
	putchar(10);
	return (0);
}
