#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0.
 *
 * return : 0
 */

void times_table(void)
{
	int n, m, o;

	for (n = 0; n < 10; n++)
	{
		_putchar('0');

		for (m = 1 ; m < 10; m++)
		{
			_putchar(',');
			_putchar(' ');

			o = n * m;

			if (o < 9)
			{
				_putchar('0');
			}
			else
			{
				_putchar('0' + o / 10);
				_putchar('0' + o % 10);
			}
		}
		_putchar('\n');

	}
}
