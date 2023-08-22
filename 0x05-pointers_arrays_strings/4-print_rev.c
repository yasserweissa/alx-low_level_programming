#include "main.h"

/**
 * print_rev - prints a string in reverse, then a new line
 * @s: string
 * Return: no return
 */
void print_rev(char *s)
{
	int length, i;

	for (length = 0; s[length] != '\0';)
		length++;

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
