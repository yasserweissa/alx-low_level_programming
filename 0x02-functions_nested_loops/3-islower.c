#include "main.h"

/**
 * _islower - check whether an input char is lowercase
 * @c: the input char
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
