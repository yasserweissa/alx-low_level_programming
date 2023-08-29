#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to a string
 * @accept: pointer to a string
 * Return: a pointer to the byte in s matching a byte in accept, NULL if no
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
			if (*s == accept[i];
					return (s);
		s++;
	}
	return ('\0');
}
