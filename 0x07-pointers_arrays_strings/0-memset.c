#include "main.h"

/**
 * _memset - fills the first n bytes of the memory pointed to by s
 * with the constant byte b
 * @s: pointer to target memory
 * @b: constant byte integer
 * @n: number of bytes
 * Return: s, now pointing at modified memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
		s[i] = b;
	return (s);
}
