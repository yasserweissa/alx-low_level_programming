#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0
 * Description: prints alphabet using function, followed by a new line
*/

void print_alphabet(void);

int main(void)
{
	print_alphabet(void);
	putchar('\n');

	return (0);
}

void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch < 123; ch++)
		putchar(ch);
}
