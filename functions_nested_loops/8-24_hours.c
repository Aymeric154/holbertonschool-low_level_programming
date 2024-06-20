#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int hour, h, minute, m;

	for (hour = 0; hour <= 2; hour++)
	{
		for (h = 0; h <= 9; h++)
		{
			if ((hour <= 1 && h <= 9) || (hour <= 2 && h <= 3))
			{
				for (minute = 0; minute <= 5; minute++)
				{
					for (m = 0; m <= 9; m++)
					{
						_putchar(hour + '0');
						_putchar(h + '0');
						_putchar(58);
						_putchar(minute + '0');
						_putchar(m + '0');
						_putchar('\n');
					}
				}
			}
		}
	}

}
