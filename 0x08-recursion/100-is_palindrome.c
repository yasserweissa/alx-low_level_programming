#include "main.h"

/**
 * palicheck - checks is the string is a palindrome
 * @s: the string
 * @i: initial integer
 * @z: last one
 * Return: 1 if pali, 0 if not
 */
int palicheck(char *s, int i, int z)
{
	if (i >= z)
		return (1);
	if (s[i] != s[z])
		return (0);
	return (palicheck(s, i + 1, z - 1));
}

/**
 * getlen - returns length of a string
 * @s: string
 * Return: length of string
 */
int getlen(char *s)
{
	if (*s != '\0')
		return (1 + getlen(s + 1));
	else
		return (0);
}

/**
 * is_palindrome - returns one if a string is a palindrome
 * @s: target string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = getlen(s);

	return (palicheck(s, 0, len - 1));
}
