#include "main.h"

/**
 * _strchr -locates a character in a string
 * @s: pointer to a string
 * @c: a character to be searched for
 * Return: pointer to the first occurrence of a c in s, (null if not found)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
		if (s[i] == c)
			return (s + i);
	return (0);
}
