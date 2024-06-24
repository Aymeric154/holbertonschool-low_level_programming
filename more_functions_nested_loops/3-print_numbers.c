#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 *
 * Return: alway zero
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}
}
