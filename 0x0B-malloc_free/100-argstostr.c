#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: arguments number
 * @av: arguments vector
 * Return: pointer to a new string, NULL if fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, x, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += strlen(av[i] + 1);
	str = (char *) malloc(len + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0, x = 0; i < ac; i++)
	{
		strcpy(str + x, av[i]);
		x += strlen(av[i]);
		str[x] = '\n';
		x++;
	}
	str[x] = '\0';
	return (str);
}
