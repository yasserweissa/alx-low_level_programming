#include "main.h"

/**
 * rev_string - reverses a string
 * @s: address of the first character of a string
 * Return: no return, reversing happens at addresses
 */
void rev_string(char *s)
{
	int temp, length, i;

	for (length = 0; s[length] != '\0';)
		length++;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
