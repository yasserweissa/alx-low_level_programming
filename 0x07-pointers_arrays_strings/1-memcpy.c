#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to be copied
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, m;

	m = n;

	for (i = 0; i < m; i++, n--)
		dest[i] = src[i];
	return (dest);
}
