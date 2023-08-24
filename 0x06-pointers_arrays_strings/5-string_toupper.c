#include "main.h"

/**
 * string_toupper - changes all lower letters of a string to uppercase
 * @s: pointer to a string
 * Return: s, now pointing at an uppercase string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
}
