#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: alway zero
 */

void more_numbers(void)
{
	int t, n;


	for (t = 0; t <= 10; t++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}

			_putchar((n % 10) + '0');

		}
		_putchar('\n');
	}
}
