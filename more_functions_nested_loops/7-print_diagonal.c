#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line on the terminal.
 * @n : is an integer
 * Return: always zero
 */

void print_diagonal(int n)
{
	int m, o;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			for (o = 0; o < m; o++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
