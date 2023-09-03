#include <unistd.h>
#include "main.h"
#include <stddef.h>

/**
 * _abs - [17] computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 **/
int _abs(int n)
{
	if (n >= 0)
		return (n);
	return (-n);
}
