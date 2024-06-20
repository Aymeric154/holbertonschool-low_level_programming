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
		for (m = 1 ; m <= 9; m++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');

			o = n * m;
			
		}
	}
}
