#include "main.h"

/**
 * leet - encodes a string
 * @s: pointer to a string
 * Return: s, now encoded
 */
char *leet(char *s)
{
	int i, j;
	char *a, *b;

	a[] = "aAeEoOtTlL";
	b[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 10; j++)
			if (s[i] == a[j])
				n[i] = b[i];
	return (s);
}
