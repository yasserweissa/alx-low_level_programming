#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value (beginning value)
 * @max: maximum value (last value)
 * Return: pointer to the array, NULL if unsuccessful
 */
int *array_range(int min, int max)
{
	int *p, i, range;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(sizeof(int) * range);
	if (!p)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (p);
}
