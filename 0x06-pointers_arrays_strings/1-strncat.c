#include "main.h"

/**
 * _strncat - concatenates 2 strings using at most n bytes from src
 * @dest: pointer to 1st string
 * @src: pointer to 2nd string
 * @n: integer, number of bytes
 * Return: pointer to dest, now combined with src
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0';)
		a++;
	for (b = 0; src[b] != '\0' && b < n; a++, b++)
		dest[a] = src[b];
	dest[a] = '\0';
	return (dest);
}
