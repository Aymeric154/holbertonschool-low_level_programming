#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int hour, minute = 0;

	while (hour < 24)
	{
		while ( minute < 60)
		{
		_putchar(hour + '0');
		_putchar(hour + '0');
		_putchar(':');
		_putchar(minute + '0');
		_putchar(minute + '0');
		return(0);
		}

}
