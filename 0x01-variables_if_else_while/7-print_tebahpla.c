#include <stdio.h>

/**
 * main - prints the alphabet in lower case, using putchar
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 122; ch > 96; ch--)
		putchar(ch);
	putchar(10);
	return (0);
}
