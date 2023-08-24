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
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
			s[i] == ',' || s[i] == ';' || s[i] == '.' ||
			s[i] == '!' || s[i] == '?' || s[i] == '"' ||
			s[i] == '(' || s[i] == ')' || s[i] == '{' ||
			s[i] == '}' || i == 0)
		{
			while (s[i + 1] == ' ' || s[i + 1] == '\t' || s[i + 1] == '\n')
				i++;
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}
	}

	return s;
}
