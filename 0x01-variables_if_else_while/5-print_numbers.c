#include <stdio.h>

/**
 * main - prints 0 to 9 (base10 single digit numbers) 
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	putchar(10);
	return (0);
}
