#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of numbers
 * @size: number of elements in the aray
 * @cmp: pointer to a function
 * Return: index of element, -1 if no match or invalid size
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i])
			return (i);
	return (-1);
}
