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
 * is_palindrome - returns one if a string is a palindrome
 * @s: target string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	for (len = 0; s[len] != '\0';)
		len++;
	return (palicheck(s, 0, len - 1));
}
