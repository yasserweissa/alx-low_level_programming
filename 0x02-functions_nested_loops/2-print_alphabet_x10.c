#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10x in lowercase
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 97; ch < 123; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
