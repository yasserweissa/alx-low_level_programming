#include "function_pointers.h"

/**
 * array_iterator - executes functions in an array
 * @array: array of pointers to functions
 * @size:int, size of the array
 * @action: pointer to current function
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
