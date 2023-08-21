#include "main.h"

/**
 * _strcpy - copies a string pointed to by src to buffer pointed to by dest.
 * including '\0'
 * @dest: pointer to a buffer
 * @src: pointer to a string
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
