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
		for (m = 0 ; m < 10; m++)
		{
			o = n * m;

			if (m == 0)
			{
				_putchar(o + '0');
			}

			if ( n < 10 && m != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(o + '0');
			} else if (o >= 10)
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
