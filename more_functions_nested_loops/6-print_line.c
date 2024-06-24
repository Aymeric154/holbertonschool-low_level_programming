#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: is an integer
 *
 * Return: always zero
 */

void print_line(int n)
{
	int m;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n ; m++)
		{
			_putchar(95);
		}
	_putchar('\n');
	}
}
