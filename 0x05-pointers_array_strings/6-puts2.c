#include "main.h"

/**
 * puts2 - prints everys other character of a string
 * @str: string
 * Return: no return
 */
void puts2(char *str)
{
	int length, i;

	for (length = 0; str[length] != '\0')
		length++;
	for (i = 0; i < length; i += 2)
		_putchar(str[i]);
}
