#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0
 * Description: prints alphabet 10x using function, followed by a new line
*/

void print_alphabet_x10(void);

int main(void)
{
	print_alphabet(void);

	return (0);
}

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (int i = 0; i < 10; i++)
	{
		for (ch = 97; ch < 123; ch++)
			putchar(ch);
	}
	putchar('\n');
}
