#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints a character
 * @c: character to print
 * Return: 1 if successful, 0 if there was an error
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
