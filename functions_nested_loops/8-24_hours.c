#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int hour, h, minute, m = 0;

	while (hour < 2)
	{
		hour++;
		while (h < 9 )
		{
			h++;
			if ((hour < 1 && h < 9) || (hour < 2 && h < 3))
			{
				while (minute < 5)
				{
					minute++;
						while (m < 9)
						{
							m++;
							_putchar(hour + '0');
							_putchar(h + '0');
							_putchar(':');
							_putchar(minute + '0');
							_putchar(m + '0');
						}
				}
			}
		}
	}

}
