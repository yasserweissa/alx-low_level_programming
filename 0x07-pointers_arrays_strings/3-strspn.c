#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to a string
 * @accept: pointer to a string
 * Return: number of bytes in initial segment of s,consisting bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, i, match;

	n = 0;

	while (*s)
	{
		match = 0;

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				match = 1;
				break;
			}
		}

		if (!match)
			break;

		s++;
	}

	return (n);
}
