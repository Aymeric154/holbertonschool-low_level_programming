#include "main.h"

/**
 * print_square - a function that prints a square
 *
 * Return: always zero
 */

void print_square(int size)
{
	int n, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (n = 0; n < size; n++)
	{
		for (m = 0; m < size; m++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
