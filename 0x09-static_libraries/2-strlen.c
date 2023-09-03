#include <unistd.h>
#include "main.h"
#include <stddef.h>

/**
 * _strlen - [8] returns the length of a string
 * @s: string
 * Return: length
 **/
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
