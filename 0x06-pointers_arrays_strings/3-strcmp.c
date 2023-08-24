#include "main.h"

/**
 * _strcmp - compares two strings character by character
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 * Return: 0 if s1&s2 are exactly the same, nonzero integer
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
