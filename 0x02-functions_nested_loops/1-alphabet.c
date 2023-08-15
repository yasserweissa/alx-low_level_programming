#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase followed by new line
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch < 123; ch++)
		_putchar(ch);
	_putchar('\n');
}
