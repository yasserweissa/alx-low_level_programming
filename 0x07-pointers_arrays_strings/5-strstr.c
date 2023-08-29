#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to a string
 * @needle:pointer to the substring
 * Return: pointer to the beginning of found substring, Null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		*h = haystack;
		*n = needle;

		for (; (*h == *n) && (*n != '\0'; h++)
				n++;
		if (*p == '\0')
			return (haystack);
	}
	return ('\0');
}
