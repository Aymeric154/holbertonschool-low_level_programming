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
		
		for (m = 1 ; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			o = n * m;

			if ( o < 9)
			{
				_putchar(o + '0');
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
