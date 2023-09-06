#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to new allocated space havig a copy of a string
 * @str: a given string
 * Return: pointer
 **/
char *_strdup(char *str)
{
	char *arr;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0';)
		i++;
	arr = malloc(sizeof(char) * (i + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		arr[i] = str[i];
	return (arr);
}
