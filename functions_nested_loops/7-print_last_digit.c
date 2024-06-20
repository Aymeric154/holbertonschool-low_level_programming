#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: is integer
 *
 * Result: lastDigit
 */

int print_last_digit(int n)
{
	int lastDigit = 0;

	if (n < 0)
	{
		n = n * -1;
		lastDigit = n % 10;
		_putchar('0' + lastDigit);
		return (lastDigit);

	}
	else
	{
		lastDigit = n % 10;
		_putchar('0' + lastDigit);
		return (lastDigit);
	}


}
