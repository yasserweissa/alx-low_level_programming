#include "main.h"

/**
 * _strncpy - copies up to n characters from a string
 * @dest: pointer to string where characters will be copied to
 * @src: pointer to string where characters will be copied from
 * @n: integer to num of characters
 * Return: dest, now containing copied characters from src
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}
