#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0.
 *
 * return : 0
 */

void times_table(void)
{
	int n, m, o;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (m = 1; m <= 9; m++)
		{
			_putchar(44);
			_putchar(32);
			o = n * m;

			if (o <= 9)
			{
				_putchar('0');
			}
			else
			{
				_putchar((o / 10) + '0');
				_putchar((o % 10) + '0');
			}
		}
		_putchar('\t');
		_putchar('\n');

	}
}
