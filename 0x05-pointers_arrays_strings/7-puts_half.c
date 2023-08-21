#include "main.h"

/**
 * puts_half - prints half of a string then a new line
 * @str: string
 * Return: no return
 */
void puts_half(char *str)
{
	int length, i;

	for (length = 0; str[length] != '\0';)
		length++;
	for (i = 0; i < length / 2; i++)
		_putchar(str[i]);
}
