#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s: pointer to a string
 * Return: s, now pointing at a string with capitalized words
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (s[i] >= 'a' && s[i] <= 'z')
			i++;

		if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
		s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
		s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
		s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
		s[i - 1] == '}' || i == 0)
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
	}
	return (s);
}
