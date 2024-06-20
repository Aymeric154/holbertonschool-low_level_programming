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
		for (m = 0 ; m <= 9; m++)
		{
			o = n * m;

			if (m == 0)
			{
				_putchar(o + '0');
			}

			if ( n < 9 && m != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(o + '0');
			} else if (o >= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + o / 10);
				_putchar('0' + o % 10);
			}
		}
		_putchar('\n');

	}
}
