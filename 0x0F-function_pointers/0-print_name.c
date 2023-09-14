#include "function_pointers.h"

/**
 * print_name - prints a (provided) name
 * @name: string, provided name
 * @f:pointer to a function
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
