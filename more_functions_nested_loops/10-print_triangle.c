#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 *
 * Return: always zero
 */

void print_triangle(int size)
{
	{
		int n, m;

		if (size < 0)
		{
			_putchar('\n');
		}
		for (n = 1 ; n <= size ; n++)
		{
			for (m = 1; m < size; m++)
			{
				if (m <= size - n)
				{
					_putchar(32);
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
}
