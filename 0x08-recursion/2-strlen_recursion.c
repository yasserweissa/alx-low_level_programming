#include "main.h"

/**
 * _strlen_recursion - returns length of string with recursion
 * @s: target string
 * Return: integer, length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
