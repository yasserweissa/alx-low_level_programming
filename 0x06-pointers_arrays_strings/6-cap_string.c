#include "main.h"

/**
 * is_separator - helper local funtion, checks if a character is a separator
 * @c: character to be checked
 * Return: 1 is separator, 0 if not
 */
int is_separator(char c)
{
	char separators[] = " \t\n,.!?\"(){}";
	for (int i = 0; separators[i] != '\0'; i++)
		if (c == separators[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalize all words of a string
 * @s: pointer to a string
 * Return: s, now pointing at a string with capitalized words
 */
char *cap_string(char *s)
{
	int C = 1;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (is_separator(s[i]))
			C = 1;
		else if (C && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 'a' - 'A';
			C = 0;
		}
		else
			C = 0;
	}
	return (s);
}
