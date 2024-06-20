#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: is integer
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int last_digit = 0;

	if (n < 0)
	{
		last_digit = n % 10 * -1;
		_putchar('0' + last_digit);
		return (last_digit);

	}
	else
	{
		lastDigit = n % 10;
		_putchar('0' + last_digit);
		return (last_digit);
	}


}
