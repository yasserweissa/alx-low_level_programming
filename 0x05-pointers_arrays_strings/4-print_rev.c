#include "main.h"

/**
 * print_rev - prints a string in reverse, then a new line
 * @s: string
 * Return: no return
 */
void print_rev(char *s)
{
	int length, i;

	for (length = 0; *s != '\0'; length++)
		s++;

	for (i = length; i > 0; i--, s--)
		_putchar(*s);

	_putchar('\n');
}
