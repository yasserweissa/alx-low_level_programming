#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length of s
 */
int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
