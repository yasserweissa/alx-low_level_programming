#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: 1st string (main one)
 * @src: 2nd string (added one)
 * Return: new dest, now combined with src
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0';)
		a++;
	for (b = 0; src[b] != '\0'; a++, b++)
		dest[a] = src[b];
	dest[a] = '\0';
	return (dest);
}
