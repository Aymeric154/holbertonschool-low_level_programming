#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @x: number to check
 * @n: is integer
 *
 * Result: 0.
 */

int print_last_digit(int n)
{
	int x = 0;

	if (n < 0)
	{
		n = n * -1;
		x = n % 10;
		_putchar('0' + x);
		return (x);

	}
	else
	{
		x = n % 10;
		_putchar('0' + x);
		return (x);
	}


}
