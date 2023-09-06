#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer to newly allocated space, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	arr = malloc(sizeof(char) * (i + j + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		arr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; i++, j++)
		arr[i] = s2[j];
	arr[i] = '\0';
	return (arr);
}
