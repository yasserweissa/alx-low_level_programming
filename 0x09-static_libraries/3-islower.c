#include <unistd.h>
#include "main.h"
#include <stddef.h>

/**
 * _islower - [10] checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 **/
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
