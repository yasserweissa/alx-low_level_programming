#include "main.h"

/**
 * print_chessboard - prints the chess board
 * @a: array pointer
 * Return: no return
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (y = 0; y < 8; y++)
	{
		for (x = 0; x < 8; x++)
			_putchar(a[y][x];
		_putchar('\n');
	}
}
