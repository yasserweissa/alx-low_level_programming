#include <stdio.h>

void print_alphabet(void);

/**
 * main - Entry Point
 * Return: 0
 * Description: prints alphabet using function, followed by a new line
*/
int main(void)
{
	print_alphabet(void);
	putchar('\n');

	return (0);
}

/**
 * print_alphabet - prints alphabet in lowercase
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch < 123; ch++)
		putchar(ch);
}
