#include "main.h"

/**
 * _isalpha - check whether an input char is an alphabet
 * @c: the input char
 * Return: 1 if alphabet, 0 if not alphabet
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
