#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: unsigned int, number of bytes of s2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len1, len2;

	for (len1 = 0; s1[len1] != '\0';)
		len1++;
	for (len2 = 0; s2[len2] != '\0';)
		len2++;

	if (!str)
		return (NULL);
	if (n < len2)
		str = malloc(sizeof(char) * (len1 + n + 1));
	else
		str = malloc(sizeof(char) * (len1 + len2 + 1));
	for (i = 0, i < len1; i++)
		str[i] = s1[i];
	for (j = 0; (j < len2) && (i < (len1 + n)); i++, j++)
		str[i] = s2[j];
	str[i] = '\0';

	return (str);
}
