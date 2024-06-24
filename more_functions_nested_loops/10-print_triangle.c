#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 *
 * Return: always zero
 */

void print_triangle(int size)
{
	{
		int n, m, o;

		if (size < 0)
		{
			_putchar('\n');
		}
		for (n = 1; n < size ; n++)
		{
			for (m = size - n; m > 1; m--)
			{
				_putchar(32);
			}
			for (o = 1; o <= n; o++) 
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
