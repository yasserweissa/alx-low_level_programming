#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - initalize 2d array with zeros
 * @width: integer, width of array
 * @height:integer, height of array
 * Return: pointer to a 2D array, NULL if H or W is <= 0
 */
int **alloc_grid(int width, int height)
{
	int **arr, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (y = 0; y <	height; y++)
	{
		arr[y] = malloc(sizeof(int) * width);
		if (arr[y] == NULL)
		{
			for (; y >= 0; y--)
				free(arr[y]);
			free(arr);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
		for (x = 0; x < width; x++)
			arr[y][x] = 0;
	return (arr);
}
