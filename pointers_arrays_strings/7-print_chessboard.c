#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 *
 * @a: two dimension array
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int row = 0, col = 0;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
