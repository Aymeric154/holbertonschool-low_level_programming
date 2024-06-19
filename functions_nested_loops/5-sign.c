#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * Return: zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+);
		return (1);
	}
       	else if (n < 0)
	{
		_putchar(-);
		return (-1);
	}
	else
       	{
		_putchar("30");
		return (0);
	}
}


