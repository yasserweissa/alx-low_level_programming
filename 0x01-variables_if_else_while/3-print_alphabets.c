#include <stdio.h>

/**
 * main - prints lowercase & uppercase alphabet, using putchar
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 97; ch < 123; ch++)
		putchar(ch);
	for (ch = 65; ch < 91; ch++)
		putchar(ch);
	putchar(10);
	return (0);
}
